%{
#include<bits/stdc++.h>
#include "SymbolTable.h"
#include "MPIwriter.h"
void yyerror(char const *s);
extern int yylex (void);

int stateGlobal = 0;
int stateFuncion = 0;

extern ofstream logFile;
extern ofstream errFile;
int statePragma = 0;
bool saltaFor = true;
std::string last_iter(""), first_iter("");

std::ofstream generado;
MPI_Writer mpi_writer;
SymbolTable table(30);
%}

%union{
	SymbolInfo * sym;
	vector <SymbolInfo*> *symList;
}

%token<sym> IDENTIFIER STRING_LITERAL SIZEOF
%token<sym> PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token<sym> AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token<sym> SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token<sym> XOR_ASSIGN OR_ASSIGN

%token<sym> TYPEDEF EXTERN STATIC AUTO REGISTER INLINE RESTRICT
%token<sym> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token<sym> BOOL COMPLEX IMAGINARY
%token<sym> STRUCT UNION ENUM ELLIPSIS

%token<sym> CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token<sym> CONSTANT

%type<sym> type_specifier struct_or_union_specifier enum_specifier struct_or_union specifier_qualifier_list   
%type<sym> storage_class_specifier direct_declarator declarator declaration_specifiers type_qualifier function_specifier   
%type<sym> init_declarator initializer parameter_declaration  struct_declarator      

%type<sym> primary_expression postfix_expression unary_expression cast_expression
%type<sym> multiplicative_expression additive_expression shift_expression
%type<sym> relational_expression equality_expression and_expression
%type<sym> exclusive_or_expression inclusive_or_expression logical_and_expression
%type<sym> logical_or_expression conditional_expression assignment_expression
%type<symList> init_declarator_list parameter_type_list parameter_list struct_declaration_list struct_declarator_list struct_declaration
%type<symList> declaration_list identifier_list declaration 

%start translation_unit
%%

primary_expression
    : IDENTIFIER
    | CONSTANT {$$ = $1;}
    | STRING_LITERAL
    | '(' expression ')'
    ;

postfix_expression
	: primary_expression {$$ = $1;}
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	| '(' type_name ')' '{' initializer_list '}'
	| '(' type_name ')' '{' initializer_list ',' '}'
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression {$$ = $1;}
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression {$$ = $1;}
	| '(' type_name ')' cast_expression
	;

multiplicative_expression
	: cast_expression {$$ = $1;}
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
	;

additive_expression
	: multiplicative_expression {$$ = $1;}
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

shift_expression
	: additive_expression {$$ = $1;}
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression {$$ = $1;}
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	;

equality_expression
	: relational_expression {$$ = $1;}
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

and_expression
	: equality_expression {$$ = $1;}
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression {$$ = $1;}
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression {$$ = $1;}
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression {$$ = $1;}
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression {$$ = $1;}
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression {$$ = $1;}
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression {$$ = $1;}
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';' {
		$$ = new vector<SymbolInfo*>();
		for(std::vector<SymbolInfo*>::size_type i = 0; i < $2->size(); i++){
			$2->at(i)->setVariableType($1->getSymbolType());
			SymbolInfo* symbol = new SymbolInfo(*$2->at(i));
			$$->push_back(symbol);
			table.insert($2->at(i));
			
		}
	}
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers {
		std::ostringstream oss;
		oss << $1->getSymbolType() << "_" << $2->getSymbolType();
		$2->setSymbolType(oss.str());
		$$ = $2; 
	}
	| type_specifier { $$ = $1; }
	| type_specifier declaration_specifiers { 
		std::ostringstream oss;
		oss << $1->getSymbolType() << "_" << $2->getSymbolType();
		$2->setSymbolType(oss.str());
		$$ = $2; 
	}
	| type_qualifier {$$ = $1; }
	| type_qualifier declaration_specifiers {
		std::ostringstream oss;
		oss << $1->getSymbolType() << "_" << $2->getSymbolType();
		$2->setSymbolType(oss.str());
		$$ = $2; 
	}
	| function_specifier {$$ = $1; }
	| function_specifier declaration_specifiers { 
		std::ostringstream oss;
		oss << $1->getSymbolType() << "_" << $2->getSymbolType();
		$2->setSymbolType(oss.str());
		$$ = $2; 
	}
	;

init_declarator_list
	: init_declarator	{ $$ = new vector<SymbolInfo*>(); $$->push_back($1); }
	| init_declarator_list ',' init_declarator	{ $1->push_back($3); $$ = $1; }
	;

init_declarator
	: declarator	{ $$ = $1; }
	| declarator '=' initializer	{ $1->setIsDefined(true); $$ = $1;}
	;

storage_class_specifier
	: TYPEDEF		{ $$ = new SymbolInfo("typedef", "TYPEDEF"); }
	| EXTERN		{ $$ = new SymbolInfo("extern", "EXTERN"); }
	| STATIC		{ $$ = new SymbolInfo("static", "STATIC"); }
	| AUTO			{ $$ = new SymbolInfo("auto", "AUTO"); }
	| REGISTER		{ $$ = new SymbolInfo("register", "REGISTER"); }
	;

type_specifier
    : VOID          { $$ = new SymbolInfo("void", "VOID"); }
    | CHAR          { $$ = new SymbolInfo("char", "CHAR"); }
    | SHORT         { $$ = new SymbolInfo("short", "SHORT"); }
    | INT           { $$ = new SymbolInfo("int", "INT"); }
    | LONG          { $$ = new SymbolInfo("long", "LONG"); }
    | FLOAT         { $$ = new SymbolInfo("float", "FLOAT"); }
    | DOUBLE        { $$ = new SymbolInfo("double", "DOUBLE"); }
    | SIGNED        { $$ = new SymbolInfo("signed", "SIGNED"); }
    | UNSIGNED      { $$ = new SymbolInfo("unsigned", "UNSIGNED"); }
    | BOOL          { $$ = new SymbolInfo("bool", "BOOL"); }
    | COMPLEX       { $$ = new SymbolInfo("complex", "COMPLEX"); }
    | IMAGINARY     { $$ = new SymbolInfo("imaginary", "IMAGINARY"); }
    | struct_or_union_specifier  { $$ = $1; }
    | enum_specifier             { $$ = $1; }
    ;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'    
	{ 
		$2->setIsStruct(true);
		$2->setVariableType($1->getSymbolType());
		table.insert($2);
	}
	| struct_or_union '{' struct_declaration_list '}' {

	}
	| struct_or_union IDENTIFIER
	{ 
		$2->setIsStruct(true);
		table.insert($2);
	}
	;

struct_or_union
	: STRUCT		{ $$ = new SymbolInfo("struct", "STRUCT"); }
	| UNION			{ $$ = new SymbolInfo("union", "UNION"); }
	;

struct_declaration_list
	: struct_declaration { 	$$ = $1; }
	
	| struct_declaration_list struct_declaration 
	{ 
		for(std::vector<SymbolInfo*>::size_type i = 0; i < $2->size(); i++){
			$1->push_back($2->at(i));
		} 
		$$ = $1; 
	}
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	{
		for(std::vector<SymbolInfo*>::size_type i = 0; i < $2->size(); i++){
			$2->at(i)->setVariableType($1->getSymbolType());
		}
		$$ = $2;
	}
	;

specifier_qualifier_list 
	: type_qualifier
	| type_qualifier specifier_qualifier_list
	| type_specifier  
	| type_specifier specifier_qualifier_list
	;

struct_declarator_list
	: struct_declarator { $$ = new vector<SymbolInfo*>(); $$->push_back($1); }
	| struct_declarator_list ',' struct_declarator { $1->push_back($3); $$ = $1; }
	;

struct_declarator
	: declarator { $$ = $1; }
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constant_expression
	;

type_qualifier
	: CONST { $$ = new SymbolInfo("const", "CONST"); }
	| RESTRICT { $$ = new SymbolInfo("restrict", "RESTRICT"); }
	| VOLATILE { $$ = new SymbolInfo("volatile", "VOLATILE"); }
	;


function_specifier
	:  INLINE { $$ = new SymbolInfo("inline", "INLINE"); }
	;

declarator
	: pointer direct_declarator { $2->setIsPointer(true); $$ = $2; }
	| direct_declarator	{ $$ = $1; }
	;


direct_declarator
	: IDENTIFIER		{ $$ = $1; }
	| '(' declarator ')' { $$ = $2; }
	| direct_declarator '[' type_qualifier_list assignment_expression ']'{
		if(!$1->isArray()){
			$1->setIsArray(true);
		}
		$1->addArrSize(($4->getSymbolName()));
		$$ = $1;
	}
	| direct_declarator '[' type_qualifier_list ']'{
		$1->setIsArray(true);
		$$ = $1;
	}
	| direct_declarator '[' assignment_expression ']' {
		if(!$1->isArray()){
			$1->setIsArray(true);
		}
		$1->addArrSize(($3->getSymbolName()));
		$$ = $1;
	}
	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'{
		if(!$1->isArray()){
			$1->setIsArray(true);
		}
		$1->addArrSize(($5->getSymbolName()));
		$$ = $1;
	}
	| direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'{
		if(!$1->isArray()){
			$1->setIsArray(true);
		}
		$1->addArrSize(($5->getSymbolName()));
		$$ = $1;
	}
	| direct_declarator '[' type_qualifier_list '*' ']'{
		$1->setIsArray(true);
		$$ = $1;
	}
	| direct_declarator '[' '*' ']'{
		$1->setIsArray(true);
		$$ = $1;
	}
	| direct_declarator '[' ']' {
		$1->setIsArray(true);
		$$ = $1;
	}
	| direct_declarator '(' parameter_type_list 
	{
		/*comprobar si es main o una funcion normal */
		stateFuncion = 0;
		if($1->getSymbolName() == "main"){
			stateGlobal = 3;
		}
		else{
			mpi_writer.nueva_funcion();
			stateGlobal = 2;
		}

	} ')' {
		
		$1->setParamList($3);
		$1->setIsFunction(true);
		$$ = $1;
	}
	| direct_declarator '(' identifier_list 
	{
		/*comprobar si es main o una funcion normal */
		stateFuncion = 0;
		if($1->getSymbolName() == "main"){
			stateGlobal = 3;
		}
		else{
			mpi_writer.nueva_funcion();
			stateGlobal = 2;
		}
	} ')' { $$ = $1; }
	| direct_declarator '('
	{
		stateFuncion = 0;
		if($1->getSymbolName() == "main"){
			stateGlobal = 3;
		}
		else{
			mpi_writer.nueva_funcion();
			stateGlobal = 2;
		}
	}')' { $$ = $1; }
	;

pointer
	: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list { $$ = $1; }
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration { $$ = new vector<SymbolInfo*>(); $$->push_back($1); }
	| parameter_list ',' parameter_declaration { $1->push_back($3); $$ = $1; }
	;

parameter_declaration
	: declaration_specifiers declarator {
		$2->setVariableType($1->getSymbolType());
		$$ = $2;
	}
	| declaration_specifiers abstract_declarator 
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER { $$ = new vector<SymbolInfo*>(); $$->push_back($1); }
	| identifier_list ',' IDENTIFIER { $1->push_back($3); $$ = $1; }
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' assignment_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' assignment_expression ']'
	| '[' '*' ']'
	| direct_abstract_declarator '[' '*' ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| designation initializer
	| initializer_list ',' initializer
	| initializer_list ',' designation initializer
	;

designation
	: designator_list '='
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: '[' constant_expression ']'
	| '.' IDENTIFIER
	;

statement
	: labeled_statement
	| compound_statement 
	| expression_statement
	| { table.enterScope(); } selection_statement { table.exitScope(); }
	| { table.enterScope(); } iteration_statement 
	{
		if(table.getTableSchedule() == true){
			statePragma = 6; 
		}
		table.exitScope(); 
	}
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' { if (table.getIsScopeReturn()) { stateFuncion = 4; };  }'}' 
	{ 
		
	}
	| '{' block_item_list { if (table.getIsScopeReturn()) { stateFuncion = 4; };  }'}'
	{ 
		 if (stateFuncion == 2 && saltaFor == false){
		 	logFile << "avanzo la maquina de estados de pragma de " << statePragma << " a 5 " << endl;
		 	statePragma = 5;
		 }
	} 
	;

block_item_list
	: block_item
	| block_item_list block_item
	;

block_item
	: declaration   
	| {  //AVANZAMOS LA MAQUINA DE ESTADOS 
		if(stateFuncion == 0 ){
			logFile << "avanzo la maquina de estados de " << stateFuncion << " a " << stateFuncion+1 << endl;
			stateFuncion++;
		}
	  } statement 
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE { table.exitScope(); table.enterScope(); } statement
	| SWITCH '(' expression ')' statement
	;

iteration_statement
    : WHILE '(' expression ')' statement
    | DO statement WHILE '(' expression ')' ';'
    | FOR '(' expression_statement expression_statement ')' statement
    | FOR '(' expression_statement expression_statement expression ')' statement
    | FOR '(' declaration expression_statement ')' statement
    | FOR '(' declaration expression_statement expression ')' statement
    ;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN { if (table.getIsScopeReturn()) { stateFuncion = 4; };  } ';'
	| RETURN { if (table.getIsScopeReturn()) { stateFuncion = 4; };  } expression ';'
	;

translation_unit
	: { mpi_writer.write_MPI_Includes(); stateFuncion = 0; } external_declaration 
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator {
		$2->setIsFunction(true);
		$2->setVariableType($1->getSymbolType());
		table.insert($2);
		table.enterScope();
		table.setIsScopeReturn(true);

	} declaration_list {
		table.getSymbolInfo($2->getSymbolName())->setParamList($4);

	} compound_statement {
		$2->setIsDefined(true);
		table.exitScope();
		mpi_writer.mpi_write_caracter("\n",stateGlobal,stateFuncion);
		stateGlobal = 1; 
		stateFuncion =  0;
			
	}	
	| declaration_specifiers declarator {
		$2->setIsFunction(true);
		$2->setVariableType($1->getSymbolType());
		table.insert($2);
		table.enterScope();
		table.setIsScopeReturn(true);
		if ($2->getParamList() != nullptr) {
			for(std::vector<SymbolInfo*>::size_type i = 0; i < $2->getParamList()->size(); i++){
				SymbolInfo* symbol = new SymbolInfo(*$2->getParamList()->at(i));
				table.insert(symbol);
			}
		}
	} compound_statement {
		$2->setIsDefined(true);
		table.exitScope();
		mpi_writer.mpi_write_caracter("\n",stateGlobal,stateFuncion);
		stateGlobal = 1; 
		stateFuncion = 0; 
			
	}
	;

declaration_list
    : declaration { 
        $$ = new vector<SymbolInfo*>();
        $$->insert($$->end(), $1->begin(), $1->end());
    }
    | declaration_list declaration { 
        $1->insert($1->end(), $2->begin(), $2->end());
        $$ = $1;
    }
    ;


%%
#include <stdio.h>

extern char yytext[];
extern int column;
extern int line_count;

void yyerror(char const *s)
{
	logFile << "Error at line " << line_count << " column: " << column << ": syntax error" << endl << endl;
	errFile << "Error at line " << line_count << " column: " << column << ": syntax error" << endl << endl;
	error_count++;

	/* fflush(stdout);
	printf("\n%*s\n%*s\n", line_count, "^", column, s); */
}
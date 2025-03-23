CC=g++
# CFLAGS=-gx -DBASE_REPRESENTATION
#CFLAGS=-gx 
CFLAGS=-Wall
LDFLAGS=-ll

YACC= bison  
#YFLAGS=-Nl1200 -d -v -t
YFLAGS= -g -k -d -v -t

LEX= flex -p 

OBJS=ompparser.o omplexer.o y.tab.o lex.yy.o main.o

all: fparse

fparse: $(OBJS)
	$(CC) -o fparse $(CFLAGS) $(OBJS) $(LDFLAGS)

ompparser.o: ompparser.cc ompparser.hh
	$(CC) -c $(CFLAGS) ompparser.cc

ompparser.cc ompparser.hh: ompparser.yy
	$(YACC) $(YFLAGS) -o ompparser.cc ompparser.yy

omplexer.o: omplexer.cc ompparser.hh
	$(CC) -c $(CFLAGS) omplexer.cc

omplexer.cc: omplexer.ll
	$(LEX) -o omplexer.cc omplexer.ll

y.tab.o: y.tab.cc y.tab.hh
	$(CC) -c $(CFLAGS) y.tab.cc

y.tab.cc: C99-parser.yacc
	$(YACC) $(YFLAGS) -o y.tab.cc C99-parser.yacc

lex.yy.o: lex.yy.cc y.tab.hh
	$(CC) -c $(CFLAGS) lex.yy.cc

lex.yy.cc: C99-scanner.lex
	$(LEX) -o lex.yy.cc C99-scanner.lex

main.o: main.cc
	$(CC) -c $(CFLAGS) main.cc

clean:
	cat /dev/null > log.txt
	cat /dev/null > error.txt
	cat /dev/null > output.c
	rm -f $(OBJS) core y.* lex.yy.* ompparser.output ompparser.gv ompparser.dot ompparser.hh ompparser.cc omplexer.cc  fparse


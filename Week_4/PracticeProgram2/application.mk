fibseries : PracticeProgram2.o fib.o
	gcc -o fibseries PracticeProgram2.o fib.o
PracticeProgram2.o : PracticeProgram2.c fib.h
	gcc -c PracticeProgram2.c
fib.o : fib.c fib.h
	gcc -c fib.c
	

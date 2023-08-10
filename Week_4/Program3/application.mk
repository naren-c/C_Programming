arrayunique : Program3.o unique.o
	gcc -o arrayunique Program3.o unique.o
Program3.o : Program3.c unique.h
	gcc -c Program3.c
unique.o : unique.c unique.h
	gcc -c unique.c
	
	
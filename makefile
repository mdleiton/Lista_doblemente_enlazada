#all: principal  estatico dinamico
all:
	gcc -Wall pruebaLista.c  include/*.h  src/*.c  -o p
principal:
	gcc -Wall -c  *.c

estatico:libestatica
	gcc -Wall -static *.o -L. -ldatos -lm -o estatico

libestatica: 
	ar rcs libdatos.a f*.o

dinamico: dinamicolib
	gcc -Wall -o dinamico *.o -Ldatos -lm

dinamicolib:
	gcc -Wall -shared -fPIC -o libdatos.so funcion*.c


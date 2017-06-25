INCLUDE=-Iinclude/
LIBS=-Llib/

programa: pruebaLista objetos libmilista
	gcc -Wall -Llib/ -Iinclude/ obj/pruebaLista.o lib/libmilista.so -o bin/prueba

pruebaLista: src/pruebaLista.c
	gcc -Wall -c -Iinclude/ src/pruebaLista.c -o obj/pruebaLista.o

objetos: implementaciones  # se hace esto ya que no se pueden generar y direccionar  varios archivos a vez
	mv -f *.o obj/

implementaciones: 
	gcc -Wall -shared -fPIC -c -Iinclude/ src/Lista*.c 

#generamos libreria dinamica
libmilista: implementaciones
	gcc -Wall -shared -fPIC  -Iinclude/ obj/Lista*.o -o lib/libmilista.so
	#LD_LIBRARY_PATH=./lib
	#export LD_LIBRARY_PATH

.PHONY: clean
clean:
	rm -rf obj/* bin/* lib/*

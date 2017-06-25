INCLUDE=-Iinclude/
LIBS=-Llib/
programa: objetos pruebaLista libmilista
	gcc -Wall  $(LIBS) $(INCLUDE) obj/pruebaLista.o -lmilista -o bin/prueba

pruebaLista: src/pruebaLista.c
	gcc -Wall -c $(INCLUDE) src/pruebaLista.c -o obj/pruebaLista.o

objetos: implementaciones  # se hace esto ya que no se pueden generar y direccionar  varios archivos a vez
	mv -f *.o obj/

implementaciones: 
	gcc -Wall -shared -fPIC -c $(INCLUDE) src/Lista*.c #se crearan en directorio actual del makefile luego se los debe mover al /obj

#generamos libreria dinamica
libmilista: implementaciones
	gcc -Wall -shared -fPIC  $(INCLUDE) obj/Lista*.o -o lib/libmilista.so
	#LD_LIBRARY_PATH=./lib
	#export LD_LIBRARY_PATH

.PHONY: clean
clean:
	rm -rf obj/* bin/* lib/*
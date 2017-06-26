INCLUDE=-Iinclude/
LIBS=-Llib/
programa: implementaciones pruebaLista libmilista
	gcc -Wall  $(LIBS) $(INCLUDE) obj/pruebaLista.o -lmilista -o bin/prueba

pruebaLista: src/pruebaLista.c
	gcc -Wall -c $(INCLUDE) src/pruebaLista.c -o obj/pruebaLista.o

implementaciones: 
	gcc -Wall -c $(INCLUDE) src/Lista_Inicializar.c -o obj/Lista_Inicializar.o
	gcc -Wall -c $(INCLUDE) src/Lista_Vacia.c -o obj/Lista_Vacia.o
	gcc -Wall -c $(INCLUDE) src/Lista_Conteo.c -o obj/Lista_Conteo.o
	gcc -Wall -c $(INCLUDE) src/Lista_Buscar.c -o obj/Lista_Buscar.o
	gcc -Wall -c $(INCLUDE) src/Lista_InsertarFin.c -o obj/Lista_InsertarFin.o
	gcc -Wall -c $(INCLUDE) src/Lista_InsertarInicio.c -o obj/Lista_InsertarInicio.o
	gcc -Wall -c $(INCLUDE) src/Lista_Sacar.c -o obj/Lista_Sacar.o
	gcc -Wall -c $(INCLUDE) src/Lista_SacarTodos.c -o obj/Lista_SacarTodos.o
	gcc -Wall -c $(INCLUDE) src/Lista_InsertarDespues.c -o obj/Lista_InsertarDespues.o
	gcc -Wall -c $(INCLUDE) src/Lista_InsertarAntes.c -o obj/Lista_InsertarAntes.o
	gcc -Wall -c $(INCLUDE) src/Lista_Primero.c -o obj/Lista_Primero.o
	gcc -Wall -c $(INCLUDE) src/Lista_Ultimo.c -o obj/Lista_Ultimo.o
	gcc -Wall -c $(INCLUDE) src/Lista_Siguiente.c -o obj/Lista_Siguiente.o
	gcc -Wall -c $(INCLUDE) src/Lista_Anterior.c -o obj/Lista_Anterior.o

#generamos libreria dinamica
libmilista: implementaciones
	gcc -Wall -shared -fPIC  $(INCLUDE) obj/Lista*.o -o lib/libmilista.so
	#LD_LIBRARY_PATH=./lib
	#export LD_LIBRARY_PATH

.PHONY: clean
clean:
	rm -rf obj/* bin/* lib/*
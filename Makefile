

INCLUDE=-Iinclude/
LIBS=-Llib/

programa: pruebaLista.o Lista_Vacia.o Lista_Anterior.o Lista_SacarTodos.o Lista_Ultimo.o Lista_Conteo.o libed.so
	gcc $(LIBS) obj/main.o obj/Lista_Vacia.o obj/include2.o obj/include3.o -lm -led -o bin/$@

main.o: src/pruebaLista.c
	gcc -Wall -c $(INCLUDE) src/pruebaLista.c -o obj/pruebaLista.o

Lista_Vacia.o: src/Lista_Vacia.c
	gcc -Wall -c $(INCLUDE) src/Lista_Vacia.c -o obj/Lista_Vacia.o

Lista_Anterior.o: src/Lista_Anterior.c
	gcc -Wall -c $(INCLUDE) src/Lista_Anterior.c -o obj/Lista_Anterior.o

Lista_SacarTodos.o: src/Lista_SacarTodos.c
	gcc -Wall -c $(INCLUDE) src/Lista_SacarTodos.c -o obj/Lista_SacarTodos.o

Lista_Ultimo.o: src/Lista_Ultimo.c
	gcc -Wall -c $(INCLUDE) src/Lista Ultimo.c -o obj/Lista_Ultimo.o

Lista_Conteo.o: src/Lista_Conteo.c
	gcc -Wall -c $(INCLUDE) src/Lista_Conteo.c -o obj/Lista_Conteo.o

#generamos libreria dinamica
libed.so: src/milibreria.c
	gcc -Wall $(INCLUDE) -shared -fPIC src/milibreria.c -o lib/libed.so

.PHONY: clean
clean:
	rm -rf obj/* bin/* lib/*

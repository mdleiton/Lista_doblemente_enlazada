#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>
/*Este metodo permite buscar un elemento de la estructura lista
@param *lista es un puntero a la lista la cual deseamos buscar un elemento
@param *objeto es un puntero a un objeto que se desea almacenar en la estructura ListaEnlazada 
@return *elementoLista  un elemento lista que contiene igual objeto que el parametro.
@author mdleiton   */
ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){
	if(lista==NULL ){  //validamos que lista sea diferente de null
		return NULL;
	}else{
		ElementoLista *iterador=Lista_Primero(lista);
		ElementoLista *fin=Lista_Ultimo(lista);
		while(iterador!=fin){    //VERIFICAMOS CADA ELEMENTO HASTA LLEGAR AL ULTIMO 
			if(iterador->objeto == objeto){
				return iterador;   // SI SON IGUALES LOS OBJETOS DEBE RETORNAL EL ELEMENTO
			}
			iterador=iterador->siguiente;
		}
		return fin; 
		}
	return NULL;// si llegamos a este punto es porque no se encontro dicho elemento en la lista
}

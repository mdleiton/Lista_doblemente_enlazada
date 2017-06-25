#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>
/*Este metodo permite buscar un elemento de la estructura lista
@param *lista es un puntero a la lista la cual deseamos buscar un elemento
@param *objeto es un puntero a un objeto que se desea almacenar en la estructura ListaEnlazada 
@return *elementoLista  un elemento lista que contiene igual objeto que el parametro.
@author mdleiton   */
ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){
	if(lista==NULL) 
		return NULL;
	ElementoLista *elem = NULL;

	for (elem = Lista_Primero(lista); elem != NULL; elem = Lista_Siguiente(lista, elem)) { //recorremos todo la lista en busca del elemento lista y su respectivo objeto
		long valorlista =(long)elem->objeto;
		long valor=(long )objeto;
		if(valorlista== valor)  //verificamos si los elementos en la lista son los mismo.
			return elem;
	} 
	return NULL; // si llegamos a este punto es porque no se encontro dicho elemento en la lista



}

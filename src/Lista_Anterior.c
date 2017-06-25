#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>
/*Este metodo retorna el elemento anterior al alemento que se recibe como parametro de la estructura ListaEnlazada

@param  *lista esta vacia o el elemento que se recibe como parametro esta vacio se retornara null, o en el caso de que el elemento que se recibe como parametro sea igual al primer elemento de la lista se retornara null, caso contrario se retornara el componente anterior de elemento.

@author whugo43                    */ 

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento){
	if(lista==NULL || elemento==NULL)
		return NULL;
	if(elemento== Lista_Primero(lista)){
		return NULL; }
	else{
		ElementoLista *insertprev= &(lista->ancla);
		while((insertprev->siguiente )!=&(lista->ancla)){
			if(insertprev->siguiente == elemento){
				return elemento->anterior;
			}
			insertprev = insertprev->siguiente;
		}
	}
	return NULL;
}

#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>
/**Este metodo retorna el elemento siguiente al alemento que se recibe como parametro de la estructura ListaEnlazada
@param  *lista esta vacia o el elemento que se recibe como parametro esta vacio se retornara null, o en el caso de que el elemento que se recibe como parametro sea igual al ultimo elemento de la lista se retornara null, caso contrario se retornara el componente siguiente de elemento.
@author whugo43                    */ 
ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento){
	if(lista==NULL || elemento==NULL) //validamos que lista sea diferente de null
		return NULL;
	if(elemento==  Lista_Ultimo(lista)){
    		return NULL;
	}else{
		if(Lista_Buscar(lista,elemento)!= NULL){
			ElementoLista *fin=Lista_Ultimo(lista);
			if(fin==elemento)
				return NULL;
			return elemento->siguiente;
		}		
	}
	return NULL;
	
}

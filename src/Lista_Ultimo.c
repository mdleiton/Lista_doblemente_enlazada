#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>
/*Este metodo determina el elemento anterior de la lista 

@param *lista apunta a null  significa que esta vacio,  
@return un entero null si la lista esta vacia o caso contrario el componente anterior de la ancla retornara el elemento anterior de la lista.     

@author whugo43   */

ElementoLista *Lista_Ultimo(ListaEnlazada *lista){
	if(lista==NULL){
		return NULL;
	}else
		return (lista->ancla).anterior;
}

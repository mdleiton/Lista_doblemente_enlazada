#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>
/*Este metodo determina el elemento sifuiente de la lista 
@param *lista apunta a null  significa que esta vacio,  
@return un entero null si la lista esta vacia o caso contrario el componente siguiente de la ancla retornara el elemento siguiente de la lista.     
@author whugo43   */
ElementoLista *Lista_Primero(ListaEnlazada *lista){
	if(lista==NULL ){
		return NULL;
	}else
		return (lista->ancla).siguiente;
}

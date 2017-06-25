#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>
/*Este metodo saca todos los elementos de la estructura ListaEnlazada

Si la lista no esta vacia diferente de null. 
@param  *lista es un puntero a la lista a la cual inicializaremos. el componente ancla apunte a null, el componente numeroElementos se inicializa a cero, muy similiar al metodo Lista_Inicializar.

@author whugo43                    */ 

void Lista_SacarTodos(ListaEnlazada *lista){
	if(lista!=NULL){
		lista->ancla.siguiente=&(lista->ancla);
		lista->ancla.anterior=&(lista->ancla);
		lista->ancla.objeto=NULL;
		lista->numeroElementos = 0;
}
}

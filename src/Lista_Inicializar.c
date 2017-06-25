#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>
/*Este metodo iniciliza los elementos de la estructura ListaEnlazada
@param *lista es un puntero a la lista a la cual inicializaremos. el componente ancla apunte a null. 
el componente numeroElementos se inicializa a cero.
@return un entero 1 si se realizo con exito la operacion o 0 en caso contrario     
@author jhonnyzp                    */ 
int Lista_Inicializar( ListaEnlazada *lista){
	if(lista!=NULL){
		lista->ancla.siguiente=&(lista->ancla);
		lista->ancla.anterior=&(lista->ancla);
		lista->ancla.objeto=NULL;
		lista->numeroElementos = 0;
  		return 1;
	}else
		return 0;
}

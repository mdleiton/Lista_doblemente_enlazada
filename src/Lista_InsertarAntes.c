#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>
/*Este metodo permite insertar un elemento de la estructura lista
@param *lista es un puntero a la lista la cual deseamos insertar un elemento
@param *objeto es un puntero a un objeto que se desea almacenar en la estructura ListaEnlazada 
@param *elemento es un puntero a una estructura ElementoLista . antes de este elemento se inserta el nuevo
@return un entero 1 si se realizo con exito la operacion o 0 en caso contrario 
@author mdleiton                                     */ 
int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento){
	if(lista==NULL || elemento==NULL) //valida que los parametros sean diferentes de nulo
		return 0;
	ElementoLista *nuevo=NULL;
	if ((nuevo = malloc (sizeof(ElementoLista))) == NULL){ //asignando espacio valido en memoria
    	return 0;
    }else{
    	ElementoLista *insertprev= &(lista->ancla);
    	while((insertprev->siguiente )!= &(lista->ancla)){ //verificamos que dicho elemento pertenezca a la lista
			if(insertprev->siguiente == elemento){ 
				nuevo->siguiente=elemento;
		    	nuevo->anterior=elemento->anterior;
		    	elemento->anterior=nuevo;
		    	(nuevo->anterior)->siguiente=nuevo;
		    	nuevo->objeto=objeto;
    			lista->numeroElementos += 1;
			return 1;
			}
			insertprev = insertprev->siguiente;
		}
    }
	
	return 0; // si no dicho elemento no pertenece a la lista
}

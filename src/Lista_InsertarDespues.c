#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>
/*Este metodo permite insertar un elemento a la estructura lista al final de un determinado elemento
@param *lista es un puntero a la lista la cual deseamos insertar un elemento 
@param *elemento es un puntero a una estructura ElementoLista . despues de este elemento se inserta el nuevo
@param *objeto es un puntero al objeto que se desea almacenar en la estructura ListaEnlazada 
@return un entero 1 si se realizo con exito la operacion o 0 en caso contrario 
@author mdleiton                                     */ 
int Lista_InsertarDespues(ListaEnlazada *lista, void *objeto, ElementoLista *elemento){
	if(lista==NULL || elemento==NULL) //validar si los parametros son nulos
		return 0;
	ElementoLista *nuevo;
	if ((nuevo = malloc (sizeof(ElementoLista))) == NULL){ //solita una direccion valida de memoria
    	return 0;
    }else{
    	ElementoLista *insertprev= &(lista->ancla);
    	while((insertprev->siguiente )!= &(lista->ancla)){
			if(insertprev->siguiente == elemento){
				nuevo->siguiente=elemento->siguiente;
		    	nuevo->anterior=elemento;
		    	elemento->siguiente=nuevo;
		    	(nuevo->siguiente)->anterior=nuevo;	
		    	nuevo->objeto=objeto;
	    		lista->numeroElementos += 1;
			return 1;
			}
			insertprev = insertprev->siguiente;
		}
    }
	return 0;
}

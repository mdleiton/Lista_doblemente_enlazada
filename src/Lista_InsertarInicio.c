#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>
/*Este metodo permite insertar un elemento a la estructura lista
@param *lista es un puntero a la lista la cual deseamos ingresar un nuevo elemento
@param *objeto es un puntero al objeto que se desea almacenar en la estructura ListaEnlazada 
@return un entero 1 si se realizo con exito la operacion o 0 en caso contrario 
@author mdleiton1                                      */ 
int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto){
	if(lista==NULL)
		return 0;
	ElementoLista *nuevo=NULL;
	if ((nuevo = (ElementoLista *)malloc (sizeof(ElementoLista))) == NULL)
		return 0;
	if((lista->numeroElementos) == 0){
		nuevo->siguiente=&(lista->ancla);
		nuevo->anterior = &(lista->ancla);
		(lista->ancla).siguiente=nuevo;
		(lista->ancla).anterior=nuevo;
	}else{
		ElementoLista *inicio=lista->ancla.siguiente;
		nuevo->siguiente=inicio;
		nuevo->anterior = &(lista->ancla);
		inicio->anterior=nuevo;
		(lista->ancla).siguiente=nuevo;
	}
	nuevo->objeto=objeto;
	lista->numeroElementos += 1;
	return 1;
}

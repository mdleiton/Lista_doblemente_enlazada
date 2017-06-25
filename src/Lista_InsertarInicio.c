

#include "miLista.h"
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

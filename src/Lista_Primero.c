

#include "miLista.h"
ElementoLista *Lista_Primero(ListaEnlazada *lista){
	if(lista==NULL ){
		return NULL;
	}else
		return (lista->ancla).siguiente;
}

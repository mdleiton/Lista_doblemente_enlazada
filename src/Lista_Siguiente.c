#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento){
	if(lista==NULL || elemento==NULL)
		return NULL;
	if(elemento==  Lista_Ultimo(lista)){
    		return NULL;
	}
	return elemento->siguiente;
}

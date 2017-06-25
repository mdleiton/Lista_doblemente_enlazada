#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>
/*Este metodo permite sacar/eliminar un elemento de la estructura lista
@param *lista es un puntero a la lista la cual deseamos sacar/eliminar un elemento
@param *elemento es un puntero a una estructura ElementoLista que se desea almacenar en la estructura ListaEnlazada
@author mdleiton2                                      */ 

void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento){
	if(lista==NULL || elemento==NULL)
		return;
	if(Lista_Conteo(lista)==1){  //si solo hay un elemento se puede inicializar
		Lista_Inicializar(lista);
	}else if(&(lista->ancla) != elemento && Lista_Conteo(lista)>1){ //en caso que existan mas de un elemento se debe cambiar los direcciones de los punteros siguiente y anterior 
		ElementoLista *eliminarprev= &(lista->ancla);
		while((eliminarprev->siguiente )!= &(lista->ancla)){ //se valida que dicho elemento pertenezca a la lista
			if(eliminarprev->siguiente == elemento){
				ElementoLista *eliminar= eliminarprev->siguiente;
				eliminarprev->siguiente=eliminar->siguiente;
				(eliminar->siguiente)->anterior=eliminarprev;
				lista->numeroElementos -= 1;
				return;
			}
			eliminarprev = eliminarprev->siguiente;
		}
	}
}

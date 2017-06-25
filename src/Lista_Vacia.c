#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>
/*Este metodo determina si la lista esta vacia 

@param *lista apunta a null o el componente numeroElementos de la lista es igual a cero. significa que esta vacio.
@return un entero 1 si la lista esta vacia o 0 en caso contrario     

@author whugo43                    */ 

int Lista_Vacia(ListaEnlazada *lista){
	if(lista==NULL ){ 
		return 1;
	}else if(lista->numeroElementos==0){	
		return 1;
	}else{
		return 0;
	}
}

/*Este metodo determina el numero de elemento de la lista 

@param *lista apunta a null  significa que esta vacio. 
@return un entero 0 si la lista esta vacia o caso contrario el componente numeroElementos de la lista retornara el nunero de elementos de la lista.     

@author whugo43                    */ 


#include "miLista.h"
int Lista_Conteo(ListaEnlazada *lista){
	if(lista==NULL ){
		return 0;
	}else
		return lista->numeroElementos;
}

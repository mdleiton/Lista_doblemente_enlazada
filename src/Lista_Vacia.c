/*Este metodo determina si la lista esta vacia 
iniciliza los elementos de la estructura ListaEnlazada
@param *lista apunta a null o l componente numeroElementos se inicializa es igual a cero. significa que esta vacio.
@return un entero 1 si la lista esta vacia o 0 en caso contrario     
@author whugo43                    */ 

int Lista_Vacia(ListaEnlazada *lista){
	if(lista==NULL ){ 	//Si la lista esta vacia retornara nulo 
		return 1;
	}else if(lista->numeroElementos==0){	//Si el numero de elemento de la lista es 0 significa qu estara vacia
		return 1;
	}else{
		return 0;// caso contrario retornara 0 indicando que no esta vacia
	}
}

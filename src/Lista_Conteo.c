/*Este metodo determina el numero de elemnto de la lista 
@param *lista apunta a null  significa que esta vacio. 

@return un entero 0 si la lista esta vacia o caso contrario el componente numeroElementos de la lista retornara en lunero de elementos de la lista.     
@author whugo43                    */ 
int Lista_Conteo(ListaEnlazada *lista){
	if(lista==NULL ){
		return 0;
	}else
		return lista->numeroElementos;
}

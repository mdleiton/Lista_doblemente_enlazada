/*Este metodo permite insertar un elemento a la estructura lista
@param *lista es un puntero a la lista la cual deseamos ingresar un nuevo elemento
@param *objeto es un puntero al objeto que se desea almacenar en la estructura ListaEnlazada 
@return un entero 1 si se realizo con exito la operacion o 0 en caso contrario 
@author mdleiton1                                      */ 
int Lista_InsertarFin(ListaEnlazada *lista, void *objeto){
	if(lista==NULL)
		return 0;
	ElementoLista *nuevo=NULL;
	if ((nuevo = (ElementoLista *)malloc (sizeof(ElementoLista))) == NULL)
    	return 0;
    if((lista->numeroElementos) == 0){ //si la lista esta vacia debemos insertar al inicio . despues de ancla
		nuevo->siguiente=&(lista->ancla);
		nuevo->anterior = &(lista->ancla);
		(lista->ancla).siguiente=nuevo;
		(lista->ancla).anterior=nuevo;
    }else{ //agregamos el elemento al final de la lista
    	ElementoLista *inicio=lista->ancla.anterior;
		nuevo->siguiente=&(lista->ancla);
		nuevo->anterior = inicio;
		inicio->siguiente=nuevo;
		(lista->ancla).anterior=nuevo;
    }
    nuevo->objeto=objeto;
    lista->numeroElementos += 1;
  return 1;
}
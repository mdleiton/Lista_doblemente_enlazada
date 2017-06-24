ElementoLista *Lista_Ultimo(ListaEnlazada *lista){
	if(lista==NULL){
		return NULL;
	}else
		return (lista->ancla).anterior;
}

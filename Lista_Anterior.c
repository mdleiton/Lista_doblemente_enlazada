ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento){
	if(lista==NULL || elemento==NULL)
		return NULL;
	if(elemento==  Lista_Primero(lista)){
    		return NULL;
	}
	return elemento->anterior;
}

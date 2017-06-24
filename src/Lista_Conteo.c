int Lista_Conteo(ListaEnlazada *lista){
	if(lista==NULL ){
		return 0;
	}else
		return lista->numeroElementos;
}

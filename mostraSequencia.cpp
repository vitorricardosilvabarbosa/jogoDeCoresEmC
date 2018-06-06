#include "tipos.h"
void mostrarSequencia(TFila *p){
	TElemento *aux;
	while(aux != NULL){
		mostraCor(aux->cor);
		tocaSom(aux->cor);
		Sleep(1000);
		aux = aux->proximo;
	}	
}


#include "tipos.h"
void sorteiaEInsereCor(TFila *p){
	TElemento *novoElemento = new TElemento;
	
	srand((unsigned) time(NULL));
	
	novoElemento->cor = rand() % 4 +1;
	
	printf("%c",novoElemento->cor);
	p->fim->proximo = novoElemento;
	p->fim = novoElemento;
}


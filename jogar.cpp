#include "tipos.h"
bool jogar(TFila *p, Jogador *j){
	TElemento *aux;
	aux = p->inicio;
	
	while(aux != NULL){
		j->tecla = getch();
		
		if(j->tecla == aux->cor){
			tocaSom(j->tecla);
			aux = aux->proximo;
			j->placar += 10;
			system("cls");
		}
		else{
			break;
		}
	}
	
	if(aux == NULL)
	{
		return true;
	}
	else
	{	
		return false;
	}
}

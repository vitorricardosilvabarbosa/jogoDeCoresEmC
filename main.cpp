#include "tipos.h"
int main(){
	bool gameOver = false;
	TFila filaDeCores;
	Jogador player;
	
	iniciaFila(&filaDeCores);
	
	while(!gameOver){
	sorteiaEInsereCor(&filaDeCores);
	gameOver = jogar(&filaDeCores,&player);
	}
	printf("Seu placar é igual a : %d",player.placar);
	
}

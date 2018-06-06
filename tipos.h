#ifndef	_tipos_
#define _tipos_

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

typedef struct TipoElemento{
	char cor;
	TipoElemento *proximo;
}TElemento;

typedef struct TipoFila{
	TElemento *inicio;
	TElemento *fim;
}TFila;

struct Jogador{
	int placar;
	char tecla;	
};

void sorteiaEInsereCor(TFila *p);
void iniciaFila(TFila *p);
bool jogar(TFila *p,Jogador *j);
void tocaSom(char tecla);
void mostrarSequencia(TFila *p);
void mostraCor(char cor);
		
#endif

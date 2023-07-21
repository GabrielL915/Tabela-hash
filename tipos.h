#ifndef _tipos_
#define _tipos_

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct tipoElemento
{
	int info;
	struct tipoElemento *proximo;
}TElemento;

typedef struct tipoLista
{
	TElemento *inicio;
	TElemento *fim;
}TLista;

void inicializarTabela(TLista tabelaHashing[]);
void inserir(TLista tabelaHashing[]);
void apresentar(TLista tabelaHashing[]);
int hash(int valor);

#endif

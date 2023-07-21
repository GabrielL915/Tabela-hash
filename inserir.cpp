#include "tipos.h"

void inserir (TLista tabelaHashing[])
{
	int novoValor;
	int indice;
	
	printf("\n Informe novo valor: ");
	scanf("%d", &novoValor); //23
	
	indice = hash(novoValor);
	
	TElemento *novoElemento;
	novoElemento = (TElemento*) malloc(sizeof(TElemento));
	novoElemento->info = novoValor;
	novoElemento->proximo = NULL;
	
	if (tabelaHashing[indice].inicio == NULL)
	{
		tabelaHashing[indice].inicio = novoElemento;
		tabelaHashing[indice].fim = novoElemento;
	}
	else
	{
		tabelaHashing[indice].fim->proximo = novoElemento;
		tabelaHashing[indice].fim = novoElemento;
	}
}

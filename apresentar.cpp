#include "tipos.h"

void apresentar(TLista tabelaHashing[])
{
	for (int i = 0; i < 10; i++)
	{
		if (tabelaHashing[i].inicio == NULL)
		{
			printf("\n [%d] = NULL", i);
		}
		else
		{
			TElemento *aux;
			aux = tabelaHashing[i].inicio;
			printf("\n [%d] = ", i);
			while (aux != NULL)
			{
				printf("%d |", aux->info);
				aux = aux->proximo;
			}
		}
	}
}

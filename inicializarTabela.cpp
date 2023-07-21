#include "tipos.h"

void inicializarTabela(TLista tabelaHashing[])
{
	for (int i = 0; i < 10; i++)
	{
		tabelaHashing[i].inicio = NULL;
		tabelaHashing[i].fim = NULL;
	}
}

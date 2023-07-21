#include "tipos.h"

int main()
{
	int opcao;
	
	TLista tabelaHashing[10];
	
	inicializarTabela(tabelaHashing);
	
	do
	{
		printf("\n\n 1 - Inserir");
		printf("\n 2 - Apresentar");
		printf("\n 0 - Sair");
		printf("\n Escolha uma opcao: ");
		scanf("%d", &opcao);
		switch(opcao)
		{
			case 1: inserir(tabelaHashing); break;
			case 2: apresentar(tabelaHashing); break;
		}
	}while (opcao != 0);
}

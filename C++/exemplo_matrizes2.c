#include <stdio.h>
#include <stdlib.h>
#define LINHAS 5
#define COLUNAS 5

	main () {
		
		int matriz [LINHAS][COLUNAS];
		int i, j;
		
		//le os dados para a matriz
		
		printf("**Informe os dados para a matriz**\n");
		
		for (i = 0; i < LINHAS; i++) {
			for (j = 0; j < COLUNAS; j++){
				printf("Valor[%d][%d]: ", i, j);
				scanf ("%d", &matriz [i][j]);
			}
		}
		
		//calcula a soma da diagonal principal e apresenta os dados da matriz na tela
		
		int soma = 0;
		
		printf("\n**Dados da matriz**\n\n");
		for (i = 0; i < LINHAS; i++) {
			for (j = 0; j < COLUNAS; j++){
				printf("%d", matriz[i][j]);
				//se o indice da linha eh igual o da coluna, entao o elemento esta na diagonal principal
				if (i == j ) {
					soma += matriz[i][j];
				}
			}
			
			printf("\n");
		}
		
		printf("\nSoma = %d\n\n", soma);
		system ("pause");
		
	}

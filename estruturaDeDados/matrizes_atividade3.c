/* Construa um programa em C que contenha uma matriz 4x4 de números inteiros digitados pelo usuário. 
Em seguida, o programa deve apresentar, na tela, todos os elementos pares contidos na matriz, bem como a posição (linha/coluna) 
em que eles se encontram. */

#include <stdio.h>
#include <stdlib.h>
#define LIN 4 //variavel j 
#define COL 4

main () {
	
	
	int matriz [LIN] [COL];
	int i,j;
	
	for (i=0;i<LIN;i++) {
		for (j=0;j<COL;j++){
			printf("matriz[%d] [%d]:",i,j);
			scanf("%d",&matriz[i] [j]);
		}
	}
	
	for (i=0;i<LIN;i++) {
		for (j=0;j<COL;j++) {
			if (matriz [i][j] % 2 == 0) {
				printf("Elemento par: %d \n",matriz[i] [j]);
				printf ("Linha: %d \n",i);
				printf("Coluna: %d \n", j);
			}
		}
	}
	
	
	
}

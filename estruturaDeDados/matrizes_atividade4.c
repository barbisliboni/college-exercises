/* Escreva um programa em C que contenha uma matriz 4x3 de números inteiros digitados pelo usuário. 
Em seguida, mostre a soma dos elementos pares e dos elementos ímpares contidos nessa matriz. */

#include <stdio.h>
#include <stdlib.h>
#define LIN 4 //variavel j 
#define COL 3

main () {
	
	
	int matriz [LIN] [COL];
	int i,j,soma_pares,soma_impares;
	
	soma_pares = 0;
	soma_impares = 0;
	
	for (i=0;i<LIN;i++) {
		for (j=0;j<COL;j++) {
			printf("matriz[%d][%d]:",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	for (i=0;i<LIN;i++){
		for (j=0;j<COL;j++) {
			if (matriz [i][j] % 2 == 0){
				soma_pares = soma_pares + matriz [i] [j];
				
			}else {
				soma_impares = soma_impares + matriz [i][j];
			}
		}
	}
	
	printf("Soma dos pares:%d \n",soma_pares);
	printf("Soma dos impares:%d \n",soma_impares);
	system("pause");
	
}

/* Escreva um programa em C que contenha uma matriz 5x5 de números inteiros digitados pelo usuário. 
Em seguida, calcule e mostre a média aritmética dos elementos dessa matriz.  */

#include <stdio.h>
#include <stdlib.h>
#define LIN 5
#define COL 5

main () {
	
	
	int matriz [LIN] [COL];
	int i,j,soma;
	float media;  //eh uma divisao por isso eh float
	
	soma=0; //toda vez que fazwer o somatorio de elementos, eh necessario zerar a soma
	
	for (i=0;i<LIN;i++) {
		for (j=0;j<COL;j++) {
			printf("matriz[%d] [%d]:",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	for (i=0;i<LIN;i++){
		for (j=0;j<COL;j++){
			soma = soma + matriz[i][j];
		}
	}
	
	media = soma/(LIN*COL);
	printf("Media: %.2f \n", media);
	system ("pause");
	
	
	
	
	
	
}

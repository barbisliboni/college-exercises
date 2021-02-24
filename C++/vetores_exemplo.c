#include <stdio.h>
#include <stdlib.h>

main () {
	
		float notas[5];
		int i;
		float soma,media;
		
		soma = 0;
		
		for (i = 0; i < 5; i++) {
			printf("Digite a nota do aluno %d:", i+1);
			scanf ("%f", &notas[i]);  //cochete i pois o i ira variar de zero até quatro
			
		}
		
		for (i = 0; i < 5; i++) {
			printf ("notas [%d]=%.2f \n",i,notas [i]);
			soma = soma + notas[i];
		}
		
		media = soma/5;
		printf("Media:%.2f \n", media);
		
		system("pause");
}



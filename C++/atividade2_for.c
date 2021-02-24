// Crie um programa que faça o somatório de todos os números entre 1 e 30. Por fim, mostre o resultado da soma. 


#include <stdio.h>
#include <stdlib.h>

main () {
	
	
		int cont, soma;
		
		soma = 0;
		
		for (cont=1;cont<=30;cont++) {
			soma = soma + cont;
		}
		 printf("Soma: %d", soma);
		
system("pause");
}



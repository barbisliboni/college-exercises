/*Crie um programa que mostre todos os inteiros entre dois números digitados pelo usuário. 
Exemplo: usuário digita os números 8 e 15, e aparecem em tela: 9, 10, 11, 12, 13, 14. *
*/

#include <stdio.h>
#include <stdlib.h>

main () {
	
	
		int cont, ini,fim;
		
		printf("Digite o valor inicial");
		scanf ("%d",&ini);
		printf("Digite o valor final");
		scanf("%d", &fim);
		
		for (cont=ini+1;cont<=fim-1;cont++) { //cont++ vai encrementar um no contador
			printf("%d \n", cont);			
}
system("pause");
}



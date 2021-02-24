#include <stdio.h>
#include <stdlib.h>

main () {
	float av1,av2,media;
	int cont; //contador
	
	for (cont=1;cont<=5;cont++) {    //contador inicia a partir do 1  //numero 5 pois sao 5 alunos
	
		printf("Digite a av1:");
		scanf("%f", &av1);
		printf("Digite a av2:");
		scanf("%f", &av2);
		media = (av1 + av2)/2;
		printf("Media:%.2f  \n", media);
		
		if (media>=6){
			printf("Aluno Aprovado! \n");
		}
		else{
			printf("Aluno Reprovado! \n");
		}
	}
							    
							    
system ("pause");
		
	
}

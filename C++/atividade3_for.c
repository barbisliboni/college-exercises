/*Crie um programa que calcule e exiba a tabuada de um número X. Por exemplo: supondo X igual a 3, 
o programa terá que mostrar: 3x0=0; 3x1=3;3x2=6;3x3=9; e assim por diante. 
*/ 

#include <stdio.h>
#include <stdlib.h>

main () {
	
	
		int cont, tab, x;
		
		printf("Digite o numero da tabuada:");
		scanf("%d", &x);
		
		
		for (cont=0;cont<=10;cont++) {   //cont começa do 0 pois eh uma tabuada
			tab = x * cont;
			printf("%d x %d = %d \n", x,cont,tab ); //porcertagem d eh a primeira variavel depois da virgula, que eh o x, a segunda porcentagem eh o cont
		}
		
system("pause");
}



/* Escreva um programa em C para ler um vetor A com 10 números reais (float). 
Em seguida, construa um vetor B do mesmo tipo do vetor A, sendo cada elemento de B o 
somatório do elemento correspondente do vetor A mais ele mesmo. Por exemplo, se o valor
 do elemento de A [0] = 5, B [0] deve ser 5+5=10 e assim por diante. Por fim, apresente o vetor B. */ 

#include <stdio.h>
#include <stdlib.h>
#define TAM 11

    main () {
        // declaração dos dois vetores
        int tab [TAM];
        int i, numtab;
        
        
        printf ("Digite o numero da tabuada:");
        scanf ("%d", &numtab); //indice do vetor [i] sempre o acompanha 
        }
        
        for (i=0;i<TAM;i++) {
        	tab[i] = numtab * i;
        	printf ("%d X %d = %d \n",bumtab,i,tab[i]);
		}
		
		system ("pause");
		
	}

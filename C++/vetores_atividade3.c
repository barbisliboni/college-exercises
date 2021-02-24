/* Elaborar um programa em C que efetue o cálculo de uma tabuada de um número qualquer (digitado pelo usuário) 
e armazene os resultados em um vetor A para 11 elementos. Apresentar os valores armazenados no vetor. */


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

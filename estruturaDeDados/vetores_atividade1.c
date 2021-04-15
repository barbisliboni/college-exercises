/* Escreva um programa em C para ler 15 números inteiros de um vetor A. Construa um vetor B de mesmo tipo, 
observando a seguinte lei de formação: “Todo elemento de B deve ser o quadrado do elemento de A correspondente". 
Por fim, apresente os vetores A e B. */ 

    #include <stdio.h>
    #include <stdlib.h>
    #define TAM 15
    main () {
        // declaração dos dois vetores
        int A[TAM], B[TAM];
        int i;
        // leitura do vetor A
        printf ("*** Informe os dados do Vetor A ***\n");
        for (i = 0; i < TAM; i++) {
            printf ("A[%d]: ", i++);
            scanf ("%d", &A[i]); //indice do vetor [i] sempre o acompanha
        }
        // cálculo do vetor B
        
        for (i = 0; i < TAM; i++) {
             B[i] = A[i] * A[i]; 
        }
        // apresentação dos elementos do vetor B
        printf ("\n*** Dados do vetor B *** \n");
        for (i = 0; i < TAM; i++) {
            printf ("B[%d] = %d\n", i++, B[i]); 
        }
        system ("PAUSE");
    }



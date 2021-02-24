// Escreva um programa em C que retorne a quantidade de vezes que o caractere "c" aparece em uma string com, no máximo, 40 caracteres. 
// No final do programa, mostre a quantidade.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main () {
	char str[40];
	int i,qtde;
	
	printf("Digite a frase desejada com, no maximo, 40 caracteres:");
	gets(str);
	
	i=0;
	qtde=0;
	
	while (str[i] !='\0') {
		if (str[i] =='c') {
			qtde++;
		}
		i++;
	}
	printf("Quantidade de caractere c:%d \n", qtde);
	system("pause");
}

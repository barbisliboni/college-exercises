// Escreva um programa em C que contenha uma frase digitada pelo usuário com, no máximo 100 caracteres. 
// Depois da frase digitada, substitua todos os espaços em branco pelo caractere underline (_). Por fim, exiba a frase.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main () {
	char str[100];
	int i;
	
	printf("Digite a frase desejada:");
	gets(str);
	
	i=0;
	
	while (str[i] !='\0') {
		if (str[i] ==' ') {
			str [i] ='_';
		}
		i++;
	}
	puts(str); //exibe a string, como se fosse o printf
	system("pause");
}

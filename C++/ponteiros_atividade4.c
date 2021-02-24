#include <stdio.h>
#include <stdlib.h>

main () {
	int e=6,f=8,g;
	int *o,*x;
	
	o = &f;
	x = &e;
	g = *o + (*x**o) - *x;
	
	printf("Conteudo de e via ponteiro:%d \n", *x); 
	printf("Conteudo de x:%p \n", x); 
	printf("Endereco de mem. de o:%p \n", &o); 
	printf("Conteudo de f via ponteiro:%d \n", *o); 
	printf("Conteudo de x:%p \n", o);
	printf("Endereco de memoria de x:%p \n", &x);
	printf("Conteudo de g:%d \n", g);
	
	system("pause");
}



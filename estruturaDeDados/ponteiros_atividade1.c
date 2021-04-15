#include <stdio.h>
#include <stdlib.h>

main () {
	int p,q,r;
	int *s,*t,*u;
	
	p = 5; //eu mesma atribui estes valores para p e q 
	q = 10;
	
	s = &q;
	t = &p;
	u = &r;
	
	r = (*t + *s) * *t;
	
	printf("Conteudo de s:%p \n", s); //s recebe o endereço de memoria q 
	printf("Conteudo de t:%p \n", t); //t recebe o endereço de memoria p 
	printf("Conteudo de u:%p \n", u); //u recebe o endereço de memoria r
	printf("Endereco de mem. de p:%p \n", &p); //%p eu mostro o ponteiro 
	printf("Endereco de mem. de s:%p \n", &s);
	printf("Cont. de p via ponteiro:%d \n", *t);
	printf("Cont. de q via ponteiro:%d \n", *s);
	
	system("pause");
}



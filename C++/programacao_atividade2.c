#include <stdio.h>
#include <stdlib.h>

int x, y;

void entrada (){
	printf ("Digite o valor de x:");
	scanff("%d", &x);
	printf("Digite o valor de y:");
	scanf("%d", &y);
}

void calcula (){
	int r;
	r = 2 * (x + y);
	printf("2*(x+y) = %d", r);
}

int maior (){
	if (x > y)
		return (x);
		else return (y);
}

main(){
	int m;
	entrada ();
	calcula ();
	m = maior ();
	printf("Maior valor = %d", m);
	system("pause");
}

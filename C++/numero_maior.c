#include <stdio.h>
#include <stdlib.h>

main () {
	int a,b;
	
	printf("Digite o primeiro numero:");
	scanf("%d", &a);
	printf("Digite o segundo numero:");
	scanf("%d", &b);
	
	
	if (a > b) {
		printf("Maior numero:%d \n", a);
	}
	else {
		printf("Maior numero:%d \n", b);
}
	
	system("pause");

}

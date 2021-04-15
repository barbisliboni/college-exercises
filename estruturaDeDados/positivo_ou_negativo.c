#include <stdio.h>
#include <stdlib.h>

main () {
	float num;
	printf("Digite um numero:");
	scanf("%f", &num);
	
	if (num >0){
	printf("Positivo :%.1f\n",num);
				}
	
	else {
		printf("Negativo :%.1f\n",num);
	}
	system ("pause");
}

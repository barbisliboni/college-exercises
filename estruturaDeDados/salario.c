#include <stdio.h>
#include <stdlib.h>

main () {
	float salario;
	
	printf("Digite o seu salario:");
	scanf("%f", &salario);
	("\n");
	
	if (salario >= 800) {
		salario= salario + 700;
	}
	else {
		salario= salario + 500;
}
	printf("Salario:%.2f \n", salario);
	system("pause");

}

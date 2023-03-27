/*
Fa�a um programa que calcule e mostre a �rea de um trap�zio. Sabe-se que:
A = (basemaior + basemenor)*altura/2
*/

#include <stdio.h>

int main() {
	//declara��o de vari�veis
	float basemaior, basemenor, altura, area;
	//entrada
	printf("Digite a base maior, a base menor e a altura de um trap�zio:\t");
	fflush(stdout);
	scanf("%f%f%f", &basemaior, &basemenor, &altura);

	//calculos
	if (basemaior<=0 || basemenor<=0 || altura<=0) {
		printf("\nA base menor ou base maior ou altura tem que ser maior que zero!\n");
	} else if (basemaior<basemenor) {
		printf("\nA base maior tem que ser maior que a base menor");
	} else {
		area = (basemaior + basemenor)*altura/2;
		printf("\nA �rea do trap�zio �: %f\n", area);
	}

	return 0;
}

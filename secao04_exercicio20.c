/*
 * Dados tr�s valores A, B, C, verificar se eles podem ser valores dos lados
 * de um tri�ngulo e, se forem, se � um tri�ngulo escaleno, equil�tero ou
 * is�celes, considerando os seguintes conceitos:
 * a) O comprimento de cada lado de um tri�ngulo � menor do que a soma dos outros dois lados;
 * b) Chama-se equil�tero o tri�ngulo que tem tr�s lados iguais;
 * c) Denominam-se is�sceles o tri�ngulo que tem o comprimento de dois lados iguais;
 * d) Recebe o nome de escaleno o tri�ngulo que tem os tr�s lados diferentes.
 */


#include <stdio.h>

int main() {
	int A, B, C;

	printf("Digite os lados de um tri�ngulo A, B, C:\t");
	fflush(stdout);
	scanf("%d%d%d", &A, &B, &C);

	//1 - verificar se, com os valores A, B e C, podemos ter um tri�ngulo. item a.
	if (A < (B+C) && B < (A+C) && C < (A+B)) {
		printf("\nOs par�metros digitados configuram um tri�ngulo");
		printf("\n=================================================\n");
		//2 - Se satisfeita a condi��o 1, verificar qual tipo de tri�ngulo.

		if ((A==B) && (A==C)) {
			printf("\n� um tri�ngulo equil�tero");
		} else if ((A!=B) && (A!=C)) {
			printf("\n� um tri�ngulo escaleno");
		} else {
			printf("\n� um tri�ngulo is�sceles");
		}

	} else {
		printf("\nOs par�metros digitados N�O configuram um tri�ngulo");
	}

	return 0;
}


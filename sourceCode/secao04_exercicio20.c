/*
 * Dados três valores A, B, C, verificar se eles podem ser valores dos lados
 * de um triângulo e, se forem, se é um triângulo escaleno, equilátero ou
 * isóceles, considerando os seguintes conceitos:
 * a) O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados;
 * b) Chama-se equilátero o triângulo que tem três lados iguais;
 * c) Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
 * d) Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
 */


#include <stdio.h>

int main() {
	int A, B, C;

	printf("Digite os lados de um triângulo A, B, C:\t");
	fflush(stdout);
	scanf("%d%d%d", &A, &B, &C);

	//1 - verificar se, com os valores A, B e C, podemos ter um triângulo. item a.
	if (A < (B+C) && B < (A+C) && C < (A+B)) {
		printf("\nOs parâmetros digitados configuram um triângulo");
		printf("\n=================================================\n");
		//2 - Se satisfeita a condição 1, verificar qual tipo de triângulo.

		if ((A==B) && (A==C)) {
			printf("\nÉ um triângulo equilátero");
		} else if ((A!=B) && (A!=C)) {
			printf("\nÉ um triângulo escaleno");
		} else {
			printf("\nÉ um triângulo isósceles");
		}

	} else {
		printf("\nOs parâmetros digitados NÃO configuram um triângulo");
	}

	return 0;
}


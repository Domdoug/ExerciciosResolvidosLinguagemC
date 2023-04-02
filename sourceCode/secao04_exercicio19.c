/*
 * Faça um programa para verificar se um determinado número inteiro
 * e divisível por 3 ou 5, mas não simultaneamente pelos dois.
 */

#include <stdio.h>

int main() {
	int num;

	printf("Verificar se um número é divisivel por 3 ou 5, mas não por ambos ao mesmo tempo\n");
	printf("\nDigite um número:\t");
	fflush(stdout);
	scanf("%d", &num);

	if (num % 3 == 0 && num % 5 == 0) {
		printf("\nO número %d é divisível por 3 e por 5", num);
	} else if (num % 3 == 0) {
		printf("\nO número %d é divisível somente por 3", num);
	} else if (num % 5 == 0) {
		printf("\nO número %d é divisível somente por 5", num);
	} else {
		printf("\nO número %d não é divisível nem por 3, nem por 5", num);
	}

	return 0;
}

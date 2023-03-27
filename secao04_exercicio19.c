/*
 * Fa�a um programa para verificar se um determinado n�mero inteiro
 * e divis�vel por 3 ou 5, mas n�o simultaneamente pelos dois.
 */

#include <stdio.h>

int main() {
	int num;

	printf("Verificar se um n�mero � divisivel por 3 ou 5, mas n�o por ambos ao mesmo tempo\n");
	printf("\nDigite um n�mero:\t");
	fflush(stdout);
	scanf("%d", &num);

	if (num % 3 == 0 && num % 5 == 0) {
		printf("\nO n�mero %d � divis�vel por 3 e por 5", num);
	} else if (num % 3 == 0) {
		printf("\nO n�mero %d � divis�vel somente por 3", num);
	} else if (num % 5 == 0) {
		printf("\nO n�mero %d � divis�vel somente por 5", num);
	} else {
		printf("\nO n�mero %d n�o � divis�vel nem por 3, nem por 5", num);
	}

	return 0;
}

/*
 * Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode
 * ou não se aposentar. As condições para a aposentadoria são:
 * a) Ter pelo menos 65 anos;
 * b) Ou ter trabalhado pelo menos 30 anos;
 * c) Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
 */

#include <stdio.h>

int main() {
	int idade, TS;
	printf("Digite a idade do trabalhador: \t");
	fflush(stdout);
	scanf("%d", &idade);
	printf("\nDigite o tempo de serviço do trabalhador: \t");
	fflush(stdout);
	scanf("%d", &TS);

	if (idade >= 65 || TS >= 30 || (idade >= 60 && TS >= 25)) {
		printf("\nO trabalhador está elegível para a aposentadoria!");
	} else {
		printf("\nO trabalhador NÃO possui as condições para a aposentadoria!");
	}

	return 0;
}

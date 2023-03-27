/*
 * Leia a idade e o tempo de servi�o de um trabalhador e escreva se ele pode
 * ou n�o se aposentar. As condi��es para a aposentadoria s�o:
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
	printf("\nDigite o tempo de servi�o do trabalhador: \t");
	fflush(stdout);
	scanf("%d", &TS);

	if (idade >= 65 || TS >= 30 || (idade >= 60 && TS >= 25)) {
		printf("\nO trabalhador est� eleg�vel para a aposentadoria!");
	} else {
		printf("\nO trabalhador N�O possui as condi��es para a aposentadoria!");
	}

	return 0;
}

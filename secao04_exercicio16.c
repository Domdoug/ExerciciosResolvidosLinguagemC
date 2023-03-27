/*
 Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima
 o mês correspondente a este número. Isto é, janeiro se 1, fevereiro se 2,
 e assim por diante.
 */

#include <stdio.h>

int main() {
	//declaração de variáveis
	int num;
	//entrada
	printf("Digite um inteiro entre 1 e 12:\t");
	fflush(stdout);
	scanf("%d", &num);

	//processamento
	switch (num) {
		case 1:
			printf("\nO mês é janeiro");
			break;
		case 2:
			printf("\nO mês é fevereiro");
			break;
		case 3:
			printf("\nO mês é março");
			break;
		case 4:
			printf("\nO mês é abril");
			break;
		case 5:
			printf("\nO mês é maio");
			break;
		case 6:
			printf("\nO mês é junho");
			break;
		case 7:
			printf("\nO mês é julho");
			break;
		case 8:
			printf("\nO mês é agosto");
			break;
		case 9:
			printf("\nO mês é setembro");
			break;
		case 10:
			printf("\nO mês é outubro");
			break;
		case 11:
			printf("\nO mês é novembro");
			break;
		case 12:
			printf("\nO mês é dezembro");
			break;
		default:
			printf("\nO número digitado não está no intervalo entre 1 e 7\n");
			break;
	}
	return 0;
}


/*
 Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima
 o m�s correspondente a este n�mero. Isto �, janeiro se 1, fevereiro se 2,
 e assim por diante.
 */

#include <stdio.h>

int main() {
	//declara��o de vari�veis
	int num;
	//entrada
	printf("Digite um inteiro entre 1 e 12:\t");
	fflush(stdout);
	scanf("%d", &num);

	//processamento
	switch (num) {
		case 1:
			printf("\nO m�s � janeiro");
			break;
		case 2:
			printf("\nO m�s � fevereiro");
			break;
		case 3:
			printf("\nO m�s � mar�o");
			break;
		case 4:
			printf("\nO m�s � abril");
			break;
		case 5:
			printf("\nO m�s � maio");
			break;
		case 6:
			printf("\nO m�s � junho");
			break;
		case 7:
			printf("\nO m�s � julho");
			break;
		case 8:
			printf("\nO m�s � agosto");
			break;
		case 9:
			printf("\nO m�s � setembro");
			break;
		case 10:
			printf("\nO m�s � outubro");
			break;
		case 11:
			printf("\nO m�s � novembro");
			break;
		case 12:
			printf("\nO m�s � dezembro");
			break;
		default:
			printf("\nO n�mero digitado n�o est� no intervalo entre 1 e 7\n");
			break;
	}
	return 0;
}


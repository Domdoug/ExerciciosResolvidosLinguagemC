/*
 Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima
 o dia da semana corresponde a este n�mero. Isto �, domingo se 1, segunda-feira se 2,
 e assim por diante.
 */

#include <stdio.h>

int main() {
	//declara��o de vari�veis
	int num;
	//entrada
	printf("Digite um inteiro entre 1 e 7:\t");
	fflush(stdout);
	scanf("%d", &num);

	//processamento
	switch (num) {
		case 1:
			printf("\nO dia da semana � domingo");
			break;
		case 2:
			printf("\nO dia da semana � segunda-feira");
			break;
		case 3:
			printf("\nO dia da semana � ter�a-feira");
			break;
		case 4:
			printf("\nO dia da semana � quarta-feira");
			break;
		case 5:
			printf("\nO dia da semana � quinta-feira");
			break;
		case 6:
			printf("\nO dia da semana � sexta-feira");
			break;
		case 7:
			printf("\nO dia da semana � s�bado");
			break;
		default:
			printf("\nO n�mero digitado n�o est� no intervalo entre 1 e 7\n");
			break;
	}
	return 0;
}

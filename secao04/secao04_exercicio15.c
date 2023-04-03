/*
 Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima
 o dia da semana corresponde a este número. Isto é, domingo se 1, segunda-feira se 2,
 e assim por diante.
 */

#include <stdio.h>

int main() {
	//declaração de variáveis
	int num;
	//entrada
	printf("Digite um inteiro entre 1 e 7:\t");
	fflush(stdout);
	scanf("%d", &num);

	//processamento
	switch (num) {
		case 1:
			printf("\nO dia da semana é domingo");
			break;
		case 2:
			printf("\nO dia da semana é segunda-feira");
			break;
		case 3:
			printf("\nO dia da semana é terça-feira");
			break;
		case 4:
			printf("\nO dia da semana é quarta-feira");
			break;
		case 5:
			printf("\nO dia da semana é quinta-feira");
			break;
		case 6:
			printf("\nO dia da semana é sexta-feira");
			break;
		case 7:
			printf("\nO dia da semana é sábado");
			break;
		default:
			printf("\nO número digitado não está no intervalo entre 1 e 7\n");
			break;
	}
	return 0;
}

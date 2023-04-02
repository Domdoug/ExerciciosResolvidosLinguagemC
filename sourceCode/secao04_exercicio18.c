/*
 Faça um programa que mostre ao usuário um menu com 4 opções de operações
 matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e
 o seu programa então pede dois valores numéricos e realiza a operação,
 mostrando o resultado e saindo.
 */

#include <stdio.h>

int main() {
	//declaração das variáveis
	float num1, num2;
	int operacao;
	float resultado;

	//Entrada
	printf("\n::::::::::::::::::: MENU ::::::::::::::::::::::: \n");
	printf("Escolha a opção numérica da operação matemática, sendo:");
	printf("\n1 - Soma");
	printf("\n2 - Subtração");
	printf("\n3 - Multiplicação");
	printf("\n4 - Divisão");
	printf("\n=================================================\n");
	fflush(stdout);
	scanf("%d", &operacao);

	switch (operacao) {
		case 1:
			printf("\nA operação escolhida foi a soma '+' ");
			break;
		case 2:
			printf("\nA operação escolhida foi a subtração '-' ");
			break;
		case 3:
			printf("\nA operação escolhida foi a multiplicação '*' ");
			break;
		case 4:
			printf("\nA operação escolhida foi a divisão '/' ");
			break;

		default:
			printf("\nO valor escolhido não está entre 1 e 4");
			break;
			return 0;
	}

	printf("\n=================================================\n");
	printf("Digite dois números para realizar a operação matemática escolhida:\t");
	fflush(stdout);
	scanf("%f%f", &num1, &num2);

	switch (operacao) {
		case 1:
			resultado = num1 + num2;
			printf("\nO valor da soma é: %f", resultado);
			break;
		case 2:
			resultado = num1 - num2;
			printf("\nO valor da subtração é: %f", resultado);
			break;
		case 3:
			resultado = num1 * num2;
			printf("\nO valor da multiplicação é: %f", resultado);
			break;
		case 4:
			if (num2==0){
				printf("\nO segundo número (denominador) não pode ser igual a zero");
			} else {
				resultado = num1 / num2;
				printf("\nO valor da divisão é: %f", resultado);
			}
			break;
//		default:
//			break;
	}
	return 0;
}

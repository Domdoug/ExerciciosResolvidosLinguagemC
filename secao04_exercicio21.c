/*
 Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação
 escolhida. Escreva uma mensagem de erro se a opção foi inválida.

 Escolha a opção:
 1 - Soma de 2 números
 2 - Diferença entre 2 números (maior pelo menor)
 3 - Produto entre 2 números
 4 - Divisão entre 2 números (O denominador não pode ser zero)
 Opção
 */

#include <stdio.h>

int main() {
	//declaração das variáveis
	float num1, num2;
	int operacao;
	float resultado;

	//Entrada
	printf("\n::::::::::::::::::: MENU ::::::::::::::::::::::: \n");
	printf("Escolha a opção:");

	printf("\n1 - Soma de 2 números");
	printf("\n2 - Diferença entre 2 números (maior pelo menor)");
	printf("\n3 - Produto entre 2 números");
	printf("\n4 - Divisão entre 2 números (O denominador não pode ser zero)");
	printf("\n=================================================\n");
	printf("\nOpção: ");
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

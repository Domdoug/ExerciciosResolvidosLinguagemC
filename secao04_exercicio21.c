/*
 Escreva o menu de op��es abaixo. Leia a op��o do usu�rio e execute a opera��o
 escolhida. Escreva uma mensagem de erro se a op��o foi inv�lida.

 Escolha a op��o:
 1 - Soma de 2 n�meros
 2 - Diferen�a entre 2 n�meros (maior pelo menor)
 3 - Produto entre 2 n�meros
 4 - Divis�o entre 2 n�meros (O denominador n�o pode ser zero)
 Op��o
 */

#include <stdio.h>

int main() {
	//declara��o das vari�veis
	float num1, num2;
	int operacao;
	float resultado;

	//Entrada
	printf("\n::::::::::::::::::: MENU ::::::::::::::::::::::: \n");
	printf("Escolha a op��o:");

	printf("\n1 - Soma de 2 n�meros");
	printf("\n2 - Diferen�a entre 2 n�meros (maior pelo menor)");
	printf("\n3 - Produto entre 2 n�meros");
	printf("\n4 - Divis�o entre 2 n�meros (O denominador n�o pode ser zero)");
	printf("\n=================================================\n");
	printf("\nOp��o: ");
	fflush(stdout);
	scanf("%d", &operacao);

	switch (operacao) {
		case 1:
			printf("\nA opera��o escolhida foi a soma '+' ");
			break;
		case 2:
			printf("\nA opera��o escolhida foi a subtra��o '-' ");
			break;
		case 3:
			printf("\nA opera��o escolhida foi a multiplica��o '*' ");
			break;
		case 4:
			printf("\nA opera��o escolhida foi a divis�o '/' ");
			break;

		default:
			printf("\nO valor escolhido n�o est� entre 1 e 4");
			break;
			return 0;
	}

	printf("\n=================================================\n");
	printf("Digite dois n�meros para realizar a opera��o matem�tica escolhida:\t");
	fflush(stdout);
	scanf("%f%f", &num1, &num2);

	switch (operacao) {
		case 1:
			resultado = num1 + num2;
			printf("\nO valor da soma �: %f", resultado);
			break;
		case 2:
			resultado = num1 - num2;
			printf("\nO valor da subtra��o �: %f", resultado);
			break;
		case 3:
			resultado = num1 * num2;
			printf("\nO valor da multiplica��o �: %f", resultado);
			break;
		case 4:
			if (num2==0){
				printf("\nO segundo n�mero (denominador) n�o pode ser igual a zero");
			} else {
				resultado = num1 / num2;
				printf("\nO valor da divis�o �: %f", resultado);
			}
			break;
//		default:
//			break;
	}
	return 0;
}

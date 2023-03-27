/*
 Fa�a um programa que mostre ao usu�rio um menu com 4 op��es de opera��es
 matem�ticas (as b�sicas, por exemplo). O usu�rio escolhe uma das op��es e
 o seu programa ent�o pede dois valores num�ricos e realiza a opera��o,
 mostrando o resultado e saindo.
 */

#include <stdio.h>

int main() {
	//declara��o das vari�veis
	float num1, num2;
	int operacao;
	float resultado;

	//Entrada
	printf("\n::::::::::::::::::: MENU ::::::::::::::::::::::: \n");
	printf("Escolha a op��o num�rica da opera��o matem�tica, sendo:");
	printf("\n1 - Soma");
	printf("\n2 - Subtra��o");
	printf("\n3 - Multiplica��o");
	printf("\n4 - Divis�o");
	printf("\n=================================================\n");
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

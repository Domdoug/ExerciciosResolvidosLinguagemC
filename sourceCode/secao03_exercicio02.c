//Fa�a um programa que leia um n�mero real e o imprima
#include <stdio.h>

int main(){  //a chave delimita um bloco de c�digo
	//declaração de vari�veis
	float estatura;  //inteiro

	//declara��o e inicializa��o de vari�veis
	//int idade=0;

	//Fun��o para escrever algo na sa�da padr�o (console)
	
	printf("Qual � a sua estatura? "); //o ponto e virgula finaliza um comando
	//Esta instru��o � para corrigir um problema quando se executa no windows.
	//A idade vem antes da pergunta. No linux n�o precisa utilizar.
	//Em resumo, a fun��o fflush � para limpar a sa�da do console para fazer com que o printf funcione
	//fflush(stdout);

	//receber dados do teclado
	scanf("%f", &estatura);  //%f informa que vai receber uma vari�vel do tipo float

	//Sa�da
	printf("A sua estatura � %f", estatura);
	return 0;

} //fim do bloco

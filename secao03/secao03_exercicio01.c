//Fa�a um programa que leia um n�mero inteiro e o imprima
#include <stdio.h>

int main(){  //a chave delimita um bloco de c�digo
	//declara��o de vari�veis
	int idade;  //inteiro

	//declara��o e inicializa��o de vari�veis
	//int idade=0;

	//Fun��oo para escrever algo na sa�da padr�o (console)
	
	printf("Qual � a sua idade? "); //o ponto e virgula finaliza um comando
	//Esta instrução é para corrigir um problema quando se executa no windows.
	//A idade vem antes da pergunta. No linux não precisa utilizar.
	//Em resumo, a função fflush é para limpar a saída do console para fazer com que o printf funcione
	//fflush(stdout);

	//receber dados do teclado
	scanf("%d", &idade);  //%d informa que vai receber uma vari�vel do tipo inteiro

	//Saída
	printf("A sua idade � %d", idade);
	return 0;

} //fim do bloco

//Faça um programa que leia um número inteiro e o imprima
#include <stdio.h>

int main(){  //a chave delimita um bloco de código
	//declaração de variáveis
	int idade;  //inteiro

	//declaração e inicialização de variáveis
	//int idade=0;

	//Função para escrever algo na saída padrão (console)
	//printf("Geek University!");
	printf("Qual é a sua idade? "); //o ponto e virgula finaliza um comando
	//Esta instrução é para corrigir um problema quando se executa no windows.
	//A idade vem antes da pergunta. No linux não precisa utilizar.
	//Em resumo, a função fflush é para limpar a saída do console para fazer com que o printf funcione
	//fflush(stdout);

	//receber dados do teclado
	scanf("%d", &idade);  //%d informa que vai receber uma variável do tipo inteiro

	//Saída
	printf("A sua idade é %d", idade);
	return 0;

} //fim do bloco

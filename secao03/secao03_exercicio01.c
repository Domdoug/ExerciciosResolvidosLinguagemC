//Faça um programa que leia um número inteiro e o imprima
#include <stdio.h>

int main(){  //a chave delimita um bloco de código
	//declaração de variáveis
	int idade;  //inteiro

	//declaração e inicialização de variáveis
	//int idade=0;

	//Funçãoo para escrever algo na saí­da padrão (console)
	
	printf("Qual é a sua idade? "); //o ponto e virgula finaliza um comando
	//Esta instruÃ§Ã£o Ã© para corrigir um problema quando se executa no windows.
	//A idade vem antes da pergunta. No linux nÃ£o precisa utilizar.
	//Em resumo, a funÃ§Ã£o fflush Ã© para limpar a saÃ­da do console para fazer com que o printf funcione
	//fflush(stdout);

	//receber dados do teclado
	scanf("%d", &idade);  //%d informa que vai receber uma variável do tipo inteiro

	//SaÃ­da
	printf("A sua idade é %d", idade);
	return 0;

} //fim do bloco

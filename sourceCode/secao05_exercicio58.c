/*
Faça um programa que some os primos existentes entre a e b, onde a e b
são números informados pelo usuário.
================
ESTE EXERCÍCIO É SIMILAR AO EXERCÍCIO 56
Digite o intervalo para somar os números primos:1  2000000
A Contagem de números primos no intervalo é 148.933
Tempo gasto: 0,530000 segundos
-------------------------------------
Com a implementação de ponteiros para contar e somar e retornar na mesma função
Digite o intervalo para contar os números primos:1  2000000

A Contagem de números primos no intervalo é 148.933 e a soma é: 142.913.828.922
Tempo gasto: 0,710000 segundos
*/
//#define __USE_MINGW_ANSI_STDIO
#include <stdio.h>
#include <locale.h>
#include <time.h>
	
int eh_primo( unsigned int n )
{
	unsigned int i = 0;
	
	if( n <= 1 )
		return 0;
	
	for( i = 2; i * i <= n; i++ )
		if( n % i == 0 )
			return 0;
	
	return 1;
}
	
void somar_primos( int inicio, int fim, long long unsigned  *soma, int *cont )
{
	int i = 0;
	//*soma = 0;
	//*cont=0;
	
	for( i = inicio; i < fim; i++ )
	{
		if( eh_primo(i) )
		{
			*soma += i;
			*cont += 1;
		}
	}
	//return soma;
}
	
int main( void )
{
	setlocale(LC_ALL, "");
	int numI, numF;
	int c=0;
	long long unsigned s=0;

	printf("Digite o intervalo para contar os números primos:");
	scanf("%d %d", &numI, &numF);

	clock_t tic = clock();
	somar_primos( numI, numF, &s, &c );
	printf("\nA Contagem de números primos no intervalo é %d e a soma é: %llu", c, s );
	//printf("\nA Contagem de números primos no intervalo é %d e a soma é: %I64", c, s );
	
	clock_t tac = clock();
	double tempo_gasto = (double)(tac - tic) / CLOCKS_PER_SEC;
	printf("\nTempo gasto: %f segundos\n", tempo_gasto);
	return 0;
}
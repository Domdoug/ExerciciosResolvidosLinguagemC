/*
Faça um programa que CONTE quantos números primos existem entre a e b,
onde a e b são números informados pelo usuário.
ESTE EXERCÍCIO É SIMILAR AO 56, PORÉM TEM QUE CONTAR E NÃO SOMAR.
======================
Digite o intervalo para contar os números primos:1
20000

A Contagem de números primos no intervalo é 2262 e a soma é: 21171191
Tempo gasto: 0,010000 segundos

*/

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
	
	clock_t tac = clock();
	double tempo_gasto = (double)(tac - tic) / CLOCKS_PER_SEC;
	printf("\nTempo gasto: %f segundos\n", tempo_gasto);
	return 0;
}
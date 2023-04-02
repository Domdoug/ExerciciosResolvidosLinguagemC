/*
Fa�a um programa que CONTE quantos n�meros primos existem entre a e b,
onde a e b s�o n�meros informados pelo usu�rio.
ESTE EXERC�CIO � SIMILAR AO 56, POR�M TEM QUE CONTAR E N�O SOMAR.
======================
Digite o intervalo para contar os n�meros primos:1
20000

A Contagem de n�meros primos no intervalo � 2262 e a soma �: 21171191
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

	printf("Digite o intervalo para contar os n�meros primos:");
	scanf("%d %d", &numI, &numF);

	clock_t tic = clock();
	somar_primos( numI, numF, &s, &c );
	printf("\nA Contagem de n�meros primos no intervalo � %d e a soma �: %llu", c, s );
	
	clock_t tac = clock();
	double tempo_gasto = (double)(tac - tic) / CLOCKS_PER_SEC;
	printf("\nTempo gasto: %f segundos\n", tempo_gasto);
	return 0;
}
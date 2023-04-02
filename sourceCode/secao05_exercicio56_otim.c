/*
Faça um programa que calcule a soma de todos os números primos abaixo de 2 milhões.
Digite o intervalo para somar os números primos:1  2.000
277.050
A soma dos primos é:
Tempo gasto: 0,005000 segundos
-------------------------------------
Digite o intervalo para somar os números primos:1  20.000
21.171.191
É a soma dos primos
Tempo gasto: 0,006000 segundos
------------------------------------
Digite o intervalo para somar os números primos:1  200.000
1.709.600.813
É a soma dos primos
Tempo gasto: 0,042000 segundos
Se usar a rotina com outra tipagem long long unsigned, o tempo diminui para 0,027000
------------------------------------
Digite o intervalo para somar os números primos:1  2.000.000
1.179.908.154  (errada, também)
É a soma dos primos
Tempo gasto: 0,716000 segundos  (bem mais rápida)
-------------------------------------
Digite o intervalo para somar os números primos:1
2000000

A soma dos primos é 142.913.828.922 (agora, sim. Certo! Dica: usar unsigned long long para a soma)
e no print usar llu para formatação.
Tempo gasto: 0,491000 segundos

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
	
long long unsigned somar_primos( int inicio, int fim )
{
	int i = 0;
	long long unsigned soma = 0;
	
	for( i = inicio; i < fim; i++ )
		if( eh_primo(i) )
			soma += i;
	
	return soma;
}
	
int main( void )
{
	setlocale(LC_ALL, "");
	int numI, numF;
	printf("Digite o intervalo para somar os números primos:");
	scanf("%d %d", &numI, &numF);

	clock_t tic = clock();
	printf("\nA soma dos primos é %llu", somar_primos( numI, numF ));
	
	clock_t tac = clock();
	double tempo_gasto = (double)(tac - tic) / CLOCKS_PER_SEC;
	printf("\nTempo gasto: %f segundos\n", tempo_gasto);
	return 0;
}
     
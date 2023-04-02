// Leia uma distancia em quilômetros e apresente-a convertida em milhas.
// A fórmula de conversão é: M = K/1.61, sendo K a distancia em km
// e M em milhas
#include <stdio.h>

int main(){
	float K, M;
	printf("Digite a distancia em quilômetros ");
	scanf("%f", &K);

	M = K/1.61;

	printf("A distância corresponde à %.2f milhas ", M);
	return 0;
}

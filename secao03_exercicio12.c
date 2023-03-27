// Leia uma distancia em milhas e apresente-a convertida em km.
// A fórmula de conversão é: K = 1.61*M, sendo K a distancia em km
// e M em milhas
#include <stdio.h>

int main(){
	float K, M;
	printf("Digite a distancia em milhas ");
	scanf("%f", &M);

	//fórmula de conversão milhas para km
	 K = 1.61*M;

	printf("A distância corresponde à %.2f km ", K);
	return 0;
}

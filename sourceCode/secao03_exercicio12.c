// Leia uma distancia em milhas e apresente-a convertida em km.
// A f�rmula de convers�o �: K = 1.61*M, sendo K a distancia em km
// e M em milhas
#include <stdio.h>

int main(){
	float K, M;
	printf("Digite a distancia em milhas ");
	scanf("%f", &M);

	//f�rmula de convers�o milhas para km
	 K = 1.61*M;

	printf("A distancia corresponde � %.2f km ", K);
	return 0;
}

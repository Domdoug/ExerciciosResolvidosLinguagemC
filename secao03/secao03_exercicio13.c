// Leia uma distancia em quil�metros e apresente-a convertida em milhas.
// A f�rmula de convers�o �: M = K/1.61, sendo K a distancia em km
// e M em milhas
#include <stdio.h>

int main(){
	float K, M;
	printf("Digite a distancia em quil�metros ");
	scanf("%f", &K);

	M = K/1.61;

	printf("A distancia corresponde � %.2f milhas ", M);
	return 0;
}

// Leia um valor de massa em libras e apresente-o convertido em quilogramas.
// A fórmula de conversão é: K = L*0.45, sendo K a massa em quilogramas
// e L a massa em libras.

#include <stdio.h>

int main(){
	float L, K;
	printf("Digite a massa em libras ");
	scanf("%f", &L);

	K = L*0.45;

	printf("A massa em quilograms é %.2f ", K);
	return 0;
}

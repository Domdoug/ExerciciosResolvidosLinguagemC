// Leia um valor de massa em libras e apresente-o convertido em quilogramas.
// A f�rmula de convers�o �: K = L*0.45, sendo K a massa em quilogramas
// e L a massa em libras.

#include <stdio.h>

int main(){
	float L, K;
	printf("Digite a massa em libras ");
	scanf("%f", &L);

	K = L*0.45;

	printf("A massa em quilograms � %.2f ", K);
	return 0;
}

// Leia um valor de volume em m3 e apresente-o convertido em litros.
// A f�rmula de convers�o �: L = 1000 * M, sendo L o volume em litros
// e M em metros c�bicos.

#include <stdio.h>

int main(){
	float L, M;
	printf("Digite o volume em litros ");
	scanf("%f", &L);

	M = L/1000;

	printf("O volume em metros c�bicos � %.2f ", M);
	return 0;
}

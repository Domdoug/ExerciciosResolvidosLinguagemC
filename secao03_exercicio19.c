// Leia um valor de volume em m3 e apresente-o convertido em litros.
// A fórmula de conversão é: L = 1000 * M, sendo L o volume em litros
// e M em metros cúbicos.

#include <stdio.h>

int main(){
	float L, M;
	printf("Digite o volume em litros ");
	scanf("%f", &L);

	M = L/1000;

	printf("O volume em metros cúbicos é %.2f ", M);
	return 0;
}

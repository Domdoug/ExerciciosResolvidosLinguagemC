// Leia um valor de volume em m3 e apresente-o convertido em litros.
// A fórmula de conversão é: L = 1000 * M, sendo L o volume em litros
// e M em metros cúbicos.

#include <stdio.h>

int main(){
	float L, M;
	printf("Digite o volume em metros cúbicos ");
	scanf("%f", &M);

	L = 1000*M;

	printf("O volume em litros é %.2f ", L);
	return 0;
}

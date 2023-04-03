// Leia um valor de comprimento em centí­metros e apresente-o convertido em polegadas.
// A fórmula de conversão é: P = C/2.54, sendo C o comprimento em centímetros
// e P em polegadas.
#include <stdio.h>

int main(){
	float P, C;
	printf("Digite o comprimento em centí­metros ");
	scanf("%f", &C);

	P = C/2.54;

	printf("O comprimento em centímetros é %.2f ", P);
	return 0;
}

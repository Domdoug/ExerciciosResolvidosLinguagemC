// Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros.
// A fórmula de conversão é: C = P*2.54, sendo C o comprimento em centí­metros
// e P em polegadas.
#include <stdio.h>

int main(){
	float P, C;
	printf("Digite o comprimento em polegadas ");
	scanf("%f", &P);

	C = P*2.54;

	printf("O comprimento em centímetros é %.2f ", C);
	return 0;
}

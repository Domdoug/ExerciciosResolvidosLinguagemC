// Leia um valor de comprimento em cent�metros e apresente-o convertido em polegadas.
// A f�rmula de convers�o �: P = C/2.54, sendo C o comprimento em cent�metros
// e P em polegadas.
#include <stdio.h>

int main(){
	float P, C;
	printf("Digite o comprimento em cent�metros ");
	scanf("%f", &C);

	P = C/2.54;

	printf("O comprimento em cent�metros � %.2f ", P);
	return 0;
}

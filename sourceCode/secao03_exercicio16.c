// Leia um valor de comprimento em polegadas e apresente-o convertido em cent�metros.
// A f�rmula de convers�o �: C = P*2.54, sendo C o comprimento em cent�metros
// e P em polegadas.
#include <stdio.h>

int main(){
	float P, C;
	printf("Digite o comprimento em polegadas ");
	scanf("%f", &P);

	C = P*2.54;

	printf("O comprimento em cent�metros � %.2f ", C);
	return 0;
}

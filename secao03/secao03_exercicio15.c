// Leia um �ngulo em radiano e apresente-o convertido em graus.
// A f�rmula de convers�o �: G = R*180/pi, sendo G o �ngulo em graus
// e R em radianos. pi = 3.14
#include <stdio.h>

int main(){
	float G, R, pi=3.14;
	printf("Digite o �ngulo em radianos ");
	scanf("%f", &R);

	G = R*180/pi;

	printf("O �ngulo em graus � %.2f ", G);
	return 0;
}

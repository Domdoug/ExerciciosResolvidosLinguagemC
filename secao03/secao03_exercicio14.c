// Leia um �ngulo em graus e apresente-o convertido em radiano.
// A f�rmula de convers�o �: R = G*pi/180, sendo G o �ngulo em graus
// e R em radianos. pi = 3.14
#include <stdio.h>

int main(){
	float G, R, pi=3.14;
	printf("Digite o �ngulo em graus ");
	scanf("%f", &G);

	R = G*pi/180;

	printf("O �ngulo em radianos � %.2f ", R);
	return 0;
}

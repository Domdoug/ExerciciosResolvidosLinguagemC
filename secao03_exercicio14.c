// Leia um ângulo em graus e apresente-o convertido em radiano.
// A fórmula de conversão é: R = G*pi/180, sendo G o ângulo em graus
// e R em radianos. pi = 3.14
#include <stdio.h>

int main(){
	float G, R, pi=3.14;
	printf("Digite o ângulo em graus ");
	scanf("%f", &G);

	R = G*pi/180;

	printf("O ângulo em radianos é %.2f ", R);
	return 0;
}

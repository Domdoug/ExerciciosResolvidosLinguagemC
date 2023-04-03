// Leia um ângulo em radiano e apresente-o convertido em graus.
// A fórmula de conversão é: G = R*180/pi, sendo G o ângulo em graus
// e R em radianos. pi = 3.14
#include <stdio.h>

int main(){
	float G, R, pi=3.14;
	printf("Digite o ângulo em radianos ");
	scanf("%f", &R);

	G = R*180/pi;

	printf("O ângulo em graus é %.2f ", G);
	return 0;
}

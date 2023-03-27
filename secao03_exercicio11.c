// Leia uma velocidade em m/s e apresente-a convertida em km/h.
// A fórmula de conversão é: K = M*3.6, sendo K a velocidade em km/h
// e M em m/s
#include <stdio.h>

int main(){
	float K, M;
	printf("Digite a velocidade em m/s ");
	scanf("%f", &M);

	//fórmula de conversão m/s para km/h
	 K = M*3.6;

	printf("A velocidade corresponde à %.2f km/h ", K);
	return 0;
}

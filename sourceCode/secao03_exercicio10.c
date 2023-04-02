// Leia uma velocidade em km/h e apresente-a convertida em m/s.
//A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h
// e M em m/s
#include <stdio.h>

int main(){
	float K, M;
	printf("Digite a velocidade em km/h ");
	scanf("%f", &K);

	//fórmula de conversão de km/h para m/s
	 M = K/3.6;

	printf("A velocidade corresponde à %.2f m/s ", M);
	return 0;
}

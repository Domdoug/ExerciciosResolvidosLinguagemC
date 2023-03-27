// Leia uma temperatura em graus Celsius e apresente-a convertida em graus
//Fahrenheit. A fórmula de conversão é: F = C*(9.0/5.0) + 32.0
#include <stdio.h>

int main(){
	float celsius, fahrenheit;
	printf("Digite a temperatura em graus Celsius ");
	scanf("%f", &celsius);

	//fórmula de conversão de graus Celsius para Fahrenheit
	fahrenheit = celsius*(9.0/5.0)+32;

	printf("A temperatura corresponde a %.2f graus Fahrenheit ", fahrenheit);
	return 0;
}

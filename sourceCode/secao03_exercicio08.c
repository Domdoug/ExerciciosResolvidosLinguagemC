// Leia uma temperatura em graus Kelvin e apresente-a convertida em graus
//Celsius. A fórmula de conversão é: C = K - 273.15
#include <stdio.h>

int main(){
	float celsius, kelvin;
	printf("Digite a temperatura em graus Kelvin ");
	scanf("%f", &kelvin);

	//fórmula de conversão de graus Celsius para Kelvin
	celsius = kelvin-273.15;

	printf("A temperatura corresponde a %.2f graus Celsius ", celsius);
	return 0;
}

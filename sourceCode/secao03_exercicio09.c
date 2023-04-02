// Leia uma temperatura em graus Celsius e apresente-a convertida em graus
//Kelvin. A fórmula de conversão é: K = C + 273.15
#include <stdio.h>

int main(){
	float celsius, kelvin;
	printf("Digite a temperatura em graus Celsius ");
	scanf("%f", &celsius);

	//fórmula de conversão de graus Kelvin para Celsius
	 kelvin = celsius + 273.15;

	printf("A temperatura corresponde a %.2f graus Kelvin ", kelvin);
	return 0;
}

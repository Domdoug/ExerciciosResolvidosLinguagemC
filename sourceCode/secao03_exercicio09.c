// Leia uma temperatura em graus Celsius e apresente-a convertida em graus
//Kelvin. A f�rmula de convers�o �: K = C + 273.15
#include <stdio.h>

int main(){
	float celsius, kelvin;
	printf("Digite a temperatura em graus Celsius ");
	scanf("%f", &celsius);

	//f�rmula de convers�o de graus Kelvin para Celsius
	 kelvin = celsius + 273.15;

	printf("A temperatura corresponde a %.2f graus Kelvin ", kelvin);
	return 0;
}

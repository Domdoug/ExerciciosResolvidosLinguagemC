/* Leia uma temperatura em graus Celsius e apresente-a convertida em graus
Fahrenheit. A f�rmula de convers�o �: F = C*(9.0/5.0) + 32.0
*/
#include <stdio.h>

int main(){
	float celsius, fahrenheit;
	printf("Digite a temperatura em graus Celsius ");
	scanf("%f", &celsius);

	//f�rmula de convers�o de graus Celsius para Fahrenheit
	fahrenheit = celsius*(9.0/5.0)+32;

	printf("A temperatura corresponde a %.2f graus Fahrenheit ", fahrenheit);
	return 0;
}

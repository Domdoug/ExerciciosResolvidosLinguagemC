/* Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus
Celsius. A f�rmula de convers�o �: C = 5.0*(F-32.0)/9.0
*/
#include <stdio.h>

int main(){
	float celsius, fahrenheit;
	printf("Digite a temperatura em graus Fahrenheit ");
	scanf("%f", &fahrenheit);

	//f�rmula de convers�o de graus Fahrenheit para Celsius
	celsius = 5.0*(fahrenheit-32)/9.0;

	printf("A temperatura corresponde a %.2f graus Celsius ", celsius);
	return 0;
}

//Leia um valor de comprimento em jardas e apresente-o convertido em metros.
//A fórmula de conversão é: M = 0,91 * J, sendo J o comprimento em jardas e M
//o comprimento em metros.

#include <stdio.h>

int main(){
	float M, J;

	printf("Digite um valor em jardas: ");
	scanf("%f", &J);

	//Fórmula
	M = 0.91*J;

	printf("O valor em metros corresponde a %.2f ", M);
	return 0;

}

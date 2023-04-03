//Leia um valor de comprimento em metros e apresente-o convertido em jardas.
//A fórmula de conversão é: J = M/0,91, sendo J o comprimento em jardas e M
//o comprimento em metros.

#include <stdio.h>

int main(){
	float M, J;

	printf("Digite um valor em metros: ");
	scanf("%f", &M);

	//Fórmula
	J = M/0.91;

	printf("O valor em jardas corresponde a %.2f ", J);
	return 0;

}

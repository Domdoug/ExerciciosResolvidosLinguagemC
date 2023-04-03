//Leia um valor de área em metros quadrados e apresente-o convertido em acres.
//A fórmula de conversão é: A = 0.000247 * M, sendo M a área em metros quadrados
//e A a área em acres.

#include <stdio.h>

int main(){
	float A, M;

	printf("Digite a área em metros quadrados: ");
	scanf("%f", &M);

	//Fórmula
	A = 0.000247*M;

	printf("O valor em Acres corresponde a %.5f ", A);
	return 0;

}

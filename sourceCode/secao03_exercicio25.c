//Leia um valor de área em acres e apresente-o convertido em metros quadrados.
//A fórmula de conversão é: M = 4048,58 * A, sendo M a área em metros quadrados
//e A a área em acres.

#include <stdio.h>

int main(){
	float A, M;

	printf("Digite a área em acres: ");
	scanf("%f", &A);

	//Fórmula
	M = 4048.58*A;

	printf("O valor em metros quadrados corresponde a %.5f ", M);
	return 0;

}

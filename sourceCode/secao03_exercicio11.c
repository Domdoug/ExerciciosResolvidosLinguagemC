// Leia uma velocidade em m/s e apresente-a convertida em km/h.
// A f�rmula de convers�o �: K = M*3.6, sendo K a velocidade em km/h
// e M em m/s
#include <stdio.h>

int main(){
	float K, M;
	printf("Digite a velocidade em m/s ");
	scanf("%f", &M);

	//f�rmula de convers�o m/s para km/h
	 K = M*3.6;

	printf("A velocidade corresponde � %.2f km/h ", K);
	return 0;
}

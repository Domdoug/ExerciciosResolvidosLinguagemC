//Leia um n�mero real e imprima a quinta parte deste n�mero

#include <stdio.h>

int main(){
	float numero, resultado;
	printf("Digite um n�mero real ");
	scanf("%f", &numero);

	resultado = numero/5;
	printf("A quinta parte do n�mero %f �", resultado);
	return 0;
}

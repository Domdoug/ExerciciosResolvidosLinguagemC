//Leia um número real e imprima a quinta parte deste número

#include <stdio.h>

int main(){
	float numero, resultado;
	printf("Digite um número real ");
	scanf("%f", &numero);

	resultado = numero/5;
	printf("A quinta parte do número %f é", resultado);
	return 0;
}

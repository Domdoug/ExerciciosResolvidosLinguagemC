//Leia um n�mero real e imprima o resultado do quadrado desse n�mero
#include <stdio.h>

int main(){
	float numero, quadrado;

	printf("Digite um n�mero real ");
	scanf("%f", &numero);
	//operação
	quadrado = numero * numero;
	printf("O quadrado do n�mero %f � ", quadrado);
	return 0;

}


//float potencia (int base, int exp){    float resultado = base;    int i;     for ( i = 0; i < exp-1; i++){        resultado = resultado*base;    }    return resultado;}

//Leia um número real e imprima o resultado do quadrado desse número
#include <stdio.h>

int main(){
	float numero, quadrado;

	printf("Digite um número real ");
	scanf("%f", &numero);
	//operaÃ§Ã£o
	quadrado = numero * numero;
	printf("O quadrado do número %f é ", quadrado);
	return 0;

}


//float potencia (int base, int exp){    float resultado = base;    int i;     for ( i = 0; i < exp-1; i++){        resultado = resultado*base;    }    return resultado;}

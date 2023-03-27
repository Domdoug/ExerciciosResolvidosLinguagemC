//Leia um valor de área em hectares e apresente-o convertido em metros quadrados.
//A fórmula de conversão é: M = H*10000, sendo M a área em metros quadrados
//e H a área em hectares.

#include <stdio.h>

int main(){
    float H, M;

    printf("Digite o valor em hectares ");
    scanf("%f", &H);

    //fórmula
    M = H*10000;

    printf("O valor da área em metros quadrados é igual a: %f\n", M);
    return 0;
}
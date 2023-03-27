// Leia um valor da área em metros quadrados e apresente-o convertido em hectares.
// A fórmula de conversão é: H = M * 0,0001, sendo M a área em metros quadrados
// e H a área em hectares.

#include <stdio.h>

int main()
{
    /* code */
    float H, M;
    printf("Digite um valor de área em metros quadrados ");
    scanf("%f", &M);

    //Fórmula
    H = M*0.0001;

    //saída
    printf("O valor convertido em hectares é %f\n", H);
    return 0;
}



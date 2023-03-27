// Sejam a e b os catetos de um triângulo, onde a hipotenusa
// é obtida pela equação: hipotenusa = raiz_quadrada(a*a+b+b).
// Faça um programa que receba os valoes de a e b e calcule
// o valor da hipotenusa através da equação.
// Imprima o resultado dessa operação.

#include <stdio.h>
#include <math.h>

int main()
{
    /* code */
    float a, b, h;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &a);
    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &b);

    //Fórmula
    h = sqrt(pow(a, 2)+pow(b, 2));

    printf("O valor da hipotenusa eh %f\n", h);

    return 0;
}

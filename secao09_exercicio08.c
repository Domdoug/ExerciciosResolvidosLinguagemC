/*
Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida
pela equação: hipotenusa = raiz(a^2+b^2). Faça uma função que receba
os valores de a e b e calcule o valor da hipotenusa através da equação.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

float hipotenusa(float a, float b);

int main()
{
    setlocale(LC_ALL, "");
    float a, b;
    printf("====Cálculo da hipotenusa=====\n");
    printf("Digite o valor de um dos catetos: ");
    scanf("%f", &a);
    printf("Digite o valor do outro cateto: ");
    scanf("%f", &b);

    printf("Cálculo da hipotenusa: %f\n", hipotenusa(a, b));

    return 0;
}

float hipotenusa(float a, float b){

    float resultado;
    resultado = sqrt(a*a + b*b);

    return resultado;
};
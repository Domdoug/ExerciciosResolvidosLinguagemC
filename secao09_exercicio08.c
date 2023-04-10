/*
Sejam a e b os catetos de um tri�ngulo, onde a hipotenusa � obtida
pela equa��o: hipotenusa = raiz(a^2+b^2). Fa�a uma fun��o que receba
os valores de a e b e calcule o valor da hipotenusa atrav�s da equa��o.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

float hipotenusa(float a, float b);

int main()
{
    setlocale(LC_ALL, "");
    float a, b;
    printf("====C�lculo da hipotenusa=====\n");
    printf("Digite o valor de um dos catetos: ");
    scanf("%f", &a);
    printf("Digite o valor do outro cateto: ");
    scanf("%f", &b);

    printf("C�lculo da hipotenusa: %f\n", hipotenusa(a, b));

    return 0;
}

float hipotenusa(float a, float b){

    float resultado;
    resultado = sqrt(a*a + b*b);

    return resultado;
};
/*
Faça um programa que leia três números inteiros positivos e efetue o cálculo
de uma das seguintes médias, de acordo com um valor numérico digitado pelo usuário:
(a) Geométrica: (x*y*z)^(1/3)
(b) Ponderada: (x+2*y+3*z)/6
(c) Harmônica: 3/(1/x+x/y+x/z)
(d) Aritmética: (x+y+z)/3
*/
// Vou alterar o programa para imprimir todas as médias acima

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    float x, y, z;
    int opcao;
    double resultado;

    printf("\nLeia 3 número positivos para efetuar o cálculos das médias:\t");
    scanf("%f %f %f", &x, &y, &z);

    printf("\nDigite a opção abaixo:");
    printf("\n1 - Geométrica:");
    printf("\n2 - Ponderada:");
    printf("\n3 - Harmônica:");
    printf("\n4 - Aritmética:");
    printf("\n5 - Todas as médias acima:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        resultado = cbrt(x*y*z);
        printf("\nA média geométrica é igual a %f\n", resultado);
        break;
    
    case 2:
        resultado = (x+2*y+3*z)/6;
        printf("\nA média ponderada é igual a %f\n", resultado);
        break;
    case 3:
        resultado = 3/((1/x)+(1/y)+(1/z));
        printf("\nA média harmônica é igual a %f\n", resultado);
        break;
    case 4:
        resultado = (x+y+z)/3;
        printf("\nA média aritmética é igual a %f\n", resultado);
        break;
    case 5:
        resultado = cbrt(x*y*z);
        printf("\nA média geométrica é igual a %f", resultado);
        resultado = (x+2*y+3*z)/6;
        printf("\nA média ponderada é igual a %f", resultado);
        resultado = 3/(1/x+1/y+1/z);
        printf("\nA média harmônica é igual a %f", resultado);
        resultado = (x+y+z)/3;
        printf("\nA média aritmética é igual a %f\n", resultado);
        break;
    default:
        printf("\nNúmero inválido");
        break;
    }
    return 0;
}

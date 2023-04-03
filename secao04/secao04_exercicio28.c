/*
Fa�a um programa que leia tr�s n�meros inteiros positivos e efetue o c�lculo
de uma das seguintes m�dias, de acordo com um valor num�rico digitado pelo usu�rio:
(a) Geom�trica: (x*y*z)^(1/3)
(b) Ponderada: (x+2*y+3*z)/6
(c) Harm�nica: 3/(1/x+x/y+x/z)
(d) Aritm�tica: (x+y+z)/3
*/
// Vou alterar o programa para imprimir todas as m�dias acima

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    float x, y, z;
    int opcao;
    double resultado;

    printf("\nLeia 3 n�mero positivos para efetuar o c�lculos das m�dias:\t");
    scanf("%f %f %f", &x, &y, &z);

    printf("\nDigite a op��o abaixo:");
    printf("\n1 - Geom�trica:");
    printf("\n2 - Ponderada:");
    printf("\n3 - Harm�nica:");
    printf("\n4 - Aritm�tica:");
    printf("\n5 - Todas as m�dias acima:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        resultado = cbrt(x*y*z);
        printf("\nA m�dia geom�trica � igual a %f\n", resultado);
        break;
    
    case 2:
        resultado = (x+2*y+3*z)/6;
        printf("\nA m�dia ponderada � igual a %f\n", resultado);
        break;
    case 3:
        resultado = 3/((1/x)+(1/y)+(1/z));
        printf("\nA m�dia harm�nica � igual a %f\n", resultado);
        break;
    case 4:
        resultado = (x+y+z)/3;
        printf("\nA m�dia aritm�tica � igual a %f\n", resultado);
        break;
    case 5:
        resultado = cbrt(x*y*z);
        printf("\nA m�dia geom�trica � igual a %f", resultado);
        resultado = (x+2*y+3*z)/6;
        printf("\nA m�dia ponderada � igual a %f", resultado);
        resultado = 3/(1/x+1/y+1/z);
        printf("\nA m�dia harm�nica � igual a %f", resultado);
        resultado = (x+y+z)/3;
        printf("\nA m�dia aritm�tica � igual a %f\n", resultado);
        break;
    default:
        printf("\nN�mero inv�lido");
        break;
    }
    return 0;
}

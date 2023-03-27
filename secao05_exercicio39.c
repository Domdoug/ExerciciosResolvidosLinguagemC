/*
Fa�a um programa que calcule a �rea de um tri�ngulo, cuja base e altura s�o fornecidas
pelo usu�rio. Esse programa n�o pode permitir a entrada de dados inv�lidos, ou seja,
medidas menores ou iguais a 0.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float base, altura, area;

    printf("\nDigite a base e a altura do tri�ngulo:\t");
    scanf("%f %f", &base, &altura);
    
    while (base<=0 || altura<=0)
    {
        printf("\nValores de a e/ou b inv�lidos!\n");
        printf("\nDigite a base e a altura do tri�ngulo:\t");
        scanf("%f %f", &base, &altura);
    }
    
    area = base * altura/2.0;
    printf("\nA �rea do tri�ngulo de base %f e altura %f � %f:\n", base, altura, area);
    
    return 0;
}

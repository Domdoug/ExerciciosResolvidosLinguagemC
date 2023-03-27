/*
Faça um programa que calcule a área de um triângulo, cuja base e altura são fornecidas
pelo usuário. Esse programa não pode permitir a entrada de dados inválidos, ou seja,
medidas menores ou iguais a 0.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float base, altura, area;

    printf("\nDigite a base e a altura do triângulo:\t");
    scanf("%f %f", &base, &altura);
    
    while (base<=0 || altura<=0)
    {
        printf("\nValores de a e/ou b inválidos!\n");
        printf("\nDigite a base e a altura do triângulo:\t");
        scanf("%f %f", &base, &altura);
    }
    
    area = base * altura/2.0;
    printf("\nA área do triângulo de base %f e altura %f é %f:\n", base, altura, area);
    
    return 0;
}

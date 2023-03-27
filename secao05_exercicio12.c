/*
Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem decrescente.
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "");

    int num;

    printf("\nDigite um número inteiro:\t");
    scanf("%d", &num);

    for (int i = num; i >= 0; i--)
    {
        printf("\n%d", i);
    }
    printf("\n");

    return 0;
}

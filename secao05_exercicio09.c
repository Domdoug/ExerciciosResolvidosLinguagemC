/*
Faça um programa que leia um númeo inteiro N e depois imprima os N primeiros números
naturais impares.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int numero;
    printf("\nLeia um número inteiro:\t");
    scanf("%d", &numero);

    for (int i = 0; i <= numero; i++)
    {
        if (i%2!=0)
        {
            printf("\n%d",i);
        }
    }
    printf("\n");
    return 0;
}

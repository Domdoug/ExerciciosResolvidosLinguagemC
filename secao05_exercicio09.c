/*
Fa�a um programa que leia um n�meo inteiro N e depois imprima os N primeiros n�meros
naturais impares.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int numero;
    printf("\nLeia um n�mero inteiro:\t");
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

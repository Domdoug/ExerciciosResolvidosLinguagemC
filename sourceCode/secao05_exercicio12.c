/*
Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os n�meros
naturais de 0 at� N em ordem decrescente.
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "");

    int num;

    printf("\nDigite um n�mero inteiro:\t");
    scanf("%d", &num);

    for (int i = num; i >= 0; i--)
    {
        printf("\n%d", i);
    }
    printf("\n");

    return 0;
}

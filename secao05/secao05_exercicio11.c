/*
Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os n�meros
naturais de 0 at� N em ordem crescente.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num;

    printf("\nDigite um n�mero inteiro:\t");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        printf("\n%d", i);
    }
    printf("\n");
    
    return 0;
}

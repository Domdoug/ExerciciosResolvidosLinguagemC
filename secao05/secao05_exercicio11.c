/*
Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num;

    printf("\nDigite um número inteiro:\t");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        printf("\n%d", i);
    }
    printf("\n");
    
    return 0;
}

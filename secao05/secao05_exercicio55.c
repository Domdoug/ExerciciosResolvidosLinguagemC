/*
Escreva um programa que leia um inteiro não negativo n e imprima 
a soma dos n primeiros números primos
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, divisores=0, soma=0, cont=0;

    printf("\nSoma dos n primeiros números primos");
    printf("\n===================================");
    do
    {
        printf("\nDigite um número inteiro não negativo:\t");
        scanf("%d", &num);
    } while (num<=0);

    //processamento
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                divisores++;
            }
        }
        if (divisores==2)
        {
            printf("\nO número %d é primo!", i);
            soma+=i;
            cont++;
        }
        divisores=0;
    }
    printf("\nA soma dos %d números primos menor ou igual a %d é %d", cont, num, soma);

    printf("\n");
    return 0;
}
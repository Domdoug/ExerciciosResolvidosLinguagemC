/*
Escreva um programa que leia um inteiro n�o negativo n e imprima 
a soma dos n primeiros n�meros primos
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, divisores=0, soma=0, cont=0;

    printf("\nSoma dos n primeiros n�meros primos");
    printf("\n===================================");
    do
    {
        printf("\nDigite um n�mero inteiro n�o negativo:\t");
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
            printf("\nO n�mero %d � primo!", i);
            soma+=i;
            cont++;
        }
        divisores=0;
    }
    printf("\nA soma dos %d n�meros primos menor ou igual a %d � %d", cont, num, soma);

    printf("\n");
    return 0;
}
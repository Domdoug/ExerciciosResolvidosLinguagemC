/*
Faça um programa que receba um número inteiro maior do que 1 e verifique
se o número fornecido é primo ou não.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, divisores=0;

    printf("\nVerifique se o número fornecido é primo ou não");
    printf("\n==============================================");
    do
    {
        printf("\nDigite um número inteiro maior que 1:\t");
        scanf("%d", &num);
    } while (num<=1);

    //processamento
    for (int i = 1; i <= num; i++)
    {
        if (num%i==0)
        {
            divisores++;
        }
    }

    if (divisores==2)
    {
        printf("\nO número %d é primo!", num);
    }
    else
    {
        printf("\nO número %d não é primo!", num);
    }
    printf("\n");
    return 0;
}

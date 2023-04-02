/*
Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número, com exceção dele próprio. Ex.: a soma dos divisores do número 66 é
1 + 2 + 3 + 6 + 11 + 22 + 33 = 78
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, soma=0;
    do
    {
        printf("\nLeia um número inteiro positivo:\t");
        scanf("%d",&num);
    } while (num<=0);

    for (int i = 1; i < num; i++)
    {
        if (num%i==0)
        {
            soma+=i;
        }
    }

    printf("\nA soma dos divisores é %d\n:", soma);
    
    return 0;
}

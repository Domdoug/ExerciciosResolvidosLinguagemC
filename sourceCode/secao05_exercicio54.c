/*
Fa�a um programa que receba um n�mero inteiro maior do que 1 e verifique
se o n�mero fornecido � primo ou n�o.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, divisores=0;

    printf("\nVerifique se o n�mero fornecido � primo ou n�o");
    printf("\n==============================================");
    do
    {
        printf("\nDigite um n�mero inteiro maior que 1:\t");
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
        printf("\nO n�mero %d � primo!", num);
    }
    else
    {
        printf("\nO n�mero %d n�o � primo!", num);
    }
    printf("\n");
    return 0;
}

/*
Fa�a um programa que receba um n�mero inteiro e verifique se este n�mero � par ou impar
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num;
    printf("Digite um n�mero inteiro:\t");
    scanf("%d", &num);

    if (num % 2==0)
    {
        printf("\nO n�mero %d � par.\n", num);
    }
    else
    {
        printf("\nO n�mero %d � impar.\n", num);
    }
    
    return 0;
}

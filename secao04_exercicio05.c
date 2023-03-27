/*
Faça um programa que receba um número inteiro e verifique se este número é par ou impar
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num;
    printf("Digite um número inteiro:\t");
    scanf("%d", &num);

    if (num % 2==0)
    {
        printf("\nO número %d é par.\n", num);
    }
    else
    {
        printf("\nO número %d é impar.\n", num);
    }
    
    return 0;
}

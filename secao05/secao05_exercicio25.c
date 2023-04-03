/*
Fa�a um programa que some todos os n�meros naturais abaixo de 1000 que s�o
m�ltiplos de 3 ou 5
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int soma=0;

    for (int i = 1; i < 1000; i++)
    {
        if (i%3==0 || i%5==0)
        {
            soma+=i;
        }
        
    }
    
    printf("\nA soma dos n�meros naturais abaixo de 1000");
    printf("\nE m�ltiplos de 3 ou 5 �:%d \n", soma);

    return 0;
}

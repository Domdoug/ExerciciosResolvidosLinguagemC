/*
Fa�a um programa que calcule a diferen�a entre a soma dos quadrados dos primeiros
100 n�meros naturais e o quadrado da soma.
Ex. A soma dos quadrados dos dez primeiros n�meros naturais �:
1^2 + 2^2 +...+10^2 = 385
O quadrado da soma dos dez primeiros n�meros naturais �:
(1+2+3+4+5+....+10)^2 = 3025
A diferen�a entre a soma dos quadrados dos dez primeiros n�meros naturais e o 
quadrado da soma �: 3025-385 = 2640
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int s1=0, s2=0;

    for (int i = 1; i <= 100; i++)
    {
        s1 += i*i; // soma dos quadrados
        s2 += i;
    }
    s2 *= s2;
    //Sa�da
    printf("\nA soma dos quadrados dos 100 primeiros n�meros naturais � %d", s1);
    printf("\nO quadrado da soma dos 100 primeiros n�meros naturais � %d", s2);
    printf("\nA difen�a dos resultados anteriores � %d\n", s2-s1);
    return 0;
}

/*
Faça um programa que calcule a diferença entre a soma dos quadrados dos primeiros
100 números naturais e o quadrado da soma.
Ex. A soma dos quadrados dos dez primeiros números naturais é:
1^2 + 2^2 +...+10^2 = 385
O quadrado da soma dos dez primeiros números naturais é:
(1+2+3+4+5+....+10)^2 = 3025
A diferença entre a soma dos quadrados dos dez primeiros números naturais e o 
quadrado da soma é: 3025-385 = 2640
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
    //Saída
    printf("\nA soma dos quadrados dos 100 primeiros números naturais é %d", s1);
    printf("\nO quadrado da soma dos 100 primeiros números naturais é %d", s2);
    printf("\nA difença dos resultados anteriores é %d\n", s2-s1);
    return 0;
}

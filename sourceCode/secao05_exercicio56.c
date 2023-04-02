/*
Fa�a um programa que calcule a soma de todos os n�meros primos abaixo de 2 milh�es.
A simula��o de 2 milh�es � demorada
Algumas simula��es
A soma dos 303 n�meros primos menor ou igual a 2000 � 277.050
Tempo gasto: 0,021000 segundos
--------------------------------------------------
A soma dos 2262 n�meros primos menor ou igual a 20000 � 21.171.191
Tempo gasto: 0,632000 segundos
---------------------------------------------------
A soma dos 17984 n�meros primos menor ou igual a 200000 � 1.709.600.813
Tempo gasto: 62,539000 segundos
--------------------------------------------------------------------
A soma dos 148933 n�meros primos menor ou igual a 2000000 � 1.179.908.154 (soma errada)
Tempo gasto: 6777,159000 segundos = 1 hora, 52 minutos e 57 segundos.
-----------------------------
Em outro momento, utilizar: The sum of 1..N is always equal to (N / 2) * (N + 1)
*/

#include <stdio.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "");

    int num=20000, divisores=0, cont=0;
    long long unsigned soma=0;

    printf("\nSoma de todos os n�meros primos abaixo de 2 milh�es");
    printf("\n===================================================");
    clock_t tic = clock();

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
            soma+=i;
            cont++;
        }
        divisores=0;
    }
    clock_t tac = clock();
    double tempo_gasto = (double)(tac - tic) / CLOCKS_PER_SEC;

    printf("\nA soma dos %d n�meros primos menor ou igual a %d � %llu", cont, num, soma);
    printf("\nTempo gasto: %f segundos", tempo_gasto);
    printf("\n");
    //printf("\nO tamanho do inteiro em meu computador: %d bytes", sizeof(int));
    //printf("\nO tamanho do inteiro long em meu computador: %d bytes", sizeof(long));
    //printf("\nO tamanho do inteiro long unsigned em meu computador: %d bytes", sizeof(signed long int));
    //printf("\nA soma dos %d n�meros primos menor ou igual a %d � %I64u", cont, num, soma);
    
    return 0;
}
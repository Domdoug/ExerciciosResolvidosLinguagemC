/*
Faça um programa que possua um vetro denominado A que armazene 6 números inteiros.
O programa deve executar os seguintes passos:
a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
b) Armazene em uma variável inteira (simples) a soma entre os valores das posições
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
d) Mostre na tela cada valor do vetor A, um em cada linha.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int A[6]; //0, 1, 2, 3, 4, 5 => total de 6 números
    // item a)
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;
    int soma;

    //item b)
    soma = A[0] + A[1] + A[5];
    printf("\nA soma dos valores é: %d\n", soma);

    //item c)
    A[3] = 100;

    for (int i = 0; i <= 5; i++)
    {
        printf("%d\n", A[i]);
    }
   
    return 0;
}

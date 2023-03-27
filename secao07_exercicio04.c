/*
Faça um programa que leia um vetor de 8 posições e em seguida, leia também dois valores X e Y
quaisquer correspondentes a duas posições no vetor. Ao final, seu programa deverá escrever
a soma dos valores encontrados nas respectivas posições X e Y.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    const int limMax = 7;
    int A[limMax]; //0, 1, 2,...7 posições
    int X, Y; // posições do vetor: 0 a 7
    int cont=0;


    printf("Ler 8 números para armazenar em um vetor\n");
    do
    {
        printf("Digite o %d º número: ", cont+1);
        scanf("%d", &A[cont]);

        cont++;
    } while (cont <= limMax);

    printf("\nDigite duas posições (0 a 7) do vetor: ");
    scanf("%d%d", &X, &Y);

    printf("\nA soma dos dois valores escolhidos nas respectivas posições X[%d] e Y[%d] é: %d", X, Y, A[X]+A[Y]);
    printf("\n");

    return 0;
}

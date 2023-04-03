/*
Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor,
o maior elemento e a posição que ele se encontra
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    const int limMax = 9;
    int A[limMax]; //0, 1, 2,...9 = 10 posições
    int cont=0;
    int maior, posicao;

    printf("\nLer %d números para armazenar em um vetor\n", limMax+1);
    do
    {
        printf("Digite a posição %d o vetor de números: ", cont);
        scanf("%d", &A[cont]);

        cont++;
    } while (cont <= limMax);

    for (int i = 0; i <= limMax; i++)
    {
        if (i==0)
        {
            maior=A[i];
        }
        
        if (A[i]>maior)
        {
            maior = A[i];
            posicao = i;
        }
        printf("%d ", A[i]);
        
    }

    printf("\nO vetor digitado tem como maior valor %d e sua posição é: %d", maior, posicao);
    printf("\n");

    return 0;
}

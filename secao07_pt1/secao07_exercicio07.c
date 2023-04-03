/*
Escreva um programa que leia 10 n�meros inteiros e os armazene em um vetor. Imprima o vetor,
o maior elemento e a posi��o que ele se encontra
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    const int limMax = 9;
    int A[limMax]; //0, 1, 2,...9 = 10 posi��es
    int cont=0;
    int maior, posicao;

    printf("\nLer %d n�meros para armazenar em um vetor\n", limMax+1);
    do
    {
        printf("Digite a posi��o %d o vetor de n�meros: ", cont);
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

    printf("\nO vetor digitado tem como maior valor %d e sua posi��o �: %d", maior, posicao);
    printf("\n");

    return 0;
}

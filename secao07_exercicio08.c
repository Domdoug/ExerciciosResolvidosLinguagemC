//Crie um programa que lê 6 valores inteiros e em seguida, mostre na tela os valores lidos na ordem inversa

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    const int limMax = 5;
    int A[limMax], B[limMax]; //0, 1, 2,...5 = 6 posições
    int cont=0;
    
    printf("\nLer %d números para armazenar em um vetor\n", limMax+1);
    do
    {
        printf("Digite a posição %d do vetor de números de %d: ", cont, limMax+1);
        scanf("%d", &A[cont]);

        cont++;
    } while (cont <= limMax);
    //Ordem que foi digitado
    printf("\nO vetor digitado, na ordem digitada é:");
    for (int i = 0; i <= limMax; i++)
    {
        printf("%d ", A[i]);
        B[limMax-i] = A[i];
    }

    printf("\nO vetor digitado, na ordem invertida é:");
    for (int i = 0; i <= limMax; i++)
    {
        printf("%d ", B[i]);
    }

    printf("\n");

    return 0;
}
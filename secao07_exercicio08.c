//Crie um programa que l� 6 valores inteiros e em seguida, mostre na tela os valores lidos na ordem inversa

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    const int limMax = 5;
    int A[limMax], B[limMax]; //0, 1, 2,...5 = 6 posi��es
    int cont=0;
    
    printf("\nLer %d n�meros para armazenar em um vetor\n", limMax+1);
    do
    {
        printf("Digite a posi��o %d do vetor de n�meros de %d: ", cont, limMax+1);
        scanf("%d", &A[cont]);

        cont++;
    } while (cont <= limMax);
    //Ordem que foi digitado
    printf("\nO vetor digitado, na ordem digitada �:");
    for (int i = 0; i <= limMax; i++)
    {
        printf("%d ", A[i]);
        B[limMax-i] = A[i];
    }

    printf("\nO vetor digitado, na ordem invertida �:");
    for (int i = 0; i <= limMax; i++)
    {
        printf("%d ", B[i]);
    }

    printf("\n");

    return 0;
}
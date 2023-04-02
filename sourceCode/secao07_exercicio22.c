/*
Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo
nas posições pares, os valores do primeiro e nas posições ímpares, os valores do segundo.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h> //para função time()
#include <stdlib.h> //funções rand() e srand()

#define limSup 50   //intervalo de valores, para o sorteio.
# define posicoes 10

int main()
{
    setlocale(LC_ALL, "");

    int A[posicoes], B[posicoes], C[posicoes];
    //int cont=0;
    //faz com que os números sejam pseudo aleatórios. Inicializador do gerador de números aleatórios. 
    srand((unsigned) time(NULL)); 
    //VETOR A, GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
        A[i] = rand() % limSup; /* gera número entre 0 e limite superior do intervalo */
    //VETOR B, GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
        B[i] = rand() % limSup;

    for (int i = 0; i < posicoes; i++)
    {   //Pares, valores de A. Ímpares, valores de B.
        if (i%2==0)
            C[i] = A[i];
        else
            C[i] = B[i];
    }

    printf("\nVetor C: Posições pares, com os valores do primeiro e nas posições ímpares, com os valores do segundo.\n");
    for (int i = 0; i < posicoes; i++)
    {
        printf("%s(%d) = %d || ", "A", i, A[i]);
        printf("%s(%d) = %d || ", "B", i, B[i]);
        printf("%s(%d) = %d || ", "C", i, C[i]);
        printf("\n");
    }
    printf("\n");
    return 0;

}
// Faça um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule C= A * B

// Faça um programa que leia uma matriz A de tamanho 3x3 e calcule B = A^2

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define limSup 10 //range máximo dos números aleatórios
//linhas e colunas definidas fora da int main, por ex, no lugar de int linhas, porque a declaração das matrizes com [linhas][colunas] dá erro
#define linhas 3    
#define colunas 3
int main()
{
    int matrizA[linhas][colunas], matrizB[linhas][colunas]={{0}}, matrizC[linhas][colunas]={{0}};
    int i, j, k;

    srand((unsigned) time(NULL));

    printf("\nGerada uma matriz A 3x3 aleatoriamente");
    printf("\n====================================\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            matrizA[i][j] = rand() % limSup +1; //aleatorios entre 1 e 10
    }
    printf("\n\t Matriz A\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            printf("\t %d", matrizA[i][j]);
        printf("\n");
    }

    printf("\nGerada uma matriz B 3x3 aleatoriamente");
    printf("\n====================================\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            matrizB[i][j] = rand() % limSup +1; //aleatorios entre 1 e 10
    }
    printf("\n\t Matriz B\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            printf("\t %d", matrizB[i][j]);
        printf("\n");
    }

    //Matriz B. B=A^2. 
    //B[0,0] = 
    // 1º elemento da 1ª linha * 1º elemento da 1ª coluna + 
    // 2º elemento da 1ª linha * 2º elemento da 1ª coluna +
    // 3º elemento da 1ª linha * 3º elemento da 1ª coluna
    //C[0,0] = A[0,0]*B[0,0] + A[0][1]*B[1][0] + A[0][2]*B[2][0]
    //C[0,1] = A[0,0]*B[0,1] + A[0][1]*B[1][1] + A[0][2]*B[2][1]
    //C[0,2] = A[0,0]*B[0,2] + A[0][1]*B[1][2] + A[0][2]*B[2][2]

    //C[1,0] = A[1,0]*B[0,0] + A[1][1]*B[1][0] + A[1][2]*B[2][0]
    //C[1,1] = A[1,0]*B[0,1] + A[1][1]*B[1][1] + A[1][2]*B[2][1]
    //....
    
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            for (k = 0; k < colunas; k++)   //tanto faz linhas ou colunas
                matrizC[i][j] += matrizA[i][k]*matrizB[k][j];
        }

    }
    printf("\n\t Matriz C resultante AxB:\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            printf("\t %d", matrizC[i][j]);

        printf("\n");
    }
    
    return 0;
}
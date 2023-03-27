/*
Leia duas matrizes 4x4 e escreva uma terceira com os maiores valores de cada posição
das matrizes lidas.
*/


#include <stdio.h>
#include <time.h>   //para função time()
#include <stdlib.h> //funções rand() e srand()
#include <locale.h>

#define limSup 50

int main()
{
    setlocale(LC_ALL, "");
    int linhas=4, colunas=4;
    int A[linhas][colunas], B[linhas][colunas], C[linhas][colunas];
    int i, j;

    //faz com que os números sejam pseudo aleatórios. 
    //Inicializador do gerador de números aleatórios. 
    srand((unsigned) time(NULL));

    printf("\nGerada duas matrizes A e B 4 x 4 aleatoriamente");
    printf("\n=============================================\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            A[i][j] = rand() % limSup + 1;
            B[i][j] = rand() % limSup + 1;
            //printf("matriz[%d][%d]=%d\n", (i+1), (j+1), A[i][j]);
        }
    }
    printf("\nNa forma matricial\n");
    printf("\n\t Matriz A\n");

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            printf("\t %d", A[i][j]);
        printf("\n");
    }
    
    printf("\n\t Matriz B\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            printf("\t %d", B[i][j]);
        printf("\n");
    }

    //Matriz resultante dos maiores elementos das matrizes A e B
    printf("\n\t Matriz C\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            if (A[i][j]>B[i][j])
                C[i][j] = A[i][j];
            else
                C[i][j] = B[i][j];

            printf("\t %d", C[i][j]);
        }
        printf("\n");
    }    

    printf("\n");

    return 0;
}

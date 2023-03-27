/*
Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os
demais elementos. Escreva ao final a matriz obtida.
*/

#include <stdio.h>

int main()
{
    int linhas=5, colunas=5;
    int matriz[linhas][colunas];
    int i, j;

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            if (i==j)
                matriz[i][j]=1;
            else
                matriz[i][j]=0;
        }
    }

    //imprimir matriz
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            printf("\t %d", matriz[i][j]);
        
        printf("\n");
    }
    printf("\n");

    return 0;
}


/*
Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da linha
e da coluna de cada elemento. Em seguida, imprima na tela a matriz.
*/

#include <stdio.h>

int main()
{
    int linhas=4, colunas=4;
    int matriz[linhas][colunas];
    int i, j;

    for (i = 0; i < linhas; i++)
        for (j = 0; j < colunas; j++)
            matriz[i][j] = i*j;

    //matriz 4 x 4 com o produto do valor da linha e da coluna de cada elemento
    printf("\nMatriz 4 x 4 com o produto do valor da linha e da coluna de cada elemento\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            printf("\t %d", matriz[i][j]);
        printf("\n");
    }
    printf("\n");
    
    return 0;
}

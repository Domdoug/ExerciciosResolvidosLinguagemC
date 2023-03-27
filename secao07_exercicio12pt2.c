//Leia uma matriiz de 3 x 3 elementos. Calcule e imprima a sua transposta.

/*
Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na
diagonal secundária.
*/

#include <stdio.h>
#include <time.h>   //para função time()
#include <stdlib.h> //funções rand() e srand()

#define limSup 50

int main()
{
    int linhas=3, colunas=3;
    int matriz[linhas][colunas], matriz_t[linhas][colunas];
    int i, j;
    
    //faz com que os números sejam pseudo aleatórios. 
    //Inicializador do gerador de números aleatórios. 
    srand((unsigned) time(NULL));

    printf("\nGerada uma matriz 3 x 3 aleatoriamente");
    printf("\n====================================\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            matriz[i][j] = rand() % limSup + 1;
    }
    printf("\n\t Na forma matricial\n");

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            printf("\t %d", matriz[i][j]);
        printf("\n");
    }
    //Matriz transposta
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            matriz_t[i][j] = matriz[j][i];
    }

    //Imprimir a matriz transposta. 
    printf("\nA matriz transposta:\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            printf("\t %d", matriz_t[i][j]);
        printf("\n");
    }    

    printf("\n");

    return 0;
}
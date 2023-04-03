/*
Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na
diagonal secundária.
*/

#include <stdio.h>
#include <time.h>   //para função time()
#include <stdlib.h> //funções rand() e srand()
#include <locale.h>

#define limSup 50

int main()
{
    setlocale(LC_ALL, "");
    int linhas=3, colunas=3;
    int matriz[linhas][colunas];
    int i, j;
    int soma=0;

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
    //Calcular a soma dos elementos estao da diagonal secundária. 
    // [2][0] +[1][1] +[0][2]. Obs.: A soma dos índices é igual a 2
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            if ((i+j)==2)
                soma+=matriz[i][j];
    }
    printf("\nSoma dos elementos que estao na diagonal secundária = %d", soma);
    printf("\n");

    return 0;
}
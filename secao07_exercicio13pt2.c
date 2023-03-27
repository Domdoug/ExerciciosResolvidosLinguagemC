/*
Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que
transforme a matriz gerada numa matriz triangular inferior, ou seja, atribuindo
zero a todos os elementos acima da diagonal principal. Imprima a matriz original
e a matriz transformada.
*/


#include <stdio.h>
#include <time.h>   //para função time()
#include <stdlib.h> //funções rand() e srand()

#define limSup 20

int main()
{
    int linhas=4, colunas=4;
    int matriz[linhas][colunas], matriz_triang[linhas][colunas];
    //int matriz_triang[linhas][colunas]={ [0][0]=0 };
    //memset(matriz_triang, 0, sizeof(matriz_triang));
    int i, j;
    
    //faz com que os números sejam pseudo aleatórios. 
    //Inicializador do gerador de números aleatórios. 
    srand((unsigned) time(NULL));

    printf("\nGerada uma matriz 4 x 4 aleatoriamente entre [1, 20]");
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
    //Matriz transformada triangular
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            if(i<j)
                matriz_triang[i][j] = 0;
            else
                matriz_triang[i][j] = matriz[i][j];
        }
    }

    //Imprimir a matriz transformada. 
    printf("\nMatriz transformada:\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            printf("\t %d", matriz_triang[i][j]);
        printf("\n");
    }    

    printf("\n");

    return 0;
}
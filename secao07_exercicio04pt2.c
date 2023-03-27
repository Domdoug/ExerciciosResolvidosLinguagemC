/*
Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna)
do maior valor.
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
    int matriz[linhas][colunas];
    int i, j;
    int maior, maiorPosLinha, maiorPosColuna;

    //faz com que os números sejam pseudo aleatórios. 
    //Inicializador do gerador de números aleatórios. 
    srand((unsigned) time(NULL));

    printf("\nGerada uma matriz 4 x 4 aleatoriamente");
    printf("\n====================================\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            matriz[i][j] = rand() % limSup + 1;
            printf("matriz[%d][%d]=%d\n", (i+1), (j+1), matriz[i][j]);
        }
    }
    printf("\n\t Na forma matricial\n");

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("\t %d", matriz[i][j]);
        }
        printf("\n");
    }

    //Encontrar o maior valor

    maior=matriz[0][0]; //inicializa com a primeira linha e coluna da matriz

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            if (matriz[i][j]>maior)
            {
                maior=matriz[i][j];
                maiorPosLinha = i+1;    //i+1, pois a matriz começa com [0][0]
                maiorPosColuna = j+1;
            }
        }
        
    }

    //Maior elemento e sua posição no vetor
    printf("\n%s %d\n", "O maior elemento é ", maior);
    printf("%s linha[%d] coluna[%d]", "Localização na matriz:", maiorPosLinha, maiorPosColuna);

    printf("\n");

    return 0;
}

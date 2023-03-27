/*
Na matriz de 20x20 abaixo, quatro números ao longo de uma linha diagonal
foram marcadas em negrito. O produto desses números é 26*63*78*14 = 1788696.

08 02 22 97 38 15 00 40 00 75 04 05 07 78 52 12 50 77 91 08
49 49 99 40 17 81 18 57 60 87 17 40 98 43 69 48 04 56 62 00
81 49 31 73 55 79 14 29 93 71 40 67 53 88 30 03 49 13 36 65
52 70 95 23 04 60 11 42 69 24 68 56 01 32 56 71 37 02 36 91
22 31 16 71 51 67 63 89 41 92 36 54 22 40 40 28 66 33 13 80
24 47 32 60 99 03 45 02 44 75 33 53 78 36 84 20 35 17 12 50
32 98 81 28 64 23 67 10 26 38 40 67 59 54 70 66 18 38 64 70
67 26 20 68 02 62 12 20 95 63 94 39 63 08 40 91 66 49 94 21
24 55 58 05 66 73 99 26 97 17 78 78 96 83 14 88 34 89 63 72
21 36 23 09 75 00 76 44 20 45 35 14 00 61 33 97 34 31 33 95
78 17 53 28 22 75 31 67 15 94 03 80 04 62 16 14 09 53 56 92
16 39 05 42 96 35 31 47 55 58 88 24 00 17 54 24 36 29 85 57
86 56 00 48 35 71 89 07 05 44 44 37 44 60 21 58 51 54 17 58
19 80 81 68 05 94 47 69 28 73 92 13 86 52 17 77 04 89 55 40
04 52 08 83 97 35 99 16 07 97 57 32 16 26 26 79 33 27 98 66
88 36 68 87 57 62 20 72 03 46 33 67 46 55 12 32 63 93 53 69
04 42 16 73 38 25 39 11 24 94 72 18 08 46 29 32 40 62 76 36
20 69 36 41 72 30 23 88 34 62 99 69 82 67 59 85 74 04 36 16
20 73 35 29 78 31 90 01 74 31 49 71 48 86 81 16 23 57 05 54
01 70 54 71 83 51 54 69 16 92 33 48 61 43 52 01 89 19 67 48

Qual é o maior produto de quatro números adjacentes em qualquer direção (cima,
baixo, esquerda, direita ou na diagonal) na matriz de 20x20?

//this format also stores data in the array but results in a loss of readability
int num[2][4]={4,6,8,10,3,5,7,9};

int num[3][3]={{25,10,5}, //row0
               {4,6,13},  //row1
               {45,90,78} //row2
              };
*/
#include <stdio.h>
#include <locale.h>
#define linhas 20
#define colunas 20


int main()
{
    setlocale(LC_ALL,"");
    int i,j, k;
    unsigned long linPrd[linhas][colunas-3]={{1}}; //produto, o inicio acumulador é 1
    unsigned long colPrd[linhas-3][colunas]={{1}};
    unsigned long diagPrd[linhas-3][colunas-3]={{1}};

    unsigned long maiorLinPrd=0;
    unsigned long maiorColPrd=0;
    unsigned long maiorDiagPrd=0;
    int pLinhaLin, pColunaLin, pLinhaCol, pColunaCol, pLinhaDiag, pColunaDiag; //posição do elemento da linha e da coluna

    int matriz[linhas][colunas]={{8,2,22,97,38,15,0,40,0,75,4,5,7,78,52,12,50,77,91,8},
                                {49,49,99,40,17,81,18,57,60,87,17,40,98,43,69,48,4,56,62,0},
                                {81,49,31,73,55,79,14,29,93,71,40,67,53,88,30,3,49,13,36,65},
                                {52,70,95,23,4,60,11,42,69,24,68,56,1,32,56,71,37,2,36,91},
                                {22,31,16,71,51,67,63,89,41,92,36,54,22,40,40,28,66,33,13,80},
                                {24,47,32,60,99,3,45,2,44,75,33,53,78,36,84,20,35,17,12,50},
                                {32,98,81,28,64,23,67,10,26,38,40,67,59,54,70,66,18,38,64,70},
                                {67,26,20,68,2,62,12,20,95,63,94,39,63,8,40,91,66,49,94,21},
                                {24,55,58,5,66,73,99,26,97,17,78,78,96,83,14,88,34,89,63,72},
                                {21,36,23,9,75,0,76,44,20,45,35,14,0,61,33,97,34,31,33,95},
                                {78,17,53,28,22,75,31,67,15,94,3,80,4,62,16,14,9,53,56,92},
                                {16,39,5,42,96,35,31,47,55,58,88,24,0,17,54,24,36,29,85,57},
                                {86,56,0,48,35,71,89,7,5,44,44,37,44,60,21,58,51,54,17,58},
                                {19,80,81,68,5,94,47,69,28,73,92,13,86,52,17,77,4,89,55,40},
                                {4,52,8,83,97,35,99,16,7,97,57,32,16,26,26,79,33,27,98,66},
                                {88,36,68,87,57,62,20,72,3,46,33,67,46,55,12,32,63,93,53,69},
                                {4,42,16,73,38,25,39,11,24,94,72,18,8,46,29,32,40,62,76,36},
                                {20,69,36,41,72,30,23,88,34,62,99,69,82,67,59,85,74,4,36,16},
                                {20,73,35,29,78,31,90,1,74,31,49,71,48,86,81,16,23,57,5,54},
                                {1,70,54,71,83,51,54,69,16,92,33,48,61,43,52,1,89,19,67,48}
};

    printf("\n");
    printf("Matriz dos dados para conferencia:\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
    //ROTINA ADJACENTES:
    //OPERAÇÃO LINHA A LINHA
    //um passo: em cada rodadad, linha, coluna, diagonal, encontrar o maior valor mutiplicado em cada um e só depois comparar os maiores
    //Primeiro, preenche o vetor linPrd com 1. Não consegui inicializar com 1, pois int linPrd[linhas][colunas-4]={{1}}, coloca um somente no inicio 
    //Inicializa o vetor das linhas linPrd
    for (i = 0; i < linhas; i++)
        for (j = 0; j < colunas-3; j++)
            linPrd[i][j]=1;
        
    //Produtório
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas-3; j++) //fazer coluna-3: A multiplicação das 4 adiante será na rotina k
        {
            for (k = j; k < j+4; k++)
                linPrd[i][j]*=matriz[i][k];
            //Verificar o maior produtório nas linhas        
            if (linPrd[i][j]>maiorLinPrd)
            {
                maiorLinPrd=linPrd[i][j];
                pLinhaLin = i;
                pColunaLin = j;
            }            
        }
    }
    //Checagem dos resultados
    //for (i = 0; i < linhas; i++)
    //    for (j = 0; j < colunas-3; j++)
    //        printf("\n%lu", linPrd[i][j]);

    printf("\nMaior produtório nas linhas: %lu", maiorLinPrd);

    //=============================================
    //OPERAÇÃO COLUNA A COLUNA
    //colocar valor 1 em todo o vetor
    for (j = 0; j < colunas; j++)
        for (i = 0; i < linhas-3; i++) 
            colPrd[i][j]=1;
        
    
    for (j = 0; j < colunas; j++)
    {
        for (i = 0; i < linhas-3; i++) //fazer coluna-3: A multiplicação das 4 adiante será na rotina k
        {
            for (k = i; k < i+4; k++)
                colPrd[i][j]*=matriz[k][j];

            if (colPrd[i][j]>maiorColPrd)
            {
                maiorColPrd=colPrd[i][j];
                pLinhaCol=i;
                pColunaCol=j;
            }            
            //printf("\n%lu", colPrd[i][j]);
        }
    }
    //Checagem dos resultados
    //for (j = 0; j < colunas; j++)
    //    for (i = 0; i < linhas-3; i++)
    //        printf("\n%lu", colPrd[i][j]);
    
    printf("\nMaior produtório nas colunas: %lu", maiorColPrd);

    //======================================    
    //OPERAÇÃO NA DIAGONAL
    
    for (i = 0; i < linhas-3; i++)
        diagPrd[i][i]=1;
        
    
    for (i = 0; i < linhas-3; i++)
    {
        for (k = i; k < i+4; k++)
            diagPrd[i][i]*=matriz[k][k];

        if (diagPrd[i][i]>maiorDiagPrd)
        {
            maiorDiagPrd=diagPrd[i][i];
            pLinhaDiag=pColunaDiag=i;
        }        

        //printf("\n%lu", diagPrd[i][i]);

    }

    //Checagem dos resultados
    //for (i = 0; i < linhas; i++)
    //    for (j = 0; j < colunas-3; j++)
    //        printf("\n%lu", diagPrd[i][j]);

    printf("\nMaior produtório nas diagonais: %lu", maiorDiagPrd);

    //Escolhe o maior de todos
    if (maiorLinPrd>=maiorColPrd && maiorLinPrd>=maiorDiagPrd)
    {
        printf("\n\nO maior produtório é da linha, posição inicial i=%d, j=%d", pLinhaLin, pColunaLin);
        printf("\nElementos %d, %d, %d e %d totalizando: %lu",
            matriz[pLinhaLin][pColunaLin],
            matriz[pLinhaLin][pColunaLin+1],
            matriz[pLinhaLin][pColunaLin+2],
            matriz[pLinhaLin][pColunaLin+3],
            maiorLinPrd);
    }
    
    if (maiorColPrd>=maiorLinPrd && maiorColPrd>=maiorDiagPrd)
    {
        printf("\n\nO maior produtório é da coluna, posição inicial i=%d, j=%d", pLinhaCol, pColunaCol);
        printf("\nElementos %d, %d, %d e %d totalizando: %lu",
            matriz[pLinhaCol][pColunaCol],
            matriz[pLinhaCol+1][pColunaCol],
            matriz[pLinhaCol+2][pColunaCol],
            matriz[pLinhaCol+3][pColunaCol],
            maiorColPrd);
    }

    if (maiorDiagPrd>=maiorLinPrd && maiorDiagPrd>=maiorColPrd)
    {
        printf("\n\nO maior produtório é da diagonal, posição inicial i=%d, j=%d", pLinhaDiag, pColunaDiag);
        printf("\nElementos %d, %d, %d e %d totalizando: %lu",
            matriz[pLinhaDiag][pColunaDiag],
            matriz[pLinhaDiag+1][pColunaDiag+1],
            matriz[pLinhaDiag+2][pColunaDiag+2],
            matriz[pLinhaDiag+3][pColunaDiag+3],
            maiorDiagPrd);        
    }

    printf("\n");

    //Somente para conferencia das posições onde ocorreu o maior produtório na linha e na diagonal
    printf("\n===============Curiosidades===================");
    printf("\n\nMaior produtório da linha, posição inicial i=%d, j=%d", pLinhaLin, pColunaLin);
    printf("\nElementos %d, %d, %d e %d totalizando: %lu",
        matriz[pLinhaLin][pColunaLin],
        matriz[pLinhaLin][pColunaLin+1],
        matriz[pLinhaLin][pColunaLin+2],
        matriz[pLinhaLin][pColunaLin+3],
        maiorLinPrd);    

    printf("\n\nMaior produtório da diagonal, posição inicial i=%d, j=%d", pLinhaDiag, pColunaDiag);
    printf("\nElementos %d, %d, %d e %d totalizando: %lu",
        matriz[pLinhaDiag][pColunaDiag],
        matriz[pLinhaDiag+1][pColunaDiag+1],
        matriz[pLinhaDiag+2][pColunaDiag+2],
        matriz[pLinhaDiag+3][pColunaDiag+3],
        maiorDiagPrd);

    printf("\n");
    return 0;
}
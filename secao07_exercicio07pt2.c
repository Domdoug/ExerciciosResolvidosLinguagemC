/*
Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são da forma:
A[i][j] = 2i + 7j - 2 se i<j;
A[i][j] = 3i^2 - 1 se i=j;
A[i][j] = 4i^3 - 5j^2 + 1 se i>j;

Resultado:
         Na forma matricial 10 x 10
         -1      5       12      19      26      33      40      47      54      61
         5       2       14      21      28      35      42      49      56      63
         33      28      11      23      30      37      44      51      58      65
         109     104     89      26      32      39      46      53      60      67
         257     252     237     212     47      41      48      55      62      69
         501     496     481     456     421     73      50      57      64      71
         865     860     845     820     785     740     107     59      66      73
         1373    1368    1353    1328    1293    1248    1193    146     68      75
         2049    2044    2029    2004    1969    1924    1869    1804    191     77
         2917    2912    2897    2872    2837    2792    2737    2672    2597    242

Um caso estranho foi que na posição [5][5], o valor calculado foi de 73, porém o valor
real é 74. 3*5^2-1 = 3*25-1=75-1=74. O valor é corrigido se definir float matriz
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int linhas=10, colunas=10;
    float matriz[linhas][colunas];
    int i, j;

    printf("\nGerada uma matriz 10 x 10");
    printf("\n=======================\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            if (i<j)
                matriz[i][j] = 2*i + 7*j - 2; //2i + 7j - 2
            else if (i==j)
                matriz[i][j] = 3*pow((float) i, 2.0) - 1; //3i^2 - 1
            else
                matriz[i][j] = 4*pow((float) i, 3.0) - 5*pow((float) j, 2.0) + 1; //A[i][j] = 4i^3 - 5j^2 + 1
        }
    }
    printf("\n\t Na forma matricial 10 x 10\n");

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            printf("\t %.0f", matriz[i][j]);
        printf("\n");
    }
    printf("\n");
}

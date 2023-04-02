/*
Leia uma matriz 5 x 5. Leia, também, um valor X. O programa deverá fazer uma
busca desse valor na matriz e, ao final, escrever a localização (linha e coluna)
ou uma mensagem de "não encontrado"
Vou escrever um código em que a matriz é gerada aleatoriamente, porém o número
X para a checagem será digitado pelo usuário. A matriz ainda não estará impressa
quando da digitação do valor X. Será tipo uma adivinhação se o número foi encontrado. 
*/

#include <stdio.h>
#include <time.h>       //para função time()
#include <stdlib.h>     //funções rand() e srand()
#include <locale.h>

#define limSup 50  //valor máximo para o gerador de números aleatórios

int main()
{
    setlocale(LC_ALL, "");
    int linhas=5, colunas=5;
    int matriz[linhas][colunas];
    int i, j;
    int num, encontrou=0;

        //Inicializador do gerador de números aleatórios. 
    srand((unsigned) time(NULL));

    printf("\nGerada uma matriz 5 x 5 aleatoriamente");
    printf("\n====================================\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            matriz[i][j] = rand() % limSup + 1;
            //para não exibir a matriz por hora, desativei o print da matriz
            //printf("matriz[%d][%d]=%d\n", (i+1), (j+1), matriz[i][j]);  
        }
    }

    //Entrada manual
    do
    {
        printf("\nDigite um número entre 1 e 50: ");
        scanf("%d", &num);
    } while (num < 1 || num > 50);

    printf("\n\t Na forma matricial\n");

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("\t %d", matriz[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            if (num==matriz[i][j])
            {
                printf("\nO número digitado %d está na matriz aleatória na posição [%d][%d]", num, i+1, j+1);
                encontrou=1;
            }
        }
    }
    if (encontrou==0)
        printf("\nNúmero %d não encontrado na matriz aleatória", num);
    
    printf("\n");

    return 0;
}

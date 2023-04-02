//Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui

#include <stdio.h>
#include <locale.h>
#include <time.h> //para função time()
#include <stdlib.h> //funções rand() e srand()

#define limSup 20   //limite máximo para gerar números aleatórios
#define tamanho_aux 16  //Para um vetor dos elementos da matriz 4x4 = 16

int main()
{
    setlocale(LC_ALL, ""); //reconhecer acentos da língua português.

    int linhas = 4, colunas = 4;
    int matriz[linhas][colunas];
    int aux[tamanho_aux]={0}, aux2[tamanho_aux]={0};    //16 = linhas * colunas = 4*4=16
    int i, j, k;
    int trono, cont=0;
    int repetido, contRept=0;

    //faz com que os números sejam pseudo aleatórios. Inicializador do gerador de números aleatórios. 
    srand((unsigned) time(NULL));

    printf("\nLeia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui");
    printf("\n=============================================================\n");
    //Elementos da matriz gerados randomicamente
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            //printf("matriz[%d][%d]=", i, j);
            // scanf("%d",&matriz[i][j]); //para entrada manual
            
            matriz[i][j] = rand() % limSup+1; //gera número entre 1 e limite superior do intervalo
            printf("matriz[%d][%d]=%d\n", (i+1), (j+1), matriz[i][j]);
        }
    }

    printf("\n\t Valores da matriz gerada aleatoriamente \n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            printf("\t %d", matriz[i][j]);

        printf("\n");
    }

    printf("\n\t Os valores da matriz, em ordem crescente, maiores do que 10 são, sem repetições:\n");

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            if (matriz[i][j]>10)
            {
                //printf("\t %d", matriz[i][j]);
                aux[cont] = matriz[i][j];
                cont++;
            }
        }
    }

    // Ordenando o vetor de valores maior do que 10 em ordem crescente
    for (i = 0; i < cont; i++)  //cont = contagem dos valores maiores que 10
        for (j=0; j<i; j++)
        {
            if (aux[j]>aux[i])
            {
                trono = aux[j];
                aux[j] = aux[i];
                aux[i] = trono;
            }
        }
    
    //Excluir as demais posições do vetor aux que não foram preenchidos
        

    //Excluir valores repetidos
    for (i = 0; i <= cont; i++)
    {
        for (j = i+1; j <= cont; j++)
        {
            repetido=0;
            for (k = 0; k <= i; k++)
            {
                if (aux2[k]==aux[i])
                {
                    repetido=1;
                    contRept+=1;
                }
            }
            if (repetido==0) //ou seja, não é repetido
                aux2[i] = aux[i];
        }
    }
    
    //impressão final
    for (i=0; i<tamanho_aux; i++)
    {
        if (aux2[i]!=0)
            printf ("\t %d", aux2[i]);
    }
    printf("\n");
    return 0;
}
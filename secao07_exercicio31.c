/*
Fa�a um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a uni�o entre
os 2 vetores anteriores, ou seja, que cont�m os n�meros dos dois vetores. N�o deve conter
n�meros repetidos.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h> //para fun��o time()
#include <stdlib.h> //fun��es rand() e srand()

#define limSup 50   //intervalo de valores
# define posicoes 10
# define posicoes2 20

int main()
{
    setlocale(LC_ALL, "");

    int v1[posicoes], v2[posicoes]; //v ser� o vetor de interse��o
    int v[posicoes2]={0}, aux[posicoes2]={0};
    int repetido, contRept=0;
    //faz com que os n�meros sejam pseudo aleat�rios. Inicializador do gerador de n�meros aleat�rios. 
    srand((unsigned) time(NULL));

    //VETOR v1 GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
    {
        v1[i] = rand() % limSup+1; /* gera n�mero entre 1 e limite superior do intervalo */
        v2[i] = rand() % limSup+1;
    }
    //UNI�O
    //carrega do primeiro vetor
    for (int i = 0; i < posicoes; i++)
        v[i]=v1[i];

    //carrega do segundo vetor
    for (int i = 0; i < posicoes; i++)
        v[i+posicoes]=v2[i];

    //impress�o
    for (int i = 0; i < posicoes; i++)
    {
        printf("%s(%d) = %d || ", "vetor v1", i, v1[i]);
        printf("%s(%d) = %d || ", "vetor v2", i, v2[i]);
        printf("\n");
    }
    printf("\n");

    printf("Vetor resultante da uni�o de valores de v1 e v2, sem repetir\n");
    for (int i = 0; i <= posicoes2; i++)
    {
        for (int j = i+1; j <= posicoes2; j++)
        {
            repetido=0;
            for (int k = 0; k <= i; k++)
            {
                if (aux[k]==v[i])
                {
                    repetido=1;
                    contRept+=1;
                }
            }
            if (repetido==0)
                aux[i] = v[i];
        }
    }
    
    //La�o para eliminar os �ndices correspondentes aos n�meros que n�o receberam valor.
    for (int i = 0; i < posicoes2; i++)
    {
        if (aux[i]!=0)
            printf("%s(%d) = %d\n", "vetor uni�o", i, aux[i]);
        
    }
    printf("\n");

    return 0;
}

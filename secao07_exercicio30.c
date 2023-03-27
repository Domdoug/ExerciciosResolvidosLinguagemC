/*
Fa�a um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a interse��o entre
os 2 vetores anteriores, ou seja, que cont�m apenas os n�meros que est�o em ambos os vetores.
N�o deve conter n�meros repetidos.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h> //para fun��o time()
#include <stdlib.h> //fun��es rand() e srand()

#define limSup 50   //intervalo de valores
# define posicoes 10

int main()
{
    setlocale(LC_ALL, "");

    int v[posicoes]={0}, v1[posicoes], v2[posicoes], aux[posicoes]={0}; //v ser� o vetor de interse��o
    int repetido, contRept=0;
    //faz com que os n�meros sejam pseudo aleat�rios. Inicializador do gerador de n�meros aleat�rios. 
    srand((unsigned) time(NULL));

    //VETOR v1 GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
    {
        v1[i] = rand() % limSup+1; /* gera n�mero entre 1 e limite superior do intervalo */
        v2[i] = rand() % limSup+1;
    }
    //INTERSECAO
    
    for (int i = 0; i < posicoes; i++)
    {
        for (int j = 0; j < posicoes; j++)
        {
            if (v1[i]==v2[j])
            {
                v[i]=v1[i];
            }
        }
    }

    for (int i = 0; i < posicoes; i++)
    {
        printf("%s(%d) = %d || ", "vetor v1", i, v1[i]);
        printf("%s(%d) = %d || ", "vetor v2", i, v2[i]);
        printf("\n");
    }
    printf("\n");

    printf("Vetor resultante de valores sem repetir\n");
    for (int i = 0; i <= posicoes; i++)
    {
        for (int j = i+1; j <= posicoes; j++)
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
    for (int i = 0; i < posicoes; i++)
    {
        if (aux[i]!=0)
            printf("%s(%d) = %d\n", "vetor interse��o", i, aux[i]);
        if (contRept==0)
            printf("Vetor interse��o vazio");
        
    }

    printf("\n");

    return 0;
}

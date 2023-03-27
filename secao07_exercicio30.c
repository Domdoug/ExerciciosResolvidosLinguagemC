/*
Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a interseção entre
os 2 vetores anteriores, ou seja, que contém apenas os números que estão em ambos os vetores.
Não deve conter números repetidos.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h> //para função time()
#include <stdlib.h> //funções rand() e srand()

#define limSup 50   //intervalo de valores
# define posicoes 10

int main()
{
    setlocale(LC_ALL, "");

    int v[posicoes]={0}, v1[posicoes], v2[posicoes], aux[posicoes]={0}; //v será o vetor de interseção
    int repetido, contRept=0;
    //faz com que os números sejam pseudo aleatórios. Inicializador do gerador de números aleatórios. 
    srand((unsigned) time(NULL));

    //VETOR v1 GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
    {
        v1[i] = rand() % limSup+1; /* gera número entre 1 e limite superior do intervalo */
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
    
    //Laço para eliminar os índices correspondentes aos números que não receberam valor.
    for (int i = 0; i < posicoes; i++)
    {
        if (aux[i]!=0)
            printf("%s(%d) = %d\n", "vetor interseção", i, aux[i]);
        if (contRept==0)
            printf("Vetor interseção vazio");
        
    }

    printf("\n");

    return 0;
}

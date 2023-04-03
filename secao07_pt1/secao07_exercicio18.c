/*
Faça um programa que leia um vetor de 10 números. Leia o número x. Conte os múltiplos de 
um númro inteiro x num vetor e mostre-os na tela.
*/


#include <stdio.h>
#include <locale.h>

#define limMax 10 // 10 posições

int main()
{
    setlocale(LC_ALL, "");

    //const int limMax = 9;
    int A[limMax], B[limMax]={0}, aux[limMax]={0}; //0, 1, 2,...9 = 10 posições
    int cont=0, escolhido, repetido;
    
    printf("\nLer %d números para armazenar em um vetor\n", limMax);
    do
    {
        printf("Digite a posição %d do vetor de números de %d: ", cont, limMax);
        scanf("%d", &A[cont]);

        cont++;
    } while (cont < limMax);

    //DIGITAR CÓDIGO DO NÚMERO A ESCOLHER
    printf("Digite um número x do vetor criado acima:\t");
    scanf("%d", &escolhido);

    
    printf("\nOs múltiplos do número escolhido %d do vetor são:", escolhido);
    cont=0;
    for (int i = 0; i < limMax; i++)
    {
        if (A[i]%escolhido==0)
        {
            B[i] = A[i];
            cont+=1;
        }

    }
    /*
    for (int i = 0; i < limMax; i++)
    {
        if (B[i]!=0)
        {
            printf("%d ", B[i]);
        }
        
    }
    */
    // Tratar números múltiplos repetidos do vetor.

    //printf("Vetor resultante de valores sem repetir\n");
    for (int i = 0; i < limMax; i++)
    {
        for (int j = i+1; j < limMax; j++)
        {
            repetido=0;
            for (int k = 0; k < i; k++)
            {
                if (aux[k]==B[i])
                {
                    repetido=1;
                }
                
            }
            if (repetido==0)
            {
                aux[i] = B[i];
            }

        }
    }
    for (int i = 0; i < limMax; i++)
    {
        if (aux[i]!=0)
        {
            printf("%d ", aux[i]);
        }
        
    }


    printf("\n");

    return 0;
}
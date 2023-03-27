/*
Fa�a um programa que leia um vetor de 10 n�meros. Leia o n�mero x. Conte os m�ltiplos de 
um n�mro inteiro x num vetor e mostre-os na tela.
*/


#include <stdio.h>
#include <locale.h>

#define limMax 10 // 10 posi��es

int main()
{
    setlocale(LC_ALL, "");

    //const int limMax = 9;
    int A[limMax], B[limMax]={0}, aux[limMax]={0}; //0, 1, 2,...9 = 10 posi��es
    int cont=0, escolhido, repetido;
    
    printf("\nLer %d n�meros para armazenar em um vetor\n", limMax);
    do
    {
        printf("Digite a posi��o %d do vetor de n�meros de %d: ", cont, limMax);
        scanf("%d", &A[cont]);

        cont++;
    } while (cont < limMax);

    //DIGITAR C�DIGO DO N�MERO A ESCOLHER
    printf("Digite um n�mero x do vetor criado acima:\t");
    scanf("%d", &escolhido);

    
    printf("\nOs m�ltiplos do n�mero escolhido %d do vetor s�o:", escolhido);
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
    // Tratar n�meros m�ltiplos repetidos do vetor.

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
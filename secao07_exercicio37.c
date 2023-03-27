/*
Considere um vetor A com 11 elementos, onde: A1 < A2 < ...< A6 > A7 > A8 > ... > A11,
ou seja, está ordenado em ordem crescente até o sexto elemento e a partir desse
elemento, está ordenado em ordem decrescente. Dado o vetor da questão anterior,
proponha um algorítmo para ordenar os elementos.
*/

#include <stdio.h>
#include <stdlib.h>
#define indice 11

int main()
{
    int A[indice] = {1, 4, 7, 9, 11, 15, 14, 8, 5, 3, 2}; //crescente e descrescente
    int aux;
    
    printf("Vetor com 11 elementos ordenado\n");

    //A[0] = 1, A[1] = 4, A[2] = 7, A[3] = 9, A[4] = 11, A[5] = 15; //crescente
    //A[6] = 14, A[7] = 8, A[8] = 5, A[9] = 3, A[10] = 2; //decrescente

    for (int i = 0; i < indice; i++)
        printf("A[%d]=%d\t", i, A[i]);
        //printf("%d\t", A[i]);

    // Ordenando o vetor X em ordem crescente
    for (int i=0; i<indice; ++i)
    {
        for (int j=0; j<indice; ++j)
        {
            if (A[j]>A[i])
            {
                aux = A[j];
                A[j] = A[i];
                A[i] = aux;
            }
        }
    }
    //imprimir
    printf("\n");
    for (int i = 0; i < indice; i++)
        printf("A[%d]=%d\t", i, A[i]);
        //printf("%d\t", A[i]);

    printf("\n");
    return 0;
}



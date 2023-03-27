/*
Leia um vetor com 10 números reais e ordene os elementos deste vetor e no final
escreva os elementos do vetor ordenado.
*/

#include <stdio.h>
#include <stdlib.h>
#define indice 10

int main()
{
    float X[indice], aux;
    printf("Digite o vetor X de 10 elementos\n");
    
    for (int i=0; i<indice; ++i)
    {
        printf("X[%d]: ", i);
        scanf("%f", &X[i]);
    }

    // Ordenando o vetor X em ordem crescente
    for (int i=0; i<indice; ++i)
    {
        for (int j=0; j<indice; ++j)
        {
            if (X[j]>X[i])
            {
                aux = X[j];
                X[j] = X[i];
                X[i] = aux;
            }
        }
    }
    //imprimir
    for (int i = 0; i < indice; i++)
        printf("X[%d] = %f\n", i, X[i]);

    return 0;
}



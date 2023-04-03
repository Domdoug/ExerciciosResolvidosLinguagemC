/*
Peça ao usuário para digitar dez valores númericos e ordene por ordem
crescente esses valores, guardando-os num vetor. Ordene o valor assim
que ele for digitado. Mostre ao final, na tela, os valores em ordem.
*/


#include <stdio.h>
#define indice 10

int main()
{
    int X[indice], aux;
    printf("Digite o vetor X de 10 elementos\n");
    
    for (int i=0; i<indice; i++)
    {
        printf("X[%d]: ", i);
        scanf("%d", &X[i]);

        // Ordenando o vetor X em ordem crescente

        for (int j=0; j<i; j++)
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
        printf("X[%d]=%d\t", i, X[i]);

    printf("\n");
    return 0;
}
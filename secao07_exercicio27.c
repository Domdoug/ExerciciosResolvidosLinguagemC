/*
Leia 10 números inteiros e armazene em um vetor. Em seguida, escreva os elementos que
são primos e suas respectivas posições no vetor.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h> //para função time()
#include <stdlib.h> //funções rand() e srand()

#define limSup 100   //intervalo de valores
# define posicoes 10

int main()
{
    setlocale(LC_ALL, "");

    int A[posicoes];
    int divisores=0;
    //faz com que os números sejam pseudo aleatórios. Inicializador do gerador de números aleatórios. 
    srand((unsigned) time(NULL)); 
    //VETOR A, GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
        A[i] = rand() % limSup + 2; /* gera número entre 0 e limite superior do intervalo. Somei 2, por ser o primeiro primo */

    printf("\nVETOR DE NÚMEROS PRIMOS E SUAS POSIÇÕES NO VETOR ALEATÓRIO\n");
    //Números primos: divisivel por 1 por ele mesmo. Ou seja, verificar se o número tem somente dois divisores
    //loop de 1 até o número dado e checar se tem somente dois divisores

    for (int i = 0; i < posicoes; i++)
    {
        printf("%s(%d) = %d\n", "A", i, A[i]);
        divisores=0;
        for (int j = 1; j <= A[i]; j++)
        {
            if (A[i]%j==0)
                divisores++;
        }
        if (divisores==2)
        {
            printf("%s(%d) = %d\n", "Primo", i, A[i]);
        }
    }
    
    printf("\n");
    return 0;

}
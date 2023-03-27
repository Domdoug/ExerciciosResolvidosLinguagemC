/*
Leia 10 n�meros inteiros e armazene em um vetor. Em seguida, escreva os elementos que
s�o primos e suas respectivas posi��es no vetor.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h> //para fun��o time()
#include <stdlib.h> //fun��es rand() e srand()

#define limSup 100   //intervalo de valores
# define posicoes 10

int main()
{
    setlocale(LC_ALL, "");

    int A[posicoes];
    int divisores=0;
    //faz com que os n�meros sejam pseudo aleat�rios. Inicializador do gerador de n�meros aleat�rios. 
    srand((unsigned) time(NULL)); 
    //VETOR A, GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
        A[i] = rand() % limSup + 2; /* gera n�mero entre 0 e limite superior do intervalo. Somei 2, por ser o primeiro primo */

    printf("\nVETOR DE N�MEROS PRIMOS E SUAS POSI��ES NO VETOR ALEAT�RIO\n");
    //N�meros primos: divisivel por 1 por ele mesmo. Ou seja, verificar se o n�mero tem somente dois divisores
    //loop de 1 at� o n�mero dado e checar se tem somente dois divisores

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
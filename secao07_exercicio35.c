/*
Fa�a um programa que leia dois n�meros a e b (positivos menores que 10000) e:
a) Crie um vetor onde cada posi��o � um algarismo do n�mero. A primeira posi��o
� um algarismo menos significativo;

b) Crie um vetor que seja a soma de a e b, mas fa�a-o usando apenas os vetores 
constru�dos anteriormente.

Dica: Some as posi��es correspondentes. Se a soma ultrapassar 10, subtraia 10 do
resultado e some 1 � pr�xima posi��o.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h> //para fun��o time()
#include <stdlib.h> //fun��es rand() e srand()

#define limSup 10000   //intervalo de valores
# define posicoes 10

int main()
{
    setlocale(LC_ALL, "");

    int v1[posicoes], v2[posicoes]; 
    int A[4], cont=0, soma[posicoes];

    int num;
    //faz com que os n�meros sejam pseudo aleat�rios. Inicializador do gerador de n�meros aleat�rios. 
    srand((unsigned) time(NULL));

    //VETOR v1 GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
    {
        v1[i] = rand() % limSup+1; /* gera n�mero entre 1 e limite superior do intervalo */
        v2[i] = rand() % limSup+1;
    }

    //impress�o
    for (int i = 0; i < posicoes; i++)
    {
        printf("%s(%d) = %d || ", "vetor v1", i, v1[i]);
        printf("%s(%d) = %d || ", "vetor v2", i, v2[i]);
        printf("\n");
    }

    //a) Crie um vetor onde cada posi��o � um algarismo do n�mero. A primeira posi��o
    //� um algarismo menos significativo;

    do
    {
        printf("\nDigite um n�mero menor que 10000:\t");
        scanf("%d", &num);
    } while (num>=10000);
    
    //N�mero menos significativo
    printf("\n%s %d", "Algarismo menos significativo (corresp. a unidade do n�mero): ", num % 10);
    printf("\n");
    //vetor criado a partir do n�mero
    
    while (num!=0)
    {
        A[cont] = num%10;
        num = num/10; // ou num /= 10;
        cont++;
    }

    for (int i = 0; i < cont; i++)
        printf("A[%d] = %d\n", i, A[i]);

    //a) Soma entre X e Y: soma de cada elemento de X com o elemento da mesma posi��o em Y.
    for (int i = 0; i < posicoes; i++)
        soma[i]=v1[i]+v2[i];

    // Exibindo o vetor Soma para o usu�rio
    printf("Soma entre X e Y: soma de cada elemento de X com o elemento da mesma posi��o em Y\n");
    for (int i=0; i<posicoes; ++i)
        printf("%d\t",soma[i]);

    printf("\n");

    return 0;
}
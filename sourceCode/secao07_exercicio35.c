/*
Faça um programa que leia dois números a e b (positivos menores que 10000) e:
a) Crie um vetor onde cada posição é um algarismo do número. A primeira posição
é um algarismo menos significativo;

b) Crie um vetor que seja a soma de a e b, mas faça-o usando apenas os vetores 
construídos anteriormente.

Dica: Some as posições correspondentes. Se a soma ultrapassar 10, subtraia 10 do
resultado e some 1 à próxima posição.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h> //para função time()
#include <stdlib.h> //funções rand() e srand()

#define limSup 10000   //intervalo de valores
# define posicoes 10

int main()
{
    setlocale(LC_ALL, "");

    int v1[posicoes], v2[posicoes]; 
    int A[4], cont=0, soma[posicoes];

    int num;
    //faz com que os números sejam pseudo aleatórios. Inicializador do gerador de números aleatórios. 
    srand((unsigned) time(NULL));

    //VETOR v1 GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
    {
        v1[i] = rand() % limSup+1; /* gera número entre 1 e limite superior do intervalo */
        v2[i] = rand() % limSup+1;
    }

    //impressão
    for (int i = 0; i < posicoes; i++)
    {
        printf("%s(%d) = %d || ", "vetor v1", i, v1[i]);
        printf("%s(%d) = %d || ", "vetor v2", i, v2[i]);
        printf("\n");
    }

    //a) Crie um vetor onde cada posição é um algarismo do número. A primeira posição
    //é um algarismo menos significativo;

    do
    {
        printf("\nDigite um número menor que 10000:\t");
        scanf("%d", &num);
    } while (num>=10000);
    
    //Número menos significativo
    printf("\n%s %d", "Algarismo menos significativo (corresp. a unidade do número): ", num % 10);
    printf("\n");
    //vetor criado a partir do número
    
    while (num!=0)
    {
        A[cont] = num%10;
        num = num/10; // ou num /= 10;
        cont++;
    }

    for (int i = 0; i < cont; i++)
        printf("A[%d] = %d\n", i, A[i]);

    //a) Soma entre X e Y: soma de cada elemento de X com o elemento da mesma posição em Y.
    for (int i = 0; i < posicoes; i++)
        soma[i]=v1[i]+v2[i];

    // Exibindo o vetor Soma para o usuário
    printf("Soma entre X e Y: soma de cada elemento de X com o elemento da mesma posição em Y\n");
    for (int i=0; i<posicoes; ++i)
        printf("%d\t",soma[i]);

    printf("\n");

    return 0;
}
/*
Leia 10 n�meros inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2.
Copie os valores �mpares de v para v1 e os valores pares de v para v2. Note que cada
um dos vetores v1 e v2 tem no m�ximo 10 elementos, mas nem todos os elementos s�o
utilizados. No final, escreva os elementos UTILIZADOS de v1 e v2.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h> //para fun��o time()
#include <stdlib.h> //fun��es rand() e srand()

#define limSup 50   //intervalo de valores
# define posicoes 10

int main()
{
    setlocale(LC_ALL, "");

    int v[posicoes], v1[posicoes]={0}, v2[posicoes]={0};
    int cont=0;
    //faz com que os n�meros sejam pseudo aleat�rios. Inicializador do gerador de n�meros aleat�rios. 
    srand((unsigned) time(NULL)); 
    //VETOR v GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
        v[i] = rand() % limSup+1; /* gera n�mero entre 1 e limite superior do intervalo */

    //VETOR v1 v2
    printf("\nVETOR v1, �mpares, v2, pares\n");
    for (int i = 0; i < posicoes; i++)
    {
        if (v[i]%2!=0)
            v1[i] = v[i];
        else
            v2[i] = v[i];
    }
    //Verifica��o de elementos preenchidos no vetor �mpar
    for (int i = 0; i < posicoes; i++)
    {
        if (v1[i]!=0)
        {
            printf("%s(%d) = %d\n", "v1", i, v1[i]);
            cont++;
            if (cont%2==0)  //contagem: para cada duas leituras, aplicar quebra de linha
                printf("\n");
        }
    }

    //Verifica��o de elementos preenchidos no vetor par
    for (int i = 0; i < posicoes; i++)
    {
        if (v2[i]!=0)
        {        
            printf("%s(%d) = %d\n", "v2", i, v2[i]);
            cont++;
            if (cont%2==0)  //contagem: para cada duas leituras, aplicar quebra de linha
                printf("\n");
        }
    }


    printf("\n");

    return 0;
}
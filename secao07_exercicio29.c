/*
Fa�a um programa que receba 6 n�meros inteiros e mostre:
a) Os n�meros pares digitados;
b) a soma dos n�meros pares digitados;
c) Os n�meros �mpares digitados;
d) A quantidade de n�meros �mpares digitados. 
*/

#include <stdio.h>
#include <locale.h>
#include <time.h> //para fun��o time()
#include <stdlib.h> //fun��es rand() e srand()

#define limSup 50   //intervalo de valores
# define posicoes 6

int main()
{
    setlocale(LC_ALL, "");

    int vetor[posicoes], par[posicoes]={0}, impar[posicoes]={0};
    int cont=0, contlinha=0, soma=0;
    //faz com que os n�meros sejam pseudo aleat�rios. Inicializador do gerador de n�meros aleat�rios. 
    srand((unsigned) time(NULL)); 
    //VETOR v GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
        vetor[i] = rand() % limSup+1; /* gera n�mero entre 1 e limite superior do intervalo */

    //a) N�MEROS PARES E �MPARES
    
    for (int i = 0; i < posicoes; i++)
    {
        if (vetor[i]%2==0)
        {
            par[i] = vetor[i];
            soma+=par[i];
        }
        else
        {
            impar[i] = vetor[i];
            cont++;
        }
    }

    //b e d) SOMA DOS PARES DIGITADOS E CONTAGEM DOS �MPARES
    /*
    for (int i = 0; i < posicoes; i++)
    {
        soma+=par[i];
    }
    */    
    
    printf("\nN�meros pares e impares\n");
    for (int i = 0; i < posicoes; i++)
    {
        if (par[i]!=0)
        {        
            printf("%s(%d) = %d\n", "par", i, par[i]);
            contlinha++;
            if (contlinha%2==0)  //contagem: para cada duas leituras, aplicar quebra de linha
                printf("\n");
        }
        if (impar[i]!=0)
        {        
            printf("%s(%d) = %d\n", "impar", i, impar[i]);
            contlinha++;
            if (contlinha%2==0)  //contagem: para cada duas leituras, aplicar quebra de linha
                printf("\n");
        }        
    }

    printf("%s%d", "Soma dos n�meros pares: ", soma);
    printf("\n");
    printf("%s%d", "Contagem de n�meros �mpares: ", cont);

    printf("\n");

    return 0;
}
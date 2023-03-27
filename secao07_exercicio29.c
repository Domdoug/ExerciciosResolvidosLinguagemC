/*
Faça um programa que receba 6 números inteiros e mostre:
a) Os números pares digitados;
b) a soma dos números pares digitados;
c) Os números ímpares digitados;
d) A quantidade de números ímpares digitados. 
*/

#include <stdio.h>
#include <locale.h>
#include <time.h> //para função time()
#include <stdlib.h> //funções rand() e srand()

#define limSup 50   //intervalo de valores
# define posicoes 6

int main()
{
    setlocale(LC_ALL, "");

    int vetor[posicoes], par[posicoes]={0}, impar[posicoes]={0};
    int cont=0, contlinha=0, soma=0;
    //faz com que os números sejam pseudo aleatórios. Inicializador do gerador de números aleatórios. 
    srand((unsigned) time(NULL)); 
    //VETOR v GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
        vetor[i] = rand() % limSup+1; /* gera número entre 1 e limite superior do intervalo */

    //a) NÚMEROS PARES E ÍMPARES
    
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

    //b e d) SOMA DOS PARES DIGITADOS E CONTAGEM DOS ÍMPARES
    /*
    for (int i = 0; i < posicoes; i++)
    {
        soma+=par[i];
    }
    */    
    
    printf("\nNúmeros pares e impares\n");
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

    printf("%s%d", "Soma dos números pares: ", soma);
    printf("\n");
    printf("%s%d", "Contagem de números ímpares: ", cont);

    printf("\n");

    return 0;
}
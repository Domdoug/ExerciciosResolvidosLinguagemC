/*
Escreva um programa que leia números inteiros no intervalo [0, 50] e os armazene em um vetor
com 10 posições. Preencha um segundo vetor apenas com os números ímpares do primeiro vetor.
Imprima os dois vetores, 2 elementos por linha.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h> //para função time()
#include <stdlib.h> //funções rand() e srand()

#define limSup 50   //intervalo de valores
# define posicoes 10

int main()
{
    setlocale(LC_ALL, "");

    int vetor[posicoes], impares[posicoes]={0};
    int cont=0;
    //faz com que os números sejam pseudo aleatórios. Inicializador do gerador de números aleatórios. 
    srand((unsigned) time(NULL)); 
    //Vetor randomico entre 0 e 50
    for (int i = 0; i < posicoes; i++)
        vetor[i] = rand() % limSup; /* gera número entre 0 e limite superior do intervalo */
    //Vetor impar, apartir do primeiro
    for (int i = 0; i < posicoes; i++)
        if (vetor[i] % 2 != 0)
            impares[i]=vetor[i];

    printf("\nVETOR DE 10 POSIÇÕES\n");
    for (int i = 0; i < posicoes; i++)
    {
        printf("%d ", vetor[i]);
        cont++;
        if (cont%2==0)  //contagem: para cada duas leituras, aplicar quebra de linha
            printf("\n");
        
        //printf("\n%s(%d) = %d ", "vetor", i, vetor[i]);
    }
    printf("\nVETOR DOS NÚMEROS ÍMPARES COM BASE NOS VALORES DO PRIMEIRO VETOR\n");
     for (int i = 0; i < posicoes; i++)
        if (impares[i]!=0)
        {
            printf("%s(%d) = %d ", "impares", i, impares[i]);
            cont++;
            if (cont%2==0)  //contagem: para cada duas leituras, aplicar quebra de linha
                printf("\n");
        }
    
    printf("\n");
    return 0;

}
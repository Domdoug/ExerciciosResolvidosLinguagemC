/*
Faça um programa que receba do usuário dois vetores, A e B, com 10 números inteiros cada.
Crie um novo vetor denominado C, calcule C = A - B. Mostre na tela os dados do vetor C.
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

    int A[posicoes], B[posicoes], C[posicoes];
    //int cont=0;
    //faz com que os números sejam pseudo aleatórios. Inicializador do gerador de números aleatórios. 
    srand((unsigned) time(NULL)); 
    //VETOR A, GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
        A[i] = rand() % limSup; /* gera número entre 0 e limite superior do intervalo */
    //VETOR B, GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
        B[i] = rand() % limSup;

    for (int i = 0; i < posicoes; i++)
        C[i] = A[i] - B[i];
    

    printf("\nVETOR A, B e C DE 10 POSIÇÕES\n");
    for (int i = 0; i < posicoes; i++)
    {
        printf("%s(%d) = %d || ", "A", i, A[i]);
        printf("%s(%d) = %d || ", "B", i, B[i]);
        printf("%s(%d) = %d || ", "C", i, C[i]);
        printf("\n");
        /*
        cont++;
        if (cont==3)  //contagem: para cada duas leituras, aplicar quebra de linha
        {
            printf("\n");
            cont=0;
        }
        */
        //printf("\n%s(%d) = %d ", "vetor", i, vetor[i]);
    }
    
    printf("\n");
    return 0;

}
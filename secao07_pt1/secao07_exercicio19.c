/*
Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+5*i)%(i+1), sendo i a posição do 
elemento do vetor. Em seguida imprima o vetor na tela.
*/

#include <stdio.h>
#include <locale.h>

#define limMax 50

int main()
{
    setlocale(LC_ALL, "");

    float vetor[limMax];

    for (int i = 0; i < limMax; i++)
        vetor[i] = (i + 5 * i) % (i + 1);

    for (int i = 0; i < limMax; i++)
        printf("\n%s(%d) = %.1f", "vetor", i, vetor[i]);
    
    printf("\n");
    return 0;

}

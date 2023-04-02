/*
Faça um programa que calcule o desvio padrão de um vetor v contendo n = 10 números,
onde: m é a média do vetor.
desvio padrão = raiz (1/ (n-1)*somatorio((v[i]-m)^2)), com i = 1, i = n
A fórmula acima representa o desvio-padrão da amostra.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h> //para função time()
#include <stdlib.h> //funções rand() e srand()
#include <math.h>

#define limSup 100   //intervalo de valores
#define N 10

int main()
{
    setlocale(LC_ALL, "");

    int vetor[N], soma=0;
    float desvioP, media, somatorio=0;
    //int cont=0;
    //faz com que os números sejam pseudo aleatórios. Inicializador do gerador de números aleatórios. 
    srand((unsigned) time(NULL)); 
    //VETOR GERADO RANDOMICAMENTE
    for (int i = 0; i < N; i++)
        vetor[i] = rand() % limSup; /* gera número entre 0 e limite superior do intervalo */
    
    //Cálculo da média
    for (int i = 0; i < N; i++)
        soma += vetor[i];

    media = (float) soma / (float) N;

    //Cálculo do somatório dentro da raiz
    for (int i = 0; i < N; i++)
        somatorio += pow(vetor[i]-media, 2.0);

    //Cálculo do Desvio-padrão
    desvioP = sqrt(1/((float) N-1)*somatorio);

    printf("\nDesvio padrão da amostra = raiz (1/ (n-1)*somatorio((v[i]-m)^2)), com i = 1, i = n\n");

    //Imprimir vetor para conferencia:
    for (int i = 0; i < N; i++)
        printf("%d\n", vetor[i]);

    printf("%s = %f\n", "média", media);
    printf("%s = %f\n", "Desvio-Padrão da Amostra", desvioP);

    
    printf("\n");
    return 0;

}

/*
Fa�a um programa que calcule o desvio padr�o de um vetor v contendo n = 10 n�meros,
onde: m � a m�dia do vetor.
desvio padr�o = raiz (1/ (n-1)*somatorio((v[i]-m)^2)), com i = 1, i = n
A f�rmula acima representa o desvio-padr�o da amostra.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h> //para fun��o time()
#include <stdlib.h> //fun��es rand() e srand()
#include <math.h>

#define limSup 100   //intervalo de valores
#define N 10

int main()
{
    setlocale(LC_ALL, "");

    int vetor[N], soma=0;
    float desvioP, media, somatorio=0;
    //int cont=0;
    //faz com que os n�meros sejam pseudo aleat�rios. Inicializador do gerador de n�meros aleat�rios. 
    srand((unsigned) time(NULL)); 
    //VETOR GERADO RANDOMICAMENTE
    for (int i = 0; i < N; i++)
        vetor[i] = rand() % limSup; /* gera n�mero entre 0 e limite superior do intervalo */
    
    //C�lculo da m�dia
    for (int i = 0; i < N; i++)
        soma += vetor[i];

    media = (float) soma / (float) N;

    //C�lculo do somat�rio dentro da raiz
    for (int i = 0; i < N; i++)
        somatorio += pow(vetor[i]-media, 2.0);

    //C�lculo do Desvio-padr�o
    desvioP = sqrt(1/((float) N-1)*somatorio);

    printf("\nDesvio padr�o da amostra = raiz (1/ (n-1)*somatorio((v[i]-m)^2)), com i = 1, i = n\n");

    //Imprimir vetor para conferencia:
    for (int i = 0; i < N; i++)
        printf("%d\n", vetor[i]);

    printf("%s = %f\n", "m�dia", media);
    printf("%s = %f\n", "Desvio-Padr�o da Amostra", desvioP);

    
    printf("\n");
    return 0;

}

/*
Faça um programa que gera um número aleatório de 1 a 1000. O usuário deve tentar acertar
qual o número foi gerado, a cada tentativa o programa deverá informar se o chute é
menor ou maior que o número gerado. O programa acaba quando o usuário acerta o número
gerado. O programa deve informar em quantas tentativas o número foi descoberto.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h>   //para a semente do srand
#include <stdlib.h>  //para a função rand

int main()
{
    setlocale(LC_ALL, "");

    int sorteio, palpite, maior=0, menor=0;

    srand( (unsigned)time(NULL) );   //semente para a função rand não ficar repetindo o valor.
    //rand tem valores altos. Usando o resto da divisão, teremos valores entre 0 e 1000
    // 1+ é para o limite inferior do intervalo aleatório ser igual a 1. Senão o 0 pode ser sorteado
    sorteio = 1 + rand() % 1000;    
    //printf("%d", sorteio);
    //printf("\nIntervalo da função rand neste computador: [0, %d]\n", RAND_MAX);

    do
    {
        printf("\nTente adivinhar o número sorteado de 1 a 1000!!!:\t");
        scanf("%d", &palpite);

        if (palpite > sorteio)
        {
            printf("\nO palpite foi maior que o número sorteado!!! Continue tentando!");
            maior++;
        }
        else if (palpite < sorteio)
        {
            printf("\nO palpite foi menor que o número sorteado!!! Continue tentando!");
            menor++;
        }
        else
        {
            printf("\nAcertou!!! O palpite foi %d e número sorteado foi %d", palpite, sorteio);
        }
    } while (palpite!=sorteio);
    
    printf("\nForam feitas %d tentativas!", maior+menor);
    printf("\n%d das tentativas foi a maior!", maior);
    printf("\n%d das tentativas foi a menor!", menor);
    printf("\n");

    return 0;
}

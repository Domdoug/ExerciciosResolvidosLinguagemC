/*
Fa�a um programa que gera um n�mero aleat�rio de 1 a 1000. O usu�rio deve tentar acertar
qual o n�mero foi gerado, a cada tentativa o programa dever� informar se o chute �
menor ou maior que o n�mero gerado. O programa acaba quando o usu�rio acerta o n�mero
gerado. O programa deve informar em quantas tentativas o n�mero foi descoberto.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h>   //para a semente do srand
#include <stdlib.h>  //para a fun��o rand

int main()
{
    setlocale(LC_ALL, "");

    int sorteio, palpite, maior=0, menor=0;

    srand( (unsigned)time(NULL) );   //semente para a fun��o rand n�o ficar repetindo o valor.
    //rand tem valores altos. Usando o resto da divis�o, teremos valores entre 0 e 1000
    // 1+ � para o limite inferior do intervalo aleat�rio ser igual a 1. Sen�o o 0 pode ser sorteado
    sorteio = 1 + rand() % 1000;    
    //printf("%d", sorteio);
    //printf("\nIntervalo da fun��o rand neste computador: [0, %d]\n", RAND_MAX);

    do
    {
        printf("\nTente adivinhar o n�mero sorteado de 1 a 1000!!!:\t");
        scanf("%d", &palpite);

        if (palpite > sorteio)
        {
            printf("\nO palpite foi maior que o n�mero sorteado!!! Continue tentando!");
            maior++;
        }
        else if (palpite < sorteio)
        {
            printf("\nO palpite foi menor que o n�mero sorteado!!! Continue tentando!");
            menor++;
        }
        else
        {
            printf("\nAcertou!!! O palpite foi %d e n�mero sorteado foi %d", palpite, sorteio);
        }
    } while (palpite!=sorteio);
    
    printf("\nForam feitas %d tentativas!", maior+menor);
    printf("\n%d das tentativas foi a maior!", maior);
    printf("\n%d das tentativas foi a menor!", menor);
    printf("\n");

    return 0;
}

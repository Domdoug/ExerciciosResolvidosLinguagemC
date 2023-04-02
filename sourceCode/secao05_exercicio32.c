/*
Fa�a um programa que simula o lan�amento de dois dados, d1 e d2, n vezes, e tem como
sa�da o n�mero de cada dado e a rela��o entre eles (>, <, =) de cada lan�amento.
*/
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, d1, d2, s1=0, s2=0, s3=0;
    int cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, cont6=0;

    printf("\nDigite a quantidade de vezes de lan�amento dos dados:\t");
    scanf("%d", &num);

    srand( (unsigned)time(NULL) );   //semente para a fun��o rand n�o ficar repetindo o valor.

    for (int i = 1; i <= num; i++)
    {
        //Resultado de cada dado
        //rand tem valores altos. Usando o resto da divis�o, teremos valores entre 0 e 6
        // 1+ � para o limite inferior do intervalo aleat�rio ser igual a 1. Sen�o o 0 pode ser sorteado
        d1 = 1 + rand() % 6; 
        d2 = 1 + rand() % 6;
        //printf("\nd1=%d", d1);
        //printf("\nd2=%d", d2);
        // Estas decis�es por if s�o para contagem de quem teve a maior numera��o ou se foram iguais.
        if (d1 > d2)
        {
            s1 += 1;
        }
        else if (d1 < d2)
        {
            s2 += 1;
        }
        else
        {
            s3 += 1;
        }

        //Resultado do dado D1:
        switch (d1)
        {
        case 1:
            cont1 += 1;
            break;
        case 2:
            cont2 += 1;
            break;
        case 3:
            cont3 += 1;
            break;
        case 4:
            cont4 += 1;
            break;
        case 5:
            cont5 += 1;
            break;
        case 6:
            cont6 += 1;
            break;                                                        
        }

        //Resultado do dado D2:
        switch (d2)
        {
        case 1:
            cont1 += 1;
            break;
        case 2:
            cont2 += 1;
            break;
        case 3:
            cont3 += 1;
            break;
        case 4:
            cont4 += 1;
            break;
        case 5:
            cont5 += 1;
            break;
        case 6:
            cont6 += 1;
            break;                                                        
        }
        
    }
    
    //Sa�das dos resultados:
    printf("\nIntervalo da fun��o rand neste computador: [0, %d]\n", RAND_MAX);
    printf("\nA frequ�ncia onde o dado D1 foi maior que o dado D2, no mesmo lan�amento, �: %d", s1);
    printf("\nA frequ�ncia onde o dado D2 foi maior que o dado D1, no mesmo lan�amento, �: %d", s2);
    printf("\nA frequ�ncia onde os n�meros dos dados D1 e D2, no mesmo lan�amento, foram iguais �: %d", s3);
    printf("\n================ FREQU�NCIA DE CADA VALOR DOS DADOS ========================");
    printf("\nA frequ�ncia do n�mero 1 � %d", cont1);
    printf("\nA frequ�ncia do n�mero 2 � %d", cont2);
    printf("\nA frequ�ncia do n�mero 3 � %d", cont3);
    printf("\nA frequ�ncia do n�mero 4 � %d", cont4);
    printf("\nA frequ�ncia do n�mero 5 � %d", cont5);
    printf("\nA frequ�ncia do n�mero 6 � %d", cont6);
    printf("\n");

    return 0;
}

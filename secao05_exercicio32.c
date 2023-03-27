/*
Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como
saída o número de cada dado e a relação entre eles (>, <, =) de cada lançamento.
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

    printf("\nDigite a quantidade de vezes de lançamento dos dados:\t");
    scanf("%d", &num);

    srand( (unsigned)time(NULL) );   //semente para a função rand não ficar repetindo o valor.

    for (int i = 1; i <= num; i++)
    {
        //Resultado de cada dado
        //rand tem valores altos. Usando o resto da divisão, teremos valores entre 0 e 6
        // 1+ é para o limite inferior do intervalo aleatório ser igual a 1. Senão o 0 pode ser sorteado
        d1 = 1 + rand() % 6; 
        d2 = 1 + rand() % 6;
        //printf("\nd1=%d", d1);
        //printf("\nd2=%d", d2);
        // Estas decisões por if são para contagem de quem teve a maior numeração ou se foram iguais.
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
    
    //Saídas dos resultados:
    printf("\nIntervalo da função rand neste computador: [0, %d]\n", RAND_MAX);
    printf("\nA frequência onde o dado D1 foi maior que o dado D2, no mesmo lançamento, é: %d", s1);
    printf("\nA frequência onde o dado D2 foi maior que o dado D1, no mesmo lançamento, é: %d", s2);
    printf("\nA frequência onde os números dos dados D1 e D2, no mesmo lançamento, foram iguais é: %d", s3);
    printf("\n================ FREQUÊNCIA DE CADA VALOR DOS DADOS ========================");
    printf("\nA frequência do número 1 é %d", cont1);
    printf("\nA frequência do número 2 é %d", cont2);
    printf("\nA frequência do número 3 é %d", cont3);
    printf("\nA frequência do número 4 é %d", cont4);
    printf("\nA frequência do número 5 é %d", cont5);
    printf("\nA frequência do número 6 é %d", cont6);
    printf("\n");

    return 0;
}

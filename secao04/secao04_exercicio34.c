/*
Leia a nota e o número de faltas de um aluno e escreva seu conceito.
De acordo com a tabela abaixo, quando o aluno tem mais de 20 faltas
ocorre uma redução de conceito.
|==============================================================================|
|   NOTA           |CONCEITO (ATÉ 20 FALTAS)   |CONCEITO (MAIS DE 20 FALTAS)   |
|   9.0 até 10.0   |       A                   |       B                       |
|   7.5 até 8.9    |       B                   |       C                       |
|   5.0 até 7.4    |       C                   |       D                       |
|   4.0 até 4.9    |       D                   |       E                       |
|   0.0 até 3.9    |       E                   |       E                       |
|==============================================================================|

*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float nota;
    int faltas;

    printf("\n|==============================================================================|");
    printf("\n|   NOTA           |CONCEITO (ATÉ 20 FALTAS)   |CONCEITO (MAIS DE 20 FALTAS)   |");
    printf("\n|   9.0 até 10.0   |       A                   |       B                       |");
    printf("\n|   7.5 até 8.9    |       B                   |       C                       |");
    printf("\n|   5.0 até 7.4    |       C                   |       D                       |");
    printf("\n|   4.0 até 4.9    |       D                   |       E                       |");
    printf("\n|   0.0 até 3.9    |       E                   |       E                       |");
    printf("\n|==============================================================================|");
    printf("\nDigite a nota e o número de faltas do aluno:\t"); 
    scanf("%f %d", &nota, &faltas);

    if (nota>=0 && nota<=3.9)
    {
        if (faltas<20)
        {
            printf("\Conceito E\n");
        }
        else
        {
            printf("\Conceito E\n");
        }
    }
    else if (nota>=4.0 && nota<=4.9)
    {
        if (faltas<20)
        {
            printf("\Conceito D\n");
        }
        else
        {
            printf("\Conceito E\n");
        }
    }
    else if (nota>=5.0 && nota<=7.4)
    {
        if (faltas<20)
        {
            printf("\Conceito C\n");
        }
        else
        {
            printf("\Conceito D\n");
        }
    }
        else if (nota>=7.5 && nota<=8.9)
    {
        if (faltas<20)
        {
            printf("\Conceito B\n");
        }
        else
        {
            printf("\Conceito C\n");
        }
    }
        else if (nota>=9.0 && nota<=10.0)
    {
        if (faltas<20)
        {
            printf("\Conceito A\n");
        }
        else
        {
            printf("\Conceito B\n");
        }
    }    
    else
    {
        printf("\nA nota está fora do intervalo da tabela");
    }
    return 0;
}
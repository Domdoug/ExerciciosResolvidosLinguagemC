/*
Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga
ao vendedor. Para calcular a comissão, considera a tabela abaixo:
|===================================================|===========================|
|               Venda mensal                        |       Comissão            |
|===================================================|===========================|
|Maior ou igual a 100 mil reais                     |R$700,00 + 16% das vendas  |
|Menor que 100 mil e maior ou igual a 80 mil reais  |R$650,00 + 14% das vendas  |
|Menor que 80 mil e maior ou igual a 60 mil reais   |R$600,00 + 14% das vendas  |
|Menor que 60 mil e maior ou igual a 40 mil reais   |R$550,00 + 14% das vendas  |
|Menor que 40 mil e maior ou igual a 20 mil reais   |R$500,00 + 14% das vendas  |
|Menor que 20 mil reais                             |R$400,00 + 14% das vendas  |
|===================================================|===========================|
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float venda, comissao;
    
    printf("\n|===================================================|===========================|");
    printf("\n|               Venda mensal                        |       Comissão            |");
    printf("\n|===================================================|===========================|");
    printf("\n|Maior ou igual a 100 mil reais                     |R$700,00 + 16%% das vendas |");
    printf("\n|Menor que 100 mil e maior ou igual a 80 mil reais  |R$650,00 + 14%% das vendas |");
    printf("\n|Menor que 80 mil e maior ou igual a 60 mil reais   |R$600,00 + 14%% das vendas |");
    printf("\n|Menor que 60 mil e maior ou igual a 40 mil reais   |R$550,00 + 14%% das vendas |");
    printf("\n|Menor que 40 mil e maior ou igual a 20 mil reais   |R$500,00 + 14%% das vendas |");
    printf("\n|Menor que 20 mil reais                             |R$400,00 + 14%% das vendas |");
    printf("\n|===================================================|===========================|");
    printf("\nDigite o valor da venda:\t");
    scanf("%f", &venda);

    if (venda>=100000)
    {
        comissao = 700 + venda*0.16;
        printf("\nO valor da comissão será de %.2f\n", comissao);
    }
    else if (venda>=80000 && venda<100000)
    {
        comissao = 650 + venda*0.14;
        printf("\nO valor da comissão será de %.2f\n", comissao);
    }
    else if (venda>=60000 && venda<80000)
    {
        comissao = 600 + venda*0.14;
        printf("\nO valor da comissão será de %.2f\n", comissao);
    }
    else if (venda>=40000 && venda<60000)
    {
        comissao = 550 + venda*0.14;
        printf("\nO valor da comissão será de %.2f\n", comissao);
    }
    else if (venda>=20000 && venda<40000)
    {
        comissao = 500 + venda*0.14;
        printf("\nO valor da comissão será de %.2f\n", comissao);
    }
    else if(venda<20000)
    {
        comissao = 400 + venda*0.14;
        printf("\nO valor da comissão será de %.2f\n", comissao);
    }
    else
    {
        printf("\nValor digitado inválido!\n");
    }

    return 0;
}

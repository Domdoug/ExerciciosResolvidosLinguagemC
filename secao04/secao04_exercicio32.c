/*
Escrever um programa que leia o código do produto escolhido do cardápio de uma lanchonete e a 
quantidade. O programa deve calcular o valor a ser pago por aquele lanche. Considere que a cada
execução somente será calculado um pedido. O cardápio da lanchonete segue o padrão abaixo:

|---------------------------------------|
|   Especificação   | Código    | Preço |
|Cachorro quente    |   100     |   1,20|
|Bauru Simples      |   101     |   1,30|
|Bauru com Ovo      |   102     |   1,50|
|Hamburguer         |   103     |   1,20|
|Cheeseburguer      |   104     |   1,70|
|Suco               |   105     |   2,20|
|Refrigerante       |   106     |   1,00|
|---------------------------------------|
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int codigo, quantidade;

    
    printf("\n|---------------------------------------|");
    printf("\n|   Especificação   | Código    | Preço |");
    printf("\n|---------------------------------------|");
    printf("\n|Cachorro quente    |   100     |   1,20|");
    printf("\n|Bauru Simples      |   101     |   1,30|");
    printf("\n|Bauru com Ovo      |   102     |   1,50|");
    printf("\n|Hamburguer         |   103     |   1,20|");
    printf("\n|Cheeseburguer      |   104     |   1,70|");
    printf("\n|Suco               |   105     |   2,20|");
    printf("\n|Refrigerante       |   106     |   1,00|");
    printf("\n|---------------------------------------|");
    printf("\nDigite o código do produto:\t");
    scanf("%d", &codigo);

    printf("\nDigite a quantidade:\t");
    scanf("%d", &quantidade);

    switch (codigo)
    {
    case 100:
        printf("\nO valor do pedido é: %.2f\n", quantidade*1.20);
        break;
    case 101:
        printf("\nO valor do pedido é: %.2f\n", quantidade*1.30);
        break;
    case 102:
        printf("\nO valor do pedido é: %.2f\n", quantidade*1.50);
        break;
    case 103:
        printf("\nO valor do pedido é: %.2f\n", quantidade*1.20);
        break;
    case 104:
        printf("\nO valor do pedido é: %.2f\n", quantidade*1.70);
        break;
    case 105:
        printf("\nO valor do pedido é: %.2f\n", quantidade*2.20);
        break;
    case 106:
        printf("\nO valor do pedido é: %.2f\n", quantidade*1.00);
        break;                                            
    default:
        printf("\nNúmero do pedido inválido");
        break;
    }
    return 0;
}

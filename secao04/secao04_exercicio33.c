/*
Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo,
calcule e escreva o preço novo e escreva uma mensagem em função do preço novo
(de acordo com a segunda tabela).
------------------------------------
|   PREÇO ANTIGO        | PERCENTUAL DE AUMENTO |
|   até R$ 50           |       5%              |
| entre R$ 50 e R$ 100  |       10%             |
|   acima de R$ 100     |       15%             |
-----------------------------------------------

================================================
|   PREÇO NOVO                  |    MENSAGEM   |
|até R$ 80                      |   Barato      |
|entre R$ 80 e 120 (inclusive)  |   Normal      |
|entre R$ 120 e 200 (inclusive) |   Caro        |
|acima de R$ 200                |   Muito caro  |
=================================================

*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float preco, novo_preco;

printf("\n================================================");
printf("\n|   PREÇO ANTIGO        | PERCENTUAL DE AUMENTO|");
printf("\n|   até R$ 50           |       5%%             |");
printf("\n| entre R$ 50 e R$ 100  |       10%%            |");
printf("\n|   acima de R$ 100     |       15%%            |");
printf("\n================================================");

printf("\nDigite o preco antigo:\t");
scanf("%f", &preco);

if (preco<50)
{
    novo_preco = preco*(1+0.05);
    printf("\nO novo preço com o aumento de 5%% é: %.2f\n", novo_preco);
}
else if (preco >= 50 && preco <= 100)
{
    novo_preco = preco*(1+0.10);
    printf("\nO novo preço com o aumento de 10%% é: %.2f\n", novo_preco);
}
else
{
    novo_preco = preco*(1+0.15);
    printf("\nO novo preço com o aumento de 15%% é: %.2f\n", novo_preco);
}
// NOVO PREÇO
if (novo_preco<80)
{
    printf("Barato!\n");
}
else if (novo_preco>=80 && novo_preco<=120)
{
    printf("Normal\n");
}
else if (novo_preco>=120 && novo_preco<=200)
{
    printf("Caro\n");
}
else{
    printf("Muito Caro\n");
}
    return 0;
}

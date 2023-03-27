/*
Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o pre�o antigo,
calcule e escreva o pre�o novo e escreva uma mensagem em fun��o do pre�o novo
(de acordo com a segunda tabela).
------------------------------------
|   PRE�O ANTIGO        | PERCENTUAL DE AUMENTO |
|   at� R$ 50           |       5%              |
| entre R$ 50 e R$ 100  |       10%             |
|   acima de R$ 100     |       15%             |
-----------------------------------------------

================================================
|   PRE�O NOVO                  |    MENSAGEM   |
|at� R$ 80                      |   Barato      |
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
printf("\n|   PRE�O ANTIGO        | PERCENTUAL DE AUMENTO|");
printf("\n|   at� R$ 50           |       5%%             |");
printf("\n| entre R$ 50 e R$ 100  |       10%%            |");
printf("\n|   acima de R$ 100     |       15%%            |");
printf("\n================================================");

printf("\nDigite o preco antigo:\t");
scanf("%f", &preco);

if (preco<50)
{
    novo_preco = preco*(1+0.05);
    printf("\nO novo pre�o com o aumento de 5%% �: %.2f\n", novo_preco);
}
else if (preco >= 50 && preco <= 100)
{
    novo_preco = preco*(1+0.10);
    printf("\nO novo pre�o com o aumento de 10%% �: %.2f\n", novo_preco);
}
else
{
    novo_preco = preco*(1+0.15);
    printf("\nO novo pre�o com o aumento de 15%% �: %.2f\n", novo_preco);
}
// NOVO PRE�O
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

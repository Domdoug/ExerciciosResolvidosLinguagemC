/*
O custo ao consumidor de um carro novo � a soma do custo de f�brica, da comuss�o do
distribuidor e dos impostos. A comiss�o e os impostos s�o calculados sobre o custo
de f�brica, de acordo com a tabela abaixo. Leia o custo de f�brica e escreva o custo ao
consumidor.
|===================================|===================|===================|
|       Custo de F�brica            |% do distribuidor  |   % dos impostos  |  
|===================================|===================|===================|
|at� R$ 12.000,00                   |       5           |       isento      |
|entre R$ 12.000,00 e R$ 25.000,00  |       10          |           10      |
|acima de R$ 25.000,00              |       15          |           20      |
|===================================|===================|===================|

*/

#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "");

    float c_consumidor, c_fabrica, comissao, imposto;

printf("\n|===================================|===================|===================|");
printf("\n|       Custo de F�brica            |%% do distribuidor |  %% dos impostos  |");  
printf("\n|===================================|===================|===================|");
printf("\n|at� R$ 12.000,00                   |       5           |       isento      |");
printf("\n|entre R$ 12.000,00 e R$ 25.000,00  |       10          |           15      |");
printf("\n|acima de R$ 25.000,00              |       15          |           20      |");
printf("\n|===================================|===================|===================|");

printf("\nDigite o custo de f�brica:\t");
scanf("%f",&c_fabrica);

if (c_fabrica<= 12000)
{
    comissao = 0.05;
    imposto = 0.0;
    c_consumidor = c_fabrica*(1+comissao)*(1+imposto);
}
else if (c_fabrica>12000 && c_fabrica<=25000)
{
    comissao = 0.10;
    imposto = 0.15;
    c_consumidor = c_fabrica*(1+comissao)*(1+imposto);
}
else if (c_fabrica>25000)
{
    comissao = 0.15;
    imposto = 0.20;
    c_consumidor = c_fabrica*(1+comissao)*(1+imposto);
}
else
{
    printf("\nValor do custo de f�brica inv�lido. Reveja.");
}
    printf("\nO valor do custo ao consumidor ser�: %.2f\n", c_consumidor);

    return 0;
}

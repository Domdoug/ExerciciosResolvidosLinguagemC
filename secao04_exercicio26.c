/*
Leia a distância em km e a quantidade de litreos de gasolina consumidos por um
carro em um percurso, calcule o consumo em km/l e escreva uma mensagem de acordo
com a tabela abaixo:
==========================
|CONSUMO    | (km/l) |  MENSAGEM     |
| menor que |   8    | Venda o carro |
| entre     | 8 e 14 | Econômico     |
| maior que |   12   | super econômico|

*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    float distancia, litros, consumo;
    printf("\nDigite a distância em km e a quantidade de litros de gasolina:\t");
    scanf("%f %f", &distancia, &litros);

    //Cálculo
    consumo = distancia/litros;

    if (consumo<8)
    {
        printf("\nVenda o carro!\n");
    }
    else if (consumo > 8 && consumo < 12)
    {
        printf("\nEconômico!\n");
    }
    else
    {
        printf("\nSuper econômico!\n");
    }
    
    return 0;
}

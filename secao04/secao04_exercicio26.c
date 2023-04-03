/*
Leia a dist�ncia em km e a quantidade de litreos de gasolina consumidos por um
carro em um percurso, calcule o consumo em km/l e escreva uma mensagem de acordo
com a tabela abaixo:
==========================
|CONSUMO    | (km/l) |  MENSAGEM     |
| menor que |   8    | Venda o carro |
| entre     | 8 e 14 | Econ�mico     |
| maior que |   12   | super econ�mico|

*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    float distancia, litros, consumo;
    printf("\nDigite a dist�ncia em km e a quantidade de litros de gasolina:\t");
    scanf("%f %f", &distancia, &litros);

    //C�lculo
    consumo = distancia/litros;

    if (consumo<8)
    {
        printf("\nVenda o carro!\n");
    }
    else if (consumo > 8 && consumo < 12)
    {
        printf("\nEcon�mico!\n");
    }
    else
    {
        printf("\nSuper econ�mico!\n");
    }
    
    return 0;
}

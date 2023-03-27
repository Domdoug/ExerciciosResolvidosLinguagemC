/*
Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:
|   Categoria   | Idade                 |
|   Infantil A  |   5 a 7               |
|   Infantil B  |   8 a 10              |
|   Juvenil A   |   11 a 13             |
|   Juvenil B   |   14 a 17             |
|   Sênior      |   maiores de 18 anos  |    
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int idade;
    printf("\nDigite a idade do nadador:\t");
    scanf("%d", &idade);

    if (idade>=5 && idade <=7)
    {
        printf("\nInfantil A\n");
    }
    else if (idade>=8 && idade <=10)
    {
        printf("\nInfantil B\n");
    }
    else if (idade >=11 && idade <=13)
    {
        printf("\nJuvenil A\n");
    }
    else if (idade >=14 && idade <=17)
    {
        printf("\nJuvenil B\n");
    }
    else
    {
        printf("\nSênior\n");
    }
    
    return 0;
}

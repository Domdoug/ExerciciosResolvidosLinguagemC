/*
Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se
for divisível por 400 ou se for divisível por 4 e não for divisível por 100.
Por exemplo: 1998, 1992, 1996., 2004, 2008.
Não são bissextos: 1900, 1700. Múltiplos de 100 e de 4, ou seja, falha na segunda regra.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int ano;
    printf("\nDigite um ano, para saber se é ano bissexto:\t");
    scanf("%d", &ano);

    if (ano % 400==0 || (ano % 4 == 0 && ano % 100 != 0))
    {
        printf("\nO ano de %d é bissexto!\n", ano);
    }
    else
    {
        printf("\nO ano de %d NÃO é bissexto!\n", ano);
    }

    return 0;
}

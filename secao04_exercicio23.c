/*
Determine se um determinado ano lido � bissexto. Sendo que um ano � bissexto se
for divis�vel por 400 ou se for divis�vel por 4 e n�o for divis�vel por 100.
Por exemplo: 1998, 1992, 1996., 2004, 2008.
N�o s�o bissextos: 1900, 1700. M�ltiplos de 100 e de 4, ou seja, falha na segunda regra.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int ano;
    printf("\nDigite um ano, para saber se � ano bissexto:\t");
    scanf("%d", &ano);

    if (ano % 400==0 || (ano % 4 == 0 && ano % 100 != 0))
    {
        printf("\nO ano de %d � bissexto!\n", ano);
    }
    else
    {
        printf("\nO ano de %d N�O � bissexto!\n", ano);
    }

    return 0;
}

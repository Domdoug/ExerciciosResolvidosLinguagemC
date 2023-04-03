/*
Escreva um programa que verifique quais n�meros entre 1000 e 9999 (inclusive) possuem
a propriedade seguinte: a soma dos dois d�gitos de mais baixa ordem com os dois
d�gitos de mais alta ordem elevada ao quadrado � igual ao pr�prio n�mero.
Por exemplo, para o inteiro 3025, temos que:
30 + 25 = 55
55^2 = 3025
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int ordem_baixa, ordem_alta, soma;

    for (int i = 1000; i <= 9999; i++)
    {
        ordem_baixa = i%100;    //dois �ltimos d�gitos do n�mero
        ordem_alta = i/100;     //dois primeiros d�gitos do n�mero
        soma = ordem_baixa + ordem_alta;
        if ((soma*soma)==i)
        {
            printf("\n%d", i);
        }
        
    }
    
    //printf("\n%d", 9876%100);
    
    //printf("\n%d", 9876/100);
    printf("\n");

    return 0;
}

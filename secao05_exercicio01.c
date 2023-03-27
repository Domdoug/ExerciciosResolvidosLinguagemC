/*
Faça um programa que determine o mostre os cinco primeiros múltiplos de 3,
considerando os números maiores que 0.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int cont=0;

    for (int i = 1; i < 16; i++)
    {
        if(i%3==0)
        {   
            cont = cont+1;
            printf("\nO %d º múltiplo é: %d", cont, i);
        }
    }
    printf("\n");
    return 0;
}

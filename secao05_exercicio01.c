/*
Fa�a um programa que determine o mostre os cinco primeiros m�ltiplos de 3,
considerando os n�meros maiores que 0.
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
            printf("\nO %d � m�ltiplo �: %d", cont, i);
        }
    }
    printf("\n");
    return 0;
}

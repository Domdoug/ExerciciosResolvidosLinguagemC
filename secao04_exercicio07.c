/*
Fa�a um programa que receba dois n�meros inteiros, mostre na tela o maior deles,
assim como a diferen�a existente entre ambos.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int a, b;

    printf("Digite dois n�meros inteiros:\t");
    scanf("%d%d", &a, &b);

    if (a>b)
    {
        printf("O valor maior entre %d e %d �: %d\n", a, b, a);
        }
    else if (b>a)
    {
        printf("O valor maior entre %d e %d �: %d\n", a, b, b);
    }
    else
    {
        printf("Os valores s�o iguais!\n");
    }
        
    return 0;
}


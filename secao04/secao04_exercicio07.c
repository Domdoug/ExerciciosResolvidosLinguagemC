/*
Faça um programa que receba dois números inteiros, mostre na tela o maior deles,
assim como a diferença existente entre ambos.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int a, b;

    printf("Digite dois números inteiros:\t");
    scanf("%d%d", &a, &b);

    if (a>b)
    {
        printf("O valor maior entre %d e %d é: %d\n", a, b, a);
        }
    else if (b>a)
    {
        printf("O valor maior entre %d e %d é: %d\n", a, b, b);
    }
    else
    {
        printf("Os valores são iguais!\n");
    }
        
    return 0;
}


/*
Faça um programa que, dados dois números inteiros, mostre na
tela o maior deles, assim como a diferença existente entre ambos.
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
        printf("A diferença entre %d e %d é igual a: %d\n", a, b, (a-b));
    }
    else
    {
        printf("O valor maior entre %d e %d é: %d\n", a, b, b);
        printf("A diferença entre %d e %d é igual a: %d\n", b, a, (b-a));
    }
    

    
    return 0;
}

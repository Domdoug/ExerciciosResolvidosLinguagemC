/*
Fa�a um programa que, dados dois n�meros inteiros, mostre na
tela o maior deles, assim como a diferen�a existente entre ambos.
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
        printf("A diferen�a entre %d e %d � igual a: %d\n", a, b, (a-b));
    }
    else
    {
        printf("O valor maior entre %d e %d �: %d\n", a, b, b);
        printf("A diferen�a entre %d e %d � igual a: %d\n", b, a, (b-a));
    }
    

    
    return 0;
}

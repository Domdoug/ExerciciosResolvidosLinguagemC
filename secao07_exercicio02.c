//Crie um programa que lê valores inteirose , em seguida, mostre na tela os valores lidos.

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int A[6];

    printf("\nDigite 6 valores inteiros:\n");
    for(int i=0; i<=5; i++)
    {    
        scanf("%d", &A[i]);
    }
    printf("\nOs valores digitados são:");
    for(int i=0; i<=5; i++)
    {    
        printf("\n%d", A[i]);
    }
    printf("\n");
    return 0;
}

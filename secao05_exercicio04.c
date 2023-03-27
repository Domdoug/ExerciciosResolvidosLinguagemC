/*
Escreva um programa que declare um inteiro, incialize-o com 0 e incremente-o de 
1000 em 1000, imprimindo seu valor na tela, até que seu valor seja 100000(cem mil)
*/

#include <stdio.h>

int main()
{
    for (int i = 0; i < 100000; i+=1000)
    {
        printf("\n%d", i);
    }
    printf("\n");
    return 0;
}

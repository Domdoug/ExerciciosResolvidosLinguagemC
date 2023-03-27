/*
Escreva um programa que leia um número inteiro positivo n e em seguida imprima
n linhas do chamado Triângulo de Floyd. Para n = 6, temos:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int num, cont=0, seq=0;

    printf("\nImprima n linhas do chamado Triângulo de Floyd");
    printf("\n==============================================");
    printf("\nDigite um número inteiro:\t");
    scanf("%d", &num);

    while (cont<=num)
    {
        for (int i = 1; i <= cont; i++)
        {
            seq++;    
            printf("%d ", seq);
        }
        printf("\n");
        cont++;
    }
    
    return 0;
}

/*
Faça um programa que leia um número inteiro positivo N e calcule a soma
dos N primeiros números naturais. Soma de PA.
*/

#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "");

    int num, soma=0;

    do
    {
        printf("\nDigite um número inteiro positivo:\t");
        scanf("%d", &num);
    } while (num<=0); //enquanto for negativo, continua no loop até digitar número positivo.
    

    printf("\nA soma dos %d primeiros números naturais é:", num);
    for (int i=1; i<=num; i++)
    {
        soma+=i;
    }
    printf("\n%d", soma);
    printf("\n");

    return 0;
}
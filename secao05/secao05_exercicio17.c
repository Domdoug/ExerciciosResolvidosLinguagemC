/*
Fa�a um programa que leia um n�mero inteiro positivo N e calcule a soma
dos N primeiros n�meros naturais. Soma de PA.
*/

#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "");

    int num, soma=0;

    do
    {
        printf("\nDigite um n�mero inteiro positivo:\t");
        scanf("%d", &num);
    } while (num<=0); //enquanto for negativo, continua no loop at� digitar n�mero positivo.
    

    printf("\nA soma dos %d primeiros n�meros naturais �:", num);
    for (int i=1; i<=num; i++)
    {
        soma+=i;
    }
    printf("\n%d", soma);
    printf("\n");

    return 0;
}
/*
Fa�a um programa que leia um n�mero inteiro positivo par N e imprima todos os n�meros
pares de 0 at� N em ordem decrescente.
*/

#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "");

    int num;

    do
    {
        printf("\nDigite um n�mero inteiro positivo par:\t");
        scanf("%d", &num);
    } while (num%2!=0);
    
    // alternativa: step 2 decrescente (for (int i = num; i >=0; i-=2)) 
    for (int i=num;i>=0;i-=2)
    {
        printf("\n%d", i);
    }
    printf("\n");

    return 0;
}
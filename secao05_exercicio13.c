/*
Fa�a um programa que leia um n�mero inteiro positivo par N e imprima todos os n�meros
pares de 0 at� N em ordem crescente.
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
    

    // duas alternativas: usar step 2 (for (int i = 0; i <= num; i+=2)) ou usar um if dentro do for para verificar (num%2==0)
    for (int i=0; i<=num;i++)
    {
        if(i%2==0){
            printf("\n%d",i);
        } 
    }
    printf("\n");

    return 0;
}
/*
Faça um programa que leia um número inteiro positivo ímpar N e imprima
todos os números ímpares de 1 até N em ordem crescente.
*/

#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "");

    int num;

    do
    {
        printf("\nDigite um número inteiro positivo ímpar:\t");
        scanf("%d", &num);
    } while (num%2==0 || num<=0); //enquanto for par, continua no loop até digitar número ímpar.
    

    // duas alternativas: usar step 2 (for (int i = 0; i <= num; i+=2)) ou usar um if dentro do for para verificar (i % 2!=0)
    for (int i=0; i<=num;i++)
    {
        if(i%2!=0){  //impar. Resto diferente de zero.
            printf("\n%d",i);
        } 
    }
    printf("\n");

    return 0;
}
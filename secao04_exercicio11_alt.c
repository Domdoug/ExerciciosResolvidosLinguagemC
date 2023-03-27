/*
Escreva um programa que leia um número inteiro maior do que zero e devolva,
na tela, a soma de todos os seus algarismos. Por exemplo, ao número 251
corresponderá o valor 8 (2 + 5 + 1). Se o número lido não for maior do que zero,
o programa terminará com a mensagem "Número inválido".
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int num, soma=0;

    printf("Digite um número inteiro maior que zero:\t");
    scanf("%d", &num);

    // processamento
    if (num<=0)
    {
        printf("\nNúmero Inválido. Número negativo ou igual a zero\n");
    }
    else
    {
        while (num != 0)
        {
            soma = soma + num % 10;
            num = num/10;
        }

        printf("\nA soma dos algarismos é igual a %d:\n", soma);    
    }
    return 0;
}
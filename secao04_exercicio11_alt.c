/*
Escreva um programa que leia um n�mero inteiro maior do que zero e devolva,
na tela, a soma de todos os seus algarismos. Por exemplo, ao n�mero 251
corresponder� o valor 8 (2 + 5 + 1). Se o n�mero lido n�o for maior do que zero,
o programa terminar� com a mensagem "N�mero inv�lido".
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int num, soma=0;

    printf("Digite um n�mero inteiro maior que zero:\t");
    scanf("%d", &num);

    // processamento
    if (num<=0)
    {
        printf("\nN�mero Inv�lido. N�mero negativo ou igual a zero\n");
    }
    else
    {
        while (num != 0)
        {
            soma = soma + num % 10;
            num = num/10;
        }

        printf("\nA soma dos algarismos � igual a %d:\n", soma);    
    }
    return 0;
}
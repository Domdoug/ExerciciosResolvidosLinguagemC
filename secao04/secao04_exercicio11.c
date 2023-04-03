/*
Escreva um programa que leia um n�mero inteiro maior do que zero e devolva,
na tela, a soma de todos os seus algarismos. Por exemplo, ao n�mero 251
corresponder� o valor 8 (2 + 5 + 1). Se o n�mero lido n�o for maior do que zero,
o programa terminar� com a mensagem "N�mero inv�lido".
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, soma, i;
    soma = 0;
    i = 1;
     
    printf("Digite um n�mero inteiro maior que zero:\t");
    scanf("%d", &num);

    // processamento
    if (num<=0)
    {
        printf("\nN�mero Inv�lido. N�mero negativo ou igual a zero\n");
    }
    else
    {
        while (num / round(pow(10,i)) > 0)
        {
            soma += (num % (int) pow(10, i+1)) / (int) round(pow(10,i));
            i = i + 1;
        }
        //soma += num % 10 + (num % 100) / 10 + (num % 1000) / 100 + (num / 1000); Esta f�rmula est� certa //unidade + dezena + centena + milhar
        soma += num % 10;
        printf("\nN�o faz nada1 %d\n", soma);
        printf("\nValor do i %d\n", i);
        printf("\nvalor do numerador %d\n", (num % (int) pow(10, i+1)));
        printf("\nvalor do denominador %d\n", round(pow(10,i)));
    }
    return 0;
}

/*
Escreva um algorítmo que leia um número inteiro entre 100 e 999 e imprima
na saída cada um dos algarismos que compõem o número.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, algarismo;

    do
    {
        printf("\nDigite um número inteiro entre 100 e 999:\t");
        scanf("%d", &num);
    } while (num>999 || num<100);

    algarismo = num/100; //centena
    printf("\n%d", algarismo);
    algarismo = num/10%10; //dezena
    printf("\n%d", algarismo);
    algarismo = num%10; //unidade
    printf("\n%d\n", algarismo);



    return 0;
}

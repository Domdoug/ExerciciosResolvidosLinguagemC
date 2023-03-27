/*
Faça um programa que receba dois números. Calcule e mostre:
a) A soma dos números pares desse intervalo de números, incluindo os números digitados;
b) A multiplicação dos números ímpares desse intervalo, incluindo os digitados.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num1, num2, soma_par=0, mult_impar=1, cont_par=0, cont_impar=0;

    printf("\nDigite o primeiro número:\t");
    scanf("%d", &num1);
    printf("\nDigite o segundo número:\t");
    scanf("%d", &num2);

    for (int i = num1; i <= num2; i++)
    {
        if (i%2==0)
        {
            soma_par += i;
            cont_par +=1;
        }
        else
        {
            mult_impar *= i;
            cont_impar +=1;
        }
        
    }
    printf("\nA soma dos %d números pares é igual a %d", cont_par, soma_par);
    printf("\nA soma dos %d números pares é igual a %d\n", cont_impar, mult_impar);

    return 0;
}

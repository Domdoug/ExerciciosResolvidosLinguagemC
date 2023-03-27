/*
Fa�a um programa que receba dois n�meros. Calcule e mostre:
a) A soma dos n�meros pares desse intervalo de n�meros, incluindo os n�meros digitados;
b) A multiplica��o dos n�meros �mpares desse intervalo, incluindo os digitados.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num1, num2, soma_par=0, mult_impar=1, cont_par=0, cont_impar=0;

    printf("\nDigite o primeiro n�mero:\t");
    scanf("%d", &num1);
    printf("\nDigite o segundo n�mero:\t");
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
    printf("\nA soma dos %d n�meros pares � igual a %d", cont_par, soma_par);
    printf("\nA soma dos %d n�meros pares � igual a %d\n", cont_impar, mult_impar);

    return 0;
}

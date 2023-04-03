/*
Ler uma sequência de números inteiros e determinar se eles são pares ou não.
Deverá ser informado o número de dados lidos e número de valores pares.
O processo termina quando for digitado o número 1000.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, num_pares=0, num_lidos=0;

    printf("\nDigite um número inteiro. 1000 para parar:\t");
    scanf("%d", &num);

    while (num!=1000)
    {
        if (num%2==0)
        {
            printf("\nO número é par!");
            num_pares += 1;
        }else
        {
            printf("\nO número é ímpar!");
        }
        num_lidos += 1;

        printf("\nDigite um número inteiro. 1000 para parar:\t");
        scanf("%d", &num);
    }

    printf("\nO total de números lidos é igual a %d", num_lidos);
    printf("\nO total de números pares é igual a %d\n", num_pares);

    return 0;
}

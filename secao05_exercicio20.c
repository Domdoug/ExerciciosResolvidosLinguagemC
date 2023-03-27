/*
Ler uma sequ�ncia de n�meros inteiros e determinar se eles s�o pares ou n�o.
Dever� ser informado o n�mero de dados lidos e n�mero de valores pares.
O processo termina quando for digitado o n�mero 1000.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, num_pares=0, num_lidos=0;

    printf("\nDigite um n�mero inteiro. 1000 para parar:\t");
    scanf("%d", &num);

    while (num!=1000)
    {
        if (num%2==0)
        {
            printf("\nO n�mero � par!");
            num_pares += 1;
        }else
        {
            printf("\nO n�mero � �mpar!");
        }
        num_lidos += 1;

        printf("\nDigite um n�mero inteiro. 1000 para parar:\t");
        scanf("%d", &num);
    }

    printf("\nO total de n�meros lidos � igual a %d", num_lidos);
    printf("\nO total de n�meros pares � igual a %d\n", num_pares);

    return 0;
}

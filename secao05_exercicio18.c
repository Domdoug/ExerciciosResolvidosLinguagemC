/*
Escreva um algoritmo que leia certa quantidade de n�meros e imprima o maior deles e
quantas vezes o maior n�mero foi lido. A quantidade de n�meros a serem lidos deve
ser fornecida pelo usu�rio.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num1, num2, contador=1, maior, freq_maior=1;
    
    printf("\nDigite a quantidade de n�meros a serem lidos:\t");
    scanf("%d", &num1);

    while (contador<=num1)
    {
        printf("\nDigite o %d � n�mero:\t", contador);
        scanf("%d", &num2);
        //menor, maior valor
        if (contador==1)
        {
            maior = num2;
        }
        else
        {
            if (num2>maior)
            {
                maior = num2;
                freq_maior=1;
            }else if (num2==maior)
            {
                freq_maior+=1;
            }
        }
        contador+=1;
    }
    printf("\nO maior n�mero � %d", maior);
    printf("\nA frequencia do maior n�mero lido � %d", freq_maior);
    printf("\n");

    return 0;
}

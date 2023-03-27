/*
Escreva um algoritmo que leia certa quantidade de números e imprima o maior deles e
quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve
ser fornecida pelo usuário.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num1, num2, contador=1, maior, freq_maior=1;
    
    printf("\nDigite a quantidade de números a serem lidos:\t");
    scanf("%d", &num1);

    while (contador<=num1)
    {
        printf("\nDigite o %d º número:\t", contador);
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
    printf("\nO maior número é %d", maior);
    printf("\nA frequencia do maior número lido é %d", freq_maior);
    printf("\n");

    return 0;
}

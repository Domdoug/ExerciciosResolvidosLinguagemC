/*
Faça um programa que some os números ímpares contidos em um intervalo definido pelo usuário.
O usuário define o valor inicial do intervalo e o valor final deste intervalo e o programa
deve somar todos os números ímpares contidos neste intervalo. Caso o usuário digite um 
intervalo inválido (começando por um valor maior que o valor final), deve ser escrito 
uma mensagem de erro na tela: "Intervalo de valores inválido" e o programa termina.
Exemplo de tela de saída:  Digite o valor inicial e o valor final: 5 10
Soma dos ímpares neste intervalo: 21
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int i_inf, i_sup, soma=0;

    printf("\ndigite o valor inicial e valor final:\t");
    scanf("%d %d", &i_inf, &i_sup);

    if (i_inf<i_sup)
    {
        for (int i = i_inf; i <= i_sup; i++)
        {
            if (i % 2 != 0)
            {
                soma+=i;
            }
            
        }
        printf("\nA soma dos números ímpares no intervalo de %d a %d é: %d\n", i_inf, i_sup, soma);
    }
    else
    {
        printf("\nIntervalo de valores inválidos!\n");
    }
    

    return 0;
}

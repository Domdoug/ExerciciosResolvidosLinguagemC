/*
Fa�a um programa que some os n�meros �mpares contidos em um intervalo definido pelo usu�rio.
O usu�rio define o valor inicial do intervalo e o valor final deste intervalo e o programa
deve somar todos os n�meros �mpares contidos neste intervalo. Caso o usu�rio digite um 
intervalo inv�lido (come�ando por um valor maior que o valor final), deve ser escrito 
uma mensagem de erro na tela: "Intervalo de valores inv�lido" e o programa termina.
Exemplo de tela de sa�da:  Digite o valor inicial e o valor final: 5 10
Soma dos �mpares neste intervalo: 21
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
        printf("\nA soma dos n�meros �mpares no intervalo de %d a %d �: %d\n", i_inf, i_sup, soma);
    }
    else
    {
        printf("\nIntervalo de valores inv�lidos!\n");
    }
    

    return 0;
}

/*
Elabore um programa que fa�a uma leitura de v�rios n�meros inteiros, at� que se digite um
n�mero negativo. O programa tem que retornar o maior e o menor n�mero lido.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, maior, menor, cont=0;

    printf("\nDigite n�mero inteiro. N�mero negativo para Sair:\t");
    scanf("%d", &num);    

    while (num>=0)
    {
        cont += 1;
        if (cont==1 || num > maior)
        {
            maior = num;
        }

        if (cont==1 || num < menor)
        {
            menor = num;
        }

        printf("\nDigite n�mero inteiro. N�mero negativo para Sair:\t");
        scanf("%d", &num);
    }
    
    printf("\nPrograma finalizado!");
    if (cont>1)
    {
        printf("\nO menor valor � %d", menor);
        printf("\nO maior valor � %d\n", maior);
    }

    return 0;
}

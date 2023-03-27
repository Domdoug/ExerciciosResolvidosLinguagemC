/*
Elabore um programa que faça uma leitura de vários números inteiros, até que se digite um
número negativo. O programa tem que retornar o maior e o menor número lido.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, maior, menor, cont=0;

    printf("\nDigite número inteiro. Número negativo para Sair:\t");
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

        printf("\nDigite número inteiro. Número negativo para Sair:\t");
        scanf("%d", &num);
    }
    
    printf("\nPrograma finalizado!");
    if (cont>1)
    {
        printf("\nO menor valor é %d", menor);
        printf("\nO maior valor é %d\n", maior);
    }

    return 0;
}

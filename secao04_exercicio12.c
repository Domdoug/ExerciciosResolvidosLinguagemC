/*
Ler um número inteiro. Se o número lido for negativo, escreva
a mensagem "Número inválido". Se o número for positivo, calcular
o logarítmo deste número.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    float resultado;
    printf("Digite um número inteiro:\t");
    fflush(stdout);
    scanf("%d", &num);

    // processamento
    if (num<=0)
    {
        printf("\nNúmero Inválido. Número negativo ou igual a zero\n");
    }
    else
    {
        resultado = log10(num);

        printf("\nO logaritmo de %d é igual a: %f\n", num, resultado);
    }
    return 0;
}

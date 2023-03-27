// Faça um programa que leia o valor de um produto e imprima o valor
// com desconto, tendo em vista que o desconto foi de 12%.

#include <stdio.h>

int main()
{
    /* code */
    float valor, valor_atual;
    float const desconto=0.12;
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    //fórmula
    valor_atual = valor*(1-desconto);

    //saída
    printf("O valor com desconto de 12%% eh %f\n", valor_atual);

    return 0;
}


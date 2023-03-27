// Faça um programa que leia o valor da hora de trabalho (em reais)
// e número de horas trabalhadas no mês. Imprima o valor a ser
// pago ao funcionário, adicionando 10% sobre o valor calculado.

#include <stdio.h>

int main()
{
    /* code */
    float valorhora, horas, remuneracao;
    const float adicional = 0.10;

    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valorhora);
    printf("digite o numero de horas trabalhadas: ");
    scanf("%f", &horas);

    //Formulação
    remuneracao = horas*valorhora*(1+adicional);

    printf("\nO valor pago ao funcionario eh %.2f\n", remuneracao);

    return 0;
}

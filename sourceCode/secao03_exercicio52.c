/*
Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve
ser repartido proporcionalmente ao valor que cada um deu
para a realização da aposta. Faça um programa que leia quanto cada
apostador investiu, o valor do prêmio e imprima quanto cada um
ganharia do prêmio com base no valor investido.
*/

#include <stdio.h>

int main()
{
    float aposta1, aposta2, aposta3, valor_apostas;
    float premio;
    float ganhador1, ganhador2, ganhador3;

    printf("Digite o valor da aposta do jogador 1 \t");
    scanf("%f",&aposta1);
    printf("Digite o valor da aposta do jogador 2 \t");
    scanf("%f",&aposta2);
    printf("Digite o valor da aposta do jogador 3 \t");
    scanf("%f",&aposta3);
    //Prêmio
    printf("Digite o valor do prêmio ganho \t");
    scanf("%f",&premio);
    
    //Cálculos
    valor_apostas = aposta1+aposta2+aposta3;
    ganhador1 = premio*aposta1/valor_apostas;
    ganhador2 = premio*aposta2/valor_apostas;
    ganhador3 = premio*aposta3/valor_apostas;

    //Saída
    printf("\nO valor do prêmio para cada jogador foi:\n");
    printf("O jogador 1 recebeu %.2f\n", ganhador1);
    printf("O jogador 2 recebeu %.2f\n", ganhador2);
    printf("O jogador 3 recebeu %.2f\n", ganhador3);

    return 0;
}

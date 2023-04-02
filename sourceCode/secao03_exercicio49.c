/*
Faça um programa para ler o horário (hora, minutos e seundo) de início e a duração,
em segundos, de uma experiência biológica. O programa deve resultar com o novo
horário (hora, minuto e segundo) do término da mesma.
*/

#include <stdio.h>

int main()
{   int hora, minuto, segundo, duracao, duracao1;
    int nova_hora, novo_minuto, novo_segundo;
    printf("\nDigite a hora de início do experimento:\t");
    scanf("%d", &hora);
    printf("\nDigite o minuto de início do experimento:\t");
    scanf("%d", &minuto);
    printf("\nDigite o segundo de início do experimento:\t");
    scanf("%d", &segundo);
    //Intervalo        
    printf("\nAgora digite a duração, em segundos, do experimento:\t");
    scanf("%d", &duracao);

    // calculos: 
    duracao1 = hora*3600+minuto*60+segundo;


    nova_hora = (duracao+duracao1) / 3600;
    novo_minuto = ((duracao+duracao1) % 3600) / 60;
    novo_segundo = (duracao+duracao1) % 60;

    printf("\n");
    printf("O tempo final em horas, minutos e segundos é %d horas, %d minutos e %d segundos", nova_hora, novo_minuto, novo_segundo);
    printf("\n");
    

    return 0;
}

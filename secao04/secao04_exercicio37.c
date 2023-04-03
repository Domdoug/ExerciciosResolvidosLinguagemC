/*
As tarifas de um certo parque de estacionamento são as seguintes:
a) 1ª e 2ª hora - R$ 1,00 cada;
b) 3ª e 4ª hora - R$ 1,40 cada;
c) 5ª hora e seguintes - R$ 2,00 cada;

O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem
estacionar durante 61 minutos pagará por duas horas que é o mesmo que pagaria se tivesse 
permanecido 120 minutos. Os momentos de chegada ao parque e partida deste são apresentados
na forma de pares de inteiros, representando horas e minutos. Por exemplo, o par 12 50
representará "dez para uma da tarde". Pretende-se criar um programa que, lidos pelo teclado
os momentos de chegada e de partida, escreva na tela o preço cobrado pelo estacionamento.
Admite-se que a chegada e a partida se dão com intervalo não superior a 24 horas. Portanto,
se uma dada hora de chegada for superior à da partida, isso não é uma situação de erro, antes
significará que a partida ocorreu no dia seguinte ao da chegada.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    int h_ent, m_ent, h_saida, m_saida, t_ent, t_saida, intervalo;
    float tarifa;

    printf("\n|====================|=============|");
    printf("\n|     Permanencia    |   Tarifa    |");
    printf("\n|====================|=============|");
    printf("\n|   1ª e 2ª hora     |R$ 1,00 cada |");
    printf("\n|   3ª e 4ª hora     |R$ 1,40 cada |");
    printf("\n|   5ª e seguintes   |R$ 2,00 cada |");
    printf("\n|====================|=============|");

    printf("\nDigite a hora e minutos, separadamente, no formato 'hh mm' da entrada:\t");
    scanf("%d %d", &h_ent, &m_ent);
    printf("\nDigite a hora e minutos, separadamente, no formato 'hh mm' da saída:\t");
    scanf("%d %d", &h_saida, &m_saida);

    //Tratamento do intervalo de permanencia
    //converter os valores das horas e minutos em total de minutos.
    t_ent = (h_ent*60) + m_ent;
    t_saida = (h_saida*60) + m_saida;

    //diferença entre os tempos de entrada e saída
    intervalo = t_saida - t_ent;

    if (intervalo<0)
    {
        intervalo+= 1440; //1440 corresponde a o dia (24 horas) em minutos. É para corrigir quando a hora fica negativa por "virar" o dia. 
    }

    //Cálculo da comissão
    if (intervalo<=120)
    {
        tarifa = 1*ceil((float) intervalo/60);
        printf("\nO tempo de estacionamento foi, em minutos, de: %d\n", intervalo);
        printf("\nO tempo de estacionamento foi de %d horas e %d minutos\n", intervalo/60, intervalo%60);
        printf("\nO valor da tarifa corresponde à: %.2f\n", tarifa);
    }
    else if (intervalo>120 && intervalo<=240)
    {
        tarifa = 1.4*ceil((float) intervalo/60);
        printf("\nO tempo de estacionamento foi, em minutos, de: %d\n", intervalo);
        printf("\nO tempo de estacionamento foi de %d horas e %d minutos\n", intervalo/60, intervalo%60);        
        printf("\nO valor da tarifa corresponde à: %.2f\n", tarifa);
    }
    else if (intervalo>240)
    {
        tarifa = 2*ceil((float) intervalo/60);
        printf("\nO tempo de estacionamento foi, em minutos, de: %d\n", intervalo);
        printf("\nO tempo de estacionamento foi de %d horas e %d minutos\n", intervalo/60, intervalo%60);        
        printf("\nO valor da tarifa corresponde à: %.2f\n", tarifa);
    }
    else
    {
        printf("\nValor de tarifa inválido. Reveja seus parâmetros!\n");
    }

    return 0;
}

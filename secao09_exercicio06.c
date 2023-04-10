/*
Faça uma função que receba 3 números inteiros como parâmetro, 
representando horas, minutos e segundos e os converta em segundos.
*/

#include <stdio.h>
#include <locale.h>

int tempo(int horas, int minutos, int segundos);

int main()
{
    setlocale(LC_ALL, "");
    int horas, minutos, segundos;
    printf("====Converter horas, minutos e segundos em segundos=====\n");
    printf("Digite as horas: ");
    scanf("%d", &horas);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    printf("O tempo em segundo corresponde à: %d\n", tempo(horas, minutos, segundos));

    return 0;
}

int tempo(int horas, int minutos, int segundos){

    int resultado;
    resultado = horas*3600 + minutos*60 + segundos;

    return resultado;
};

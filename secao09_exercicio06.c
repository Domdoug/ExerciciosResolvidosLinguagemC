/*
Fa�a uma fun��o que receba 3 n�meros inteiros como par�metro, 
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

    printf("O tempo em segundo corresponde �: %d\n", tempo(horas, minutos, segundos));

    return 0;
}

int tempo(int horas, int minutos, int segundos){

    int resultado;
    resultado = horas*3600 + minutos*60 + segundos;

    return resultado;
};

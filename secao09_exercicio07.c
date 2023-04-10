/*
Faça uma função que receba uma temperatura em graus Celsius e retorne-a
convertida em graus Fahrenheit. A fórmula de conversão é:
F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a 
temperatura em graus Celsius.
*/
#include <stdio.h>
#include <locale.h>

float ctof(float celsius);

int main()
{
    setlocale(LC_ALL, "");
    float celsius;
    printf("====Converter de Celsius para Fahrenheit=====\n");
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    printf("A temperatura em Fahrenheit: %f\n", ctof(celsius));

    return 0;
}

float ctof(float celsius){

    float resultado;
    resultado = celsius * (9.0/5.0) + 32.0;

    return resultado;
};

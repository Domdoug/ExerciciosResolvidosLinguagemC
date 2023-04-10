/*
Faça uma função que receba a altura e o raio de um cilindro circular e
retorne o volume do cilindro. O volume de um cilindro circular é
calculado por meio da seguinte fórmula:
V = pi * raio^2 * altura, onde pi = 3.141592.
*/

#include <stdio.h>
#include <locale.h>

float volume(float raio, float altura);

int main()
{
    setlocale(LC_ALL, "");
    float raio, altura;
    printf("====Cálculo do volume do cilindro circular=====\n");
    printf("Digite o valor do raio do cilindro: ");
    scanf("%f", &raio);
    printf("Digite o valor da altura do cilindro: ");
    scanf("%f", &altura);

    printf("Cálculo do volume do cilindro: %f\n", volume(raio, altura));

    return 0;
}

float volume(float raio, float altura){

    float resultado;
    const float pi = 3.141592;
    resultado = pi*(raio*raio)*altura;

    return resultado;
};
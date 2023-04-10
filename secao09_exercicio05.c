/*
Fa�a uma fun��o e um programa de teste para o c�lculo do volume de
uma esfera, sendo que o raio � passado por par�metro.
V = 4/3*pi*R^3.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

float volume(float raio);

int main()
{
    setlocale(LC_ALL, "");
    float raio;
    printf("======C�lculo do volume da esfera=======\n");
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    printf("Volume da esfera: %f\n", volume(raio));

    return 0;
}

float volume(float raio){

    float vol;
    float pi = 3.14;
    vol = (float) 4/3*pi*pow(raio, 3.0);

    return vol;
};


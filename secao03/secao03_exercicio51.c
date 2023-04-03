/*
Escreva um programa que leia as coordenadas x e y de pontos
no R^2 e calcule sua distância da origem (0,0).
*/

#include <stdio.h>
#include <math.h>

int main(){

    float x, y, d;
    printf("Digite a coordenada x: \t");
    scanf("%f", &x);
    printf("Digite a coordenada y: \t");
    scanf("%f", &y);

    //Cálculo
    d = sqrt(pow(x,2)+pow(y,2));

    printf("\nA distância dos pontos em relação à origem é: %f\n", d);


    return 0;

}
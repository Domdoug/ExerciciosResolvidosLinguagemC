// Leia a altura e o raio de um cilindro circular e imprima
// o volume do cilindro. O volume de um cilindro circular é
// calculado por meio da seguinte fórmula: V = pi*raio^2*altura
// onde pi = 3.141592.

#include <stdio.h>
#include <math.h>

int main()
{
    /* code */
    float altura, raio, volume;
    const float pi = 3.141592;

    printf("Digite a altura de um cilindro: ");
    scanf("%f", &altura);
    printf("Digite o raio deste cilindro: ");
    scanf("%f", &raio);

    //Fórmula
    volume = pi*pow(raio, 2)*altura;
    
    //saída
    printf("O volume o cilindro corresponde a %f\n", volume);

    return 0;
}

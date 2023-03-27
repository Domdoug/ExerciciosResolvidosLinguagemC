// Leia o valor do raio de um circulo e calcule e imprima
// a área do círculo correspondente.
// A área do círculo é pi*raio*raio, considere pi = 3.141592.

#include <stdio.h>

int main()
{
    /* code */
    float raio, area;
    //Declaração da constante
    const float pi = 3.141592;
    
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    //area
    area = pi*raio*raio;

    printf("O calculo da area do circulo corresponde a %f\n", area);

    return 0;
}

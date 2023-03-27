// Leia o tamanho do lado de um quadrado e imprima
// como resultado a sua área.

#include <stdio.h>

int main()
{
    /* code */
    float lado, area;

    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%f", &lado);

    area = lado*lado;

    printf("A area do quadrado eh %f\n", area);

    return 0;
}

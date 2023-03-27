// Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos
// três valores lidos.

#include <stdio.h>

int main()
{
    /* code */
    float A, B, C, R;
    printf("Digite o primeiro valor ");
    scanf("%f", &A);
    printf("Digite o segundo valor ");
    scanf("%f", &B);
    printf("Digite o terceiro valor ");
    scanf("%f", &C);

    //Fórmula
    R = A*A + B*B + C*C;

    //saída
    printf("O valor da soma dos quadrados dos três valores é %f\n", R);

    return 0;
}

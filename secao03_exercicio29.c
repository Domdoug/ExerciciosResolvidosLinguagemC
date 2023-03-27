// Leia quatro notas, calcule a média aritmética e imprima o resultado.

#include <stdio.h>

int main()
{
    /* code */
    float nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira nota ");
    scanf("%f", &nota1);
    printf("Digite a primeira nota ");
    scanf("%f", &nota2);
    printf("Digite a primeira nota ");
    scanf("%f", &nota3);
    printf("Digite a primeira nota ");
    scanf("%f", &nota4);

    //fórmula
    media = (nota1+nota2+nota3+nota4)/4.0;

    //saida
    printf("A média das quatro notas é %f\n", media);

    return 0;
}

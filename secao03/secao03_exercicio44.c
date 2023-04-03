// Receba a altura do degrau de uma escada e a altura que o usuário deseja
// alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá
// subir para atingir seu objetivo.

#include <stdio.h>

int main()
{
    /* code */
    float degraus, altura, qtde_degraus;
    printf("Qual a altura do degrau: ");
    scanf("%f", &degraus);
    printf("Qual a altura que você deseja alcançar na escada: ");
    scanf("%f", &altura);

    //Cálculo
    qtde_degraus = round(altura/degraus);

    printf("\nA quantidade de degraus será %f\n", qtde_degraus);

    return 0;
}

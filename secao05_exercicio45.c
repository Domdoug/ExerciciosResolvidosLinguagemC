/*
Faça um programa que converta uma velocidade expressa em km/h para m/s e vice-versa.
Você deve criar um menu com as duas opções de conversão e com uma opção para
finalizar o programa. O usuário poderá fazer quantas conversões desejar,
sendo que o programa só será finalizado quando a opção de finalizar foi escolhida.
Utilizar como inicio o exercício 10 e 11 da seção 03. 
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num;
    float vel;

    printf("=================CONVERSÕES=================================");
    
    do
    {
        printf("\nDigite um dos códigos numéricos da conversão:\t");
        printf("\n1 - Velocidade em km/h para m/s");
        printf("\n2 - Velocidade em m/s para km/h");
        printf("\n3 - Finalizar o programa\n");
        scanf("%d", &num);
    } while ( num!=1 && num!= 2 && num!=3 );

    switch (num)
    {
    case 1:
        printf("\nDigite a velocidade em km/h\t:");
        scanf("%f", &vel);
        printf("\nA velocidade de %f km/h em m/s é: %f", vel, vel/3.6); 
        break;
    case 2:
        printf("\nDigite a velocidade em m/s\t:");
        scanf("%f", &vel);
        printf("\nA velocidade de %f m/s em km/h é: %f", vel, 3.6*vel); 
        break;
    case 3:
        printf("\nPrograma finalizado!"); 
    }
    printf("\n");
    return 0;
}



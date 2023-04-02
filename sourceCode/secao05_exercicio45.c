/*
Fa�a um programa que converta uma velocidade expressa em km/h para m/s e vice-versa.
Voc� deve criar um menu com as duas op��es de convers�o e com uma op��o para
finalizar o programa. O usu�rio poder� fazer quantas convers�es desejar,
sendo que o programa s� ser� finalizado quando a op��o de finalizar foi escolhida.
Utilizar como inicio o exerc�cio 10 e 11 da se��o 03. 
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num;
    float vel;

    printf("=================CONVERS�ES=================================");
    
    do
    {
        printf("\nDigite um dos c�digos num�ricos da convers�o:\t");
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
        printf("\nA velocidade de %f km/h em m/s �: %f", vel, vel/3.6); 
        break;
    case 2:
        printf("\nDigite a velocidade em m/s\t:");
        scanf("%f", &vel);
        printf("\nA velocidade de %f m/s em km/h �: %f", vel, 3.6*vel); 
        break;
    case 3:
        printf("\nPrograma finalizado!"); 
    }
    printf("\n");
    return 0;
}



/*
O funcion�rio chamado Carlos tem um colega chamado Jo�o que recebe um sal�rio que 
equivale a um ter�o do seu sal�rio. Carlos gosta de fazer aplica��es na caderneta
de poupan�a e vai aplicar seu sal�rio integralmente nela, pois est� rendendo 2%
ao m�s. Jo�o aplicar� seu sal�rio integralmente no fundo de renda fixa que est�
rendendo 5% ao m�s. Construa um programa que dever� calcular e mostrar a quantidade
de meses necess�rios para que o valor pertencente a Jo�o iguale ou ultrapasse o valor
pertencente a Carlos. Teste com outros valores para as taxas.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    const float salC=1.0;
    float jurosP, jurosRF, montanteC=0, montanteJ=0;
    int t=1;

    printf("\nDigite a taxa de juros da caderneta de poupan�a:\t");
    scanf("%f", &jurosP);

    printf("\nDigite a taxa de juros da renda fixa:\t");
    scanf("%f", &jurosRF);

    while (jurosRF < jurosP)
    {
        printf("\nO valor da taxa de Renda Fixa deve ser maior que a taxa da poupan�a!");
        printf("\nDigite a taxa de juros da caderneta de poupan�a:\t");
        scanf("%f", &jurosP);

        printf("\nDigite a taxa de juros da renda fixa:\t");
        scanf("%f", &jurosRF);
    }

    //jurosP = 2.0;
    //jurosRF = 5.0;  
    montanteC =salC*(1+jurosP/100.0*t);
    montanteJ = (1.0/3.0)*salC*(1+jurosRF/100.0*t);

    while (montanteJ < montanteC) //Carlos tem sal�rio maior que Jo�o
    {
        t++;
        montanteC =montanteC*(1+jurosP/100.0*t);
        montanteJ =montanteJ*(1+jurosRF/100.0*t);
    }
    
    printf("\nO tempo t que iguala os montantes de cada um �: %d meses", t);
   
    printf("\n");
    return 0;

}

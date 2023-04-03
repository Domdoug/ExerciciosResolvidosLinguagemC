/*
O funcionário chamado Carlos tem um colega chamado João que recebe um salário que 
equivale a um terço do seu salário. Carlos gosta de fazer aplicações na caderneta
de poupança e vai aplicar seu salário integralmente nela, pois está rendendo 2%
ao mês. João aplicará seu salário integralmente no fundo de renda fixa que está
rendendo 5% ao mês. Construa um programa que deverá calcular e mostrar a quantidade
de meses necessários para que o valor pertencente a João iguale ou ultrapasse o valor
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

    printf("\nDigite a taxa de juros da caderneta de poupança:\t");
    scanf("%f", &jurosP);

    printf("\nDigite a taxa de juros da renda fixa:\t");
    scanf("%f", &jurosRF);

    while (jurosRF < jurosP)
    {
        printf("\nO valor da taxa de Renda Fixa deve ser maior que a taxa da poupança!");
        printf("\nDigite a taxa de juros da caderneta de poupança:\t");
        scanf("%f", &jurosP);

        printf("\nDigite a taxa de juros da renda fixa:\t");
        scanf("%f", &jurosRF);
    }

    //jurosP = 2.0;
    //jurosRF = 5.0;  
    montanteC =salC*(1+jurosP/100.0*t);
    montanteJ = (1.0/3.0)*salC*(1+jurosRF/100.0*t);

    while (montanteJ < montanteC) //Carlos tem salário maior que João
    {
        t++;
        montanteC =montanteC*(1+jurosP/100.0*t);
        montanteJ =montanteJ*(1+jurosRF/100.0*t);
    }
    
    printf("\nO tempo t que iguala os montantes de cada um é: %d meses", t);
   
    printf("\n");
    return 0;

}

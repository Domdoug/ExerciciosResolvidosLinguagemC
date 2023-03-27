/*
Faça um programa que preencha um valor com 10 números reais, calcule e mostre a quantidade de números negativos
e a soma dos números positivos desse vetor.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    const int limMax = 9; //10 números
    float num[limMax]; 
    int cont=0, contNeg=0;
    float soma=0;
    
    
    printf("\n====Cálculo da quantidade de números negativos e soma de números positivos====\n");
    do
    {
        printf("Digite o %d º número:\n", cont+1);
        scanf("%f", &num[cont]);

        if (num[cont]>0)
        {
            soma += num[cont];
        }else if (num[cont]<0)
        {
            contNeg++;
        }
        cont++;
           
    } while (cont <= limMax);

    //Saída
    printf("\nA quantidade de números negativos é igual a: %d", contNeg);
    printf("\nA soma dos números positivos é igual a: %.2f", soma);

    printf("\n");

    return 0;
}
/*
Fa�a um programa que preencha um valor com 10 n�meros reais, calcule e mostre a quantidade de n�meros negativos
e a soma dos n�meros positivos desse vetor.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    const int limMax = 9; //10 n�meros
    float num[limMax]; 
    int cont=0, contNeg=0;
    float soma=0;
    
    
    printf("\n====C�lculo da quantidade de n�meros negativos e soma de n�meros positivos====\n");
    do
    {
        printf("Digite o %d � n�mero:\n", cont+1);
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

    //Sa�da
    printf("\nA quantidade de n�meros negativos � igual a: %d", contNeg);
    printf("\nA soma dos n�meros positivos � igual a: %.2f", soma);

    printf("\n");

    return 0;
}
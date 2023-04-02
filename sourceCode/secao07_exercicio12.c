/*
Fazer um programa para ler 5 valores e em seguida, mostrar todos os valores lidos, juntamente com o
maior, o menor e a média dos valores.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    const int limMax = 4; //5 números
    float num[limMax]; 
    int cont=0, maior, menor;
    float soma=0, media;
    
    
    printf("\n====Cálculo do maior, o menor e a média dos valores====\n");
    do
    {
        printf("Digite o %d º número:\n", cont+1);
        scanf("%f", &num[cont]);

        if (cont==0)
        {
            maior = num[cont];
            menor = num[cont];
        }
        else
        {
            if (num[cont]>maior)
            {
                maior = num[cont];
            }
            else if (num[cont]<menor)
            {
                menor = num[cont];
            }
        }
        
        soma+=num[cont];
        cont++;
           
    } while (cont <= limMax);

    //cálculo
    media = soma / (float) cont;

    //Saída
    printf("\nO menor valor é %d, "
        "o maior é %d "
        "e a média dos valores do vetor é igual a: %.2f",
        menor,
        maior,
        media);

    printf("\n");

    return 0;
}
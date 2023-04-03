/*
Fazer um programa para ler 5 valores e em seguida, mostrar todos os valores lidos, juntamente com o
maior, o menor e a m�dia dos valores.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    const int limMax = 4; //5 n�meros
    float num[limMax]; 
    int cont=0, maior, menor;
    float soma=0, media;
    
    
    printf("\n====C�lculo do maior, o menor e a m�dia dos valores====\n");
    do
    {
        printf("Digite o %d � n�mero:\n", cont+1);
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

    //c�lculo
    media = soma / (float) cont;

    //Sa�da
    printf("\nO menor valor � %d, "
        "o maior � %d "
        "e a m�dia dos valores do vetor � igual a: %.2f",
        menor,
        maior,
        media);

    printf("\n");

    return 0;
}
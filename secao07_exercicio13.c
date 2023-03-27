/*
Fazer um programa para ler 5 valores e em seguida, mostrar a posição onde se encontram
o maior e o menor valor.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    const int limMax = 4; //5 números
    float num[limMax]; 
    int cont=0, maior, menor, Pmaior, Pmenor;
    
    printf("\n====Cálculo da posição do maior e do menor valor do vetor====\n");
    do
    {
        printf("Digite o %d º número:\n", cont+1);
        scanf("%f", &num[cont]);

        if (cont==0)
        {
            maior = num[cont];
            menor = num[cont];
            Pmaior = Pmenor = cont;
        }
        else
        {
            if (num[cont]>maior)
            {
                maior = num[cont];
                Pmaior = cont;

            }
            else if (num[cont]<menor)
            {
                menor = num[cont];
                Pmenor = cont;
            }
        }
        
        cont++;
           
    } while (cont <= limMax);

    //Saída
    printf("\nA posição do menor valor é %d, "
        "e a posição do maior é %d ",
        Pmenor,
        Pmaior
        );

    printf("\n");

    return 0;
}

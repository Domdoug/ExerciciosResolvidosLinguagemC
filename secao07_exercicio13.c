/*
Fazer um programa para ler 5 valores e em seguida, mostrar a posi��o onde se encontram
o maior e o menor valor.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    const int limMax = 4; //5 n�meros
    float num[limMax]; 
    int cont=0, maior, menor, Pmaior, Pmenor;
    
    printf("\n====C�lculo da posi��o do maior e do menor valor do vetor====\n");
    do
    {
        printf("Digite o %d � n�mero:\n", cont+1);
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

    //Sa�da
    printf("\nA posi��o do menor valor � %d, "
        "e a posi��o do maior � %d ",
        Pmenor,
        Pmaior
        );

    printf("\n");

    return 0;
}

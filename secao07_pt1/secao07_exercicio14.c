//Fa�a um programa que leia um vetor de 10 posi��es e verifique se existem valores iguais e os escreva na tela


#include <stdio.h>
#include <locale.h>

#define limMax 10

int main()
{
    setlocale(LC_ALL, "");

    //const int limMax = 4; //0, 1...9 (10 n�meros)
    int num[limMax], i, j; 
    int cont=0;
    
    printf("\n====Verificar se existem valores iguais no vetor====\n");
    do
    {
        printf("Digite o %d � n�mero na posi��o %d:\n", cont+1, cont);
        scanf("%d", &num[cont]);
        cont++;
    } while (cont < limMax);

    for (i = 0; i < limMax; i++)
    {
        for (j = i+1; j < limMax; j++)
        {
            if (num[i]==num[j])
            {
                printf("Valor %d igual nos �ndices %d e %d", num[i], i, j);
                for (j = j+1; j < limMax; j++)  //Ajeitar o passo, pois acaba repetindo. Acho que seja na posi��o
                {
                    if (num[i]==num[j])
                    {
                        printf(" e %d", j);
                    }
                }
                printf("\n");
            }
        }
    }
    //printf("\n");

    return 0;
}


/*
Fa�a um programa que receba do usu�rio um vetor com 10 posi��es. Em seguida, dever� ser
impresso o maior e o menor elemento do vetor.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    const int limMax = 9;
    int A[limMax]; //0, 1, 2,...9 = 10 posi��es
    int cont=0;
    int maior, menor;


    printf("\nLer %d n�meros para armazenar em um vetor\n", limMax+1);
    do
    {
        printf("Digite o %d � n�mero: ", cont+1);
        scanf("%d", &A[cont]);

        cont++;
    } while (cont <= limMax);

    for (int i = 0; i <= limMax; i++)
    {
        if (i==0)
        {
            maior=A[i];
            menor=A[i];
        }
        
        if (A[i]>maior)
        {
            maior = A[i];
        }
        else if (A[i]<menor)
        {
            menor=A[i];
        }
        
    }

    printf("\nO vetor digitado possui o maior valor %d e o menor valor %d", maior, menor);
    printf("\n");

    return 0;
}
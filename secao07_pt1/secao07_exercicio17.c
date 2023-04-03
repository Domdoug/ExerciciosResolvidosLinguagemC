//Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.

#include <stdio.h>
#include <locale.h>

#define limMax 10 // 10 posições

int main()
{
    setlocale(LC_ALL, "");

    //const int limMax = 9;
    int A[limMax]; //0, 1, 2,...9 = 10 posições
    int cont=0;
    
    printf("\nLer %d números para armazenar em um vetor\n", limMax);
    do
    {
        printf("Digite a posição %d do vetor de números de %d: ", cont, limMax);
        scanf("%d", &A[cont]);

        cont++;
    } while (cont < limMax);
    //Ordem que foi digitado
    printf("\nO vetor digitado, com zero no lugar dos números negativos é:");
    for (int i = 0; i < limMax; i++)
    {
        if (A[i]<0)
        {
            A[i] = 0;
        }
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
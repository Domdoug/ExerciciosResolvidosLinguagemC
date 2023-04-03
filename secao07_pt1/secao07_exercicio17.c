//Leia um vetor de 10 posi��es e atribua valor 0 para todos os elementos que possu�rem valores negativos.

#include <stdio.h>
#include <locale.h>

#define limMax 10 // 10 posi��es

int main()
{
    setlocale(LC_ALL, "");

    //const int limMax = 9;
    int A[limMax]; //0, 1, 2,...9 = 10 posi��es
    int cont=0;
    
    printf("\nLer %d n�meros para armazenar em um vetor\n", limMax);
    do
    {
        printf("Digite a posi��o %d do vetor de n�meros de %d: ", cont, limMax);
        scanf("%d", &A[cont]);

        cont++;
    } while (cont < limMax);
    //Ordem que foi digitado
    printf("\nO vetor digitado, com zero no lugar dos n�meros negativos �:");
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
/*
Fa�a um programa que leia um vetor de 8 posi��es e em seguida, leia tamb�m dois valores X e Y
quaisquer correspondentes a duas posi��es no vetor. Ao final, seu programa dever� escrever
a soma dos valores encontrados nas respectivas posi��es X e Y.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    const int limMax = 7;
    int A[limMax]; //0, 1, 2,...7 posi��es
    int X, Y; // posi��es do vetor: 0 a 7
    int cont=0;


    printf("Ler 8 n�meros para armazenar em um vetor\n");
    do
    {
        printf("Digite o %d � n�mero: ", cont+1);
        scanf("%d", &A[cont]);

        cont++;
    } while (cont <= limMax);

    printf("\nDigite duas posi��es (0 a 7) do vetor: ");
    scanf("%d%d", &X, &Y);

    printf("\nA soma dos dois valores escolhidos nas respectivas posi��es X[%d] e Y[%d] �: %d", X, Y, A[X]+A[Y]);
    printf("\n");

    return 0;
}

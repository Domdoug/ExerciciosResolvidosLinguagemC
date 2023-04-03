//Leia um vetor de 10 posi��es. Contar e escrever quantos valores pares ele possui.

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    const int limMax = 9;
    int A[limMax]; //0, 1, 2,...9 = 10 posi��es
    int cont=0, pares=0;


    printf("Ler 10 n�meros para armazenar em um vetor\n");
    do
    {
        printf("Digite o %d � n�mero: ", cont+1);
        scanf("%d", &A[cont]);

        cont++;
    } while (cont <= limMax);

    for (int i = 0; i <= limMax; i++)
    {
        if (A[i]%2==0)
        {
            pares++;
        }
        
    }

    printf("\nO vetor digitado possui %d valores pares", pares);
    printf("\n");

    return 0;
}
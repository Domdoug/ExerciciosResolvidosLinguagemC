/*
Fa�a um programa que leia um vetor de 5 posi��es para n�meros reais e depois, um c�digo inteiro.
Se o c�digo for zero, finalize o programa; se for 1, mostre o vetor na ordem direta; se for 2,
mostre o vetor na ordem inversa. Caso o c�digo for diferente de 1 e 2, escreva uma mensagem
informando que o c�digo � inv�lido.
*/

#include <stdio.h>
#include <locale.h>

#define limMax 5 // 5 posi��es

int main()
{
    setlocale(LC_ALL, "");

    //const int limMax = 4;
    int A[limMax], B[limMax]; 
    int cont=0, codigo;
    
    printf("\nLer %d n�meros para armazenar em um vetor\n", limMax);
    do
    {
        printf("Digite a posi��o %d do vetor de n�meros de %d: ", cont, limMax);
        scanf("%d", &A[cont]);

        cont++;
    } while (cont < limMax);

    do
    {
        printf("\n==============================");
        printf("\nEscolha a op��o abaixo:"
                "\n1-Ordem direta"
                "\n2-Ordem inversa"
                "\n0-Finalizar\n"
        );
        scanf("%d", &codigo);

        if (codigo!=0 && codigo!=1 && codigo!=2)
        {
            printf("\nOp��o inv�lida! Digite 1, 2 ou 0");
        }
        
    } while (codigo!=0 && codigo!=1 && codigo!=2);

    //Processamento
    //Consumo de cada categoria de instala��o
    switch (codigo)
    {
        case 0:
            return 0;
        case 1:
            //Ordem que foi digitado
            printf("\nO vetor digitado, na ordem digitada �: ");
            for (int i = 0; i < limMax; i++)
            {
                printf("%d ", A[i]);
            }
            break;
        case 2:
            printf("\nO vetor digitado, na ordem invertida �: ");
            for (int i = 0; i < limMax; i++)
            {
                B[limMax-1-i] = A[i];
            }
            
            for (int i = 0; i < limMax; i++)
            {
                printf("%d ", B[i]);
            }
            break;            

    }


    printf("\n");

    return 0;
}
/*
Faça um programa que leia um vetor de 5 posições para números reais e depois, um código inteiro.
Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem direta; se for 2,
mostre o vetor na ordem inversa. Caso o código for diferente de 1 e 2, escreva uma mensagem
informando que o código é inválido.
*/

#include <stdio.h>
#include <locale.h>

#define limMax 5 // 5 posições

int main()
{
    setlocale(LC_ALL, "");

    //const int limMax = 4;
    int A[limMax], B[limMax]; 
    int cont=0, codigo;
    
    printf("\nLer %d números para armazenar em um vetor\n", limMax);
    do
    {
        printf("Digite a posição %d do vetor de números de %d: ", cont, limMax);
        scanf("%d", &A[cont]);

        cont++;
    } while (cont < limMax);

    do
    {
        printf("\n==============================");
        printf("\nEscolha a opção abaixo:"
                "\n1-Ordem direta"
                "\n2-Ordem inversa"
                "\n0-Finalizar\n"
        );
        scanf("%d", &codigo);

        if (codigo!=0 && codigo!=1 && codigo!=2)
        {
            printf("\nOpção inválida! Digite 1, 2 ou 0");
        }
        
    } while (codigo!=0 && codigo!=1 && codigo!=2);

    //Processamento
    //Consumo de cada categoria de instalação
    switch (codigo)
    {
        case 0:
            return 0;
        case 1:
            //Ordem que foi digitado
            printf("\nO vetor digitado, na ordem digitada é: ");
            for (int i = 0; i < limMax; i++)
            {
                printf("%d ", A[i]);
            }
            break;
        case 2:
            printf("\nO vetor digitado, na ordem invertida é: ");
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
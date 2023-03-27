/*Crie um programa que lê 6 valores inteiros pares e em seguida, mostre na tela os valores lidos em ordem inversa
Dica: mesma lógica do programa desta seçao, exercício 08.
Adaptar para, no loop, contar até que o número de pares seja igual a 6, para, somente neste momento, sair do loop
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    const int limMax = 5;
    int A[limMax], B[limMax]; //0, 1, 2,...5 = 6 posições
    int contPares=0;
    int num;

    
    printf("\nLer %d números para armazenar em um vetor\n", limMax+1);
    do
    {
        printf("Digite números diversos até totalizar 6 números pares:\n");
        scanf("%d", &num);

        if (num%2==0)
        {
            A[contPares] = num;
            contPares++;
        }

    } while (contPares <= limMax);
    //Ordem que foi digitado
    printf("\nO vetor digitado, na ordem digitada é:");
    for (int i = 0; i <= limMax; i++)
    {
        printf("%d ", A[i]);
        B[limMax-i] = A[i];
    }

    printf("\nO vetor digitado, na ordem invertida é:");
    for (int i = 0; i <= limMax; i++)
    {
        printf("%d ", B[i]);
    }

    printf("\n");

    return 0;
}
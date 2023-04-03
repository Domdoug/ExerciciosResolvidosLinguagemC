/*Crie um programa que l� 6 valores inteiros pares e em seguida, mostre na tela os valores lidos em ordem inversa
Dica: mesma l�gica do programa desta se�ao, exerc�cio 08.
Adaptar para, no loop, contar at� que o n�mero de pares seja igual a 6, para, somente neste momento, sair do loop
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    const int limMax = 5;
    int A[limMax], B[limMax]; //0, 1, 2,...5 = 6 posi��es
    int contPares=0;
    int num;

    
    printf("\nLer %d n�meros para armazenar em um vetor\n", limMax+1);
    do
    {
        printf("Digite n�meros diversos at� totalizar 6 n�meros pares:\n");
        scanf("%d", &num);

        if (num%2==0)
        {
            A[contPares] = num;
            contPares++;
        }

    } while (contPares <= limMax);
    //Ordem que foi digitado
    printf("\nO vetor digitado, na ordem digitada �:");
    for (int i = 0; i <= limMax; i++)
    {
        printf("%d ", A[i]);
        B[limMax-i] = A[i];
    }

    printf("\nO vetor digitado, na ordem invertida �:");
    for (int i = 0; i <= limMax; i++)
    {
        printf("%d ", B[i]);
    }

    printf("\n");

    return 0;
}
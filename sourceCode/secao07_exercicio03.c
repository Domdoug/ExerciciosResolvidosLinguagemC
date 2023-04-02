/*
Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das
componentes deste vetor, armazenando o resultado em outro valor. Os conjuntos tem
10 elementos cada. Imprimir todos os conjuntos.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    const int limMax = 9;
    float num[limMax]; //10 numeros: 0, 1, ... 9
    int cont=0;

    printf("Ler 10 números para armazenar em um vetor\n");
    do
    {
        printf("Digite o %d º número: ", cont+1);
        scanf("%f", &num[cont]);

        cont++;
    } while (cont <= limMax);

    printf("\nVetor com o quadrado de cada elemento do vetor:");

    for (int i = 0; i <= limMax; i++)
    {
        printf("\n%.0f", (num[i]*num[i]));
    }
    printf("\n");
    return 0;
}

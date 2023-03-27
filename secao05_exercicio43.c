/*
Faça um programa que leia um número indeterminado de idades de indivíduos
(pare quando for informada a idade 0) e calcule a idade média desse grupo.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int idade, soma_idade=0, n=0;
    float media;

    printf("\nDigite idades para o cálculo da média. Zero (0) para encerrar a entrada de dados:\t");
    scanf("%d", &idade);

    while (idade!=0)
    {
        soma_idade += idade;
        n+=1;
        printf("\nDigite idades para o cálculo da média. Zero (0) para encerrar a entrada de dados:\t");
        scanf("%d", &idade);

    }
    
        media = (float) soma_idade/ (float) n;

        printf("\nA idade média das %d idades digitadas é: %.2f\n", n, media);
    
    return 0;
}

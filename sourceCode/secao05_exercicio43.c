/*
Fa�a um programa que leia um n�mero indeterminado de idades de indiv�duos
(pare quando for informada a idade 0) e calcule a idade m�dia desse grupo.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int idade, soma_idade=0, n=0;
    float media;

    printf("\nDigite idades para o c�lculo da m�dia. Zero (0) para encerrar a entrada de dados:\t");
    scanf("%d", &idade);

    while (idade!=0)
    {
        soma_idade += idade;
        n+=1;
        printf("\nDigite idades para o c�lculo da m�dia. Zero (0) para encerrar a entrada de dados:\t");
        scanf("%d", &idade);

    }
    
        media = (float) soma_idade/ (float) n;

        printf("\nA idade m�dia das %d idades digitadas �: %.2f\n", n, media);
    
    return 0;
}

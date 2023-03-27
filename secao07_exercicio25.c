/*Faça um programa que prencha um vetor de tamanho 100 com os 100 primeiros naturais
que não são múltiplos de 7 ou que terminam em 7.
*/

#include <stdio.h>
#include <locale.h>

#define limSup 1000   //intervalo de valores, para o sorteio.
# define posicoes 100

int main()
{
    setlocale(LC_ALL, "");

    int vetor[posicoes];
    int cont=0, i=0;
    
    do
    {
        if ((i%7!=0) && (i%10==7) )
        {
            vetor[cont] = i;
            cont++;
        }

        i++;
    } while (cont < posicoes);
    


    printf("\n100 primeiros naturais que não são múltiplos de 7 ou que terminam em 7\n");
    for (int i = 0; i < posicoes; i++)
        printf("%s(%d) = %d\n", "vetor", i, vetor[i]);

    printf("\n");

    return 0;

}
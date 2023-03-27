/*
Escreva um programa que leia um número inteiro positivo n e em seguida
imprima n linhas do chamado Triângulo de Pascal.
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1

Dica:
Primeiro preenche tudo com 0, depois preenche a primeira coluna com 1, e a diagonal principal 
com 1... depois vai percorrendo os números abaixo da diagonal principal, usando a regra assim:
Se X[j] == 0, então x[j] = x[i-1][j] + x[i-1][j-1]
==================Código central ====================
for (x = 1; x < linhas; x++)
    for (y = 1; y < x; y++) {
        if (matriz[x][y] == 0) matriz[x][y] = matriz[x-1][y] + matriz[x-1][y-1];
    }
*/

#include <stdio.h>
#include <locale.h>

//#define indice = 

int main()
{
    setlocale(LC_ALL,"");

    int num, cont=0, seq=0;

    printf("\nImprima n linhas do chamado Triângulo de Pascal");
    printf("\n==============================================");
    do
    {
        printf("\nDigite um número inteiro positivo n:\t");
        scanf("%d", &num);
    } while (num<=0);
    
    while (cont<=num)
    {
        for (int i = 1; i <= cont; i++)
        {
            if (cont<2)
            {
                //P[i] = 1;
            }
            else
            {
                /* code */
            }
                        
                seq++;    
                
                printf("%d ", seq);
        }
        printf("\n");
        cont++;
    }
    
    return 0;
}
/*
Faça um programa que leia um conjunto não determinado de valores, um de cada vez
 e escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada.
 Finalize a entrada de dados com um valor negativo ou zero.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    float num;
    
    do
    {
        printf("\nDigite um valor. Para sair do programa, digite zero ou valor negativo:\t");
        scanf("%f", &num);
        if (num>0)
        {
            printf("\nO valor do número %.0f ao quadrado é: %.0f", num, pow(num,2.0));
            printf("\nO valor do número %.0f ao cubo é: %.0f", num, pow(num,3.0));
            //sqrt exige double, por isso formatei com lf
            printf("\nO valor da raiz quadrada do número %.0f: %lf", num, sqrt(num)); 
        }

    } while (num>0);
    




    return 0;
}

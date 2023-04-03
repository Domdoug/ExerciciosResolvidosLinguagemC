/*
Escreva um programa para calcular o valor da série, para 5 termos
S = 0 + 1/2! + 2/4! + 3/6! + 4/8!
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int mult=1;
    float S=0;

   
    for (int i = 1; i <= 4; i++)    //o limite superior é 4, porque os 1º termo é 0
    {
        for (int j = 1; j <= 2*i; j++)    //poderia destacar este passo e fazer a função fatorial.
        {
            //p=2*j;
            mult*=j;
        }
        S += (float) i/(float) mult; //uso do cast float, para compatibilizar com S.
        mult = 1;
    }
    
    printf("\nO valor de S(n) para 5 termos é %f\n", S);

    return 0;
}
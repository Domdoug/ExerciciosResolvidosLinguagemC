/*Faça um programa que calcule e escreva o valor de S
    1   3   5   7       99       
S = --+ --+ --+ -- ...  --
    1   2   3   4       50
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float S=0;

    for (int i = 1; i <= 50; i++)
    {
        S += (float) (2*i-1)/(float) i;  //aplicar cast (float)
    }
    
    printf("\nO valor de (1/1) + (3/2) + (5/3) + 7/4 + ... + (99/50) é: %f\n", S);

    return 0;
}

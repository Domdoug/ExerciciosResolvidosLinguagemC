/*
Faça um programa que leia um valor N inteiro e positivo, calcule e mostre o valor
de E, conforme a fórmula a seguir:
E = 1 + 1/1! 1/2! 1/3! +...+1/N!
Esta série é o número e, de Euler ou Napier.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, mult=1;
    float E=1;

    do
    {
        printf("\ndigite um número inteiro e positivo:\t");
        scanf("%d", &num);
    } while (num<=0);
    
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)    //poderia utilizar a função fatorial da bibilioteca math.
        {
            mult*=j;
        }
        E += 1/(float) mult; //uso do cast float, para compatibilizar com h.
        mult = 1;
    }
    
    printf("\nO valor de E(n) é %f\n", E);

    return 0;
}
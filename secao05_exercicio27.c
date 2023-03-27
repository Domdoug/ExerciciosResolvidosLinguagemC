/*
Em matemátic, o número harmônico designado por H(n) define-se como sendo a soma
da série harmônica:
H(n) = 1 + 1/2 + 1/3 + 1/4 +...+ 1/n
Faça um programa que leia um valor n inteiro e positivo e apresente o valor de H(n).
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num;
    float h=1;

    do
    {
        printf("\ndigite um número inteiro e positivo:\t");
        scanf("%d", &num);
    } while (num<=0);
    
    for (int i = 2; i <= num; i++)
    {
        h += 1/(float) i; //uso do cast float, para compatibilizar com h.
    }
    
    printf("\nO valor de H(n) é %f\n", h);

    return 0;
}

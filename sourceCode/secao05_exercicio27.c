/*
Em matem�tic, o n�mero harm�nico designado por H(n) define-se como sendo a soma
da s�rie harm�nica:
H(n) = 1 + 1/2 + 1/3 + 1/4 +...+ 1/n
Fa�a um programa que leia um valor n inteiro e positivo e apresente o valor de H(n).
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
        printf("\ndigite um n�mero inteiro e positivo:\t");
        scanf("%d", &num);
    } while (num<=0);
    
    for (int i = 2; i <= num; i++)
    {
        h += 1/(float) i; //uso do cast float, para compatibilizar com h.
    }
    
    printf("\nO valor de H(n) � %f\n", h);

    return 0;
}

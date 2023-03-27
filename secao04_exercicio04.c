/*
Faça um programa que leia um número e, caso seja positivo,
calcule e mostre:
- O número digitado ao quadrado.
- A raiz quadrada do número digitado.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int num;
    printf("Digite um número:\t");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("\nO número é positivo e seu quadrado é:%f\n", pow(num,2));
        printf("\nO número é positivo e a raiz quadrada é:%f\n", sqrt(num));
    }else
    {
        printf("\nO número é inválido. Número negativo!\n");
    }
    
    


    return 0;
}

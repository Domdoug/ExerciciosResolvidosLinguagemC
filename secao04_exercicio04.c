/*
Fa�a um programa que leia um n�mero e, caso seja positivo,
calcule e mostre:
- O n�mero digitado ao quadrado.
- A raiz quadrada do n�mero digitado.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    
    int num;
    printf("Digite um n�mero:\t");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("\nO n�mero � positivo e seu quadrado �:%f\n", pow(num,2));
        printf("\nO n�mero � positivo e a raiz quadrada �:%f\n", sqrt(num));
    }else
    {
        printf("\nO n�mero � inv�lido. N�mero negativo!\n");
    }
    
    


    return 0;
}

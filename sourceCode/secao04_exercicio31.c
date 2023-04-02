/*
Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir,
verifique e mostre qual a cassificação dessa pessoa.
|   altura      |           peso
|               |   Até 60  |Entre 60 e 90 (inclusive)  |Acima de 90|
|menor que 1,20 |       A   |           D               |   G       |       
|de 1,20 a 1,70 |       B   |           E               |   H       |
|maior que 1,70 |       C   |           F               |   I       |
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    float peso, estatura;

    printf("\nUsar vírgula como ponto decimal, pois usei setlocale com definições do computador\n");
    printf("\nDigite a estatura da pessoa:\t");
    scanf("%f", &estatura);
    printf("\nDigite o peso da pessoa:\t");
    scanf("%f", &peso);

    if (estatura<1.20)
    {
        if (peso<60.0)
        {
            printf("\nClassificão A\n");
        }
        else if (peso>=60.0 && peso <=90.0)
        {
            printf("\nClassificão D\n");
        }
        else
        {
            printf("\nClassificão G\n");
        }
        
    }
    else if (estatura>=1.20 && estatura<=1.70)
    {
        if (peso<60.0)
        {
            printf("\nClassificão B\n");
        }
        else if (peso>=60.0 && peso <=90.0)
        {
            printf("\nClassificão E\n");
        }
        else
        {
            printf("\nClassificão H\n");
        }
    }
    else
    {
        if (peso<60.0)
        {
            printf("\nClassificão C\n");
        }
        else if (peso>=60.0 && peso <=90.0)
        {
            printf("\nClassificão F\n");
        }
        else
        {
            printf("\nClassificão I\n");
        }
    }
    return 0;
}

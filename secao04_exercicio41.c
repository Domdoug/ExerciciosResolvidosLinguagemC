/*
Fa�a um algoritmo que calcule o IMC de uma pessoa e mostre sua classifica��o de
acordo com a tabela abaixo:
|===========================|===============================|
|           IMC             |   Classifica��o               |
|===========================|===============================|
|           < 18,5          |   Abaixo do Peso              |
|       18,6 - 24,9         |   Abaixo do Peso              |
|       25,0 - 29,9         |   Saud�vel                    |
|       30,0 - 34,9         |   Peso em excesso             |
|       35,0 - 39,9         |   Obesidade Grau I            |
|           >= 40,0         |   Obesidade Grau II (severa)  |
|           < 18,5          |   Obesidade Grau III (m�rbida)|
|===========================|===============================|

*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float peso, altura, imc;

    printf("\nDigite o peso da pessoa:\t");
    scanf("%f", &peso);
    printf("\nDigite a altura. Usar a v�rgula como separador decimal:\t");
    scanf("%f", &altura);

    //F�rmula
    imc = peso / (altura*altura);
    printf("\nO valor do IMC � %.2f\n", imc);

    if (imc<18.5)
    {
        printf("\nAbaixo do peso\n");
    }
    else if (imc>=18.6 && imc<=24.9)
    {
        printf("\nSaud�vel\n");
    }
    else if (imc>=25.0 && imc<=29.9)
    {
        printf("\nPeso em excesso\n");
    }
    else if (imc>=30.0 && imc<=34.9)
    {
        printf("\nObesidade Grau I\n");
    }
    else if (imc>=35.0 && imc<=39.9)
    {
        printf("\nObesidade Grau II (severa)\n");
    }
    else if (imc>=40.0)
    {
        printf("\nObesidade Grau III (m�rbida)\n");
    }

    return 0;
}

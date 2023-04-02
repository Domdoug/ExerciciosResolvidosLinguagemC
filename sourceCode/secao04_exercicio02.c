/*
Leia um n�mero fornecido pelo usu�rio. Se esse n�mero for
positivo, calcule a raiz quadrada do n�mero. Se o n�mero for
negativo, mostre uma mensagem dizendo que o n�mero � inv�lido.
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

    //cálculo
    if (num > 0)
    {
        printf("A raiz quadrada de %d �: %f\n", num, sqrt(num));
    }else
    {
        printf("O n�mero %d � inv�lido. N�mero negativo\n", num);
    }

    return 0;
}

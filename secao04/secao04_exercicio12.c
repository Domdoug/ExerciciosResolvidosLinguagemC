/*
Ler um n�mero inteiro. Se o n�mero lido for negativo, escreva
a mensagem "N�mero inv�lido". Se o n�mero for positivo, calcular
o logar�tmo deste n�mero.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    float resultado;
    printf("Digite um n�mero inteiro:\t");
    fflush(stdout);
    scanf("%d", &num);

    // processamento
    if (num<=0)
    {
        printf("\nN�mero Inv�lido. N�mero negativo ou igual a zero\n");
    }
    else
    {
        resultado = log10(num);

        printf("\nO logaritmo de %d � igual a: %f\n", num, resultado);
    }
    return 0;
}

/*
Leia um número fornecido pelo usuário. Se esse número for
positivo, calcule a raiz quadrada do número. Se o número for
negativo, mostre uma mensagem dizendo que o número é inválido.
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

    //cÃ¡lculo
    if (num > 0)
    {
        printf("A raiz quadrada de %d é: %f\n", num, sqrt(num));
    }else
    {
        printf("O número %d é inválido. Número negativo\n", num);
    }

    return 0;
}

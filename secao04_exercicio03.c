/*
Leia um n�mero real. Se o n�mero for positivo imprima
a raiz quadrada, do contr�rio, imprima o n�mero ao quadrado.
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

    //C�lculo
    if (num>0){
        printf("N�mero positivo: A raiz quadrada de %f �:\n ", sqrt(num));
    }else{
        printf("N�mero negativo: O quadrado do n�mero %f �:\n ", pow(num,2));
    }


    return 0;
}

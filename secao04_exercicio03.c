/*
Leia um número real. Se o número for positivo imprima
a raiz quadrada, do contrário, imprima o número ao quadrado.
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

    //Cálculo
    if (num>0){
        printf("Número positivo: A raiz quadrada de %f é:\n ", sqrt(num));
    }else{
        printf("Número negativo: O quadrado do número %f é:\n ", pow(num,2));
    }


    return 0;
}

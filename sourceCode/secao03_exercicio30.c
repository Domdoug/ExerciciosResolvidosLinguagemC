// Leia um valor em real e a cotação do dolar. Em seguida, imprima o valor
// correspondentes em dólares.

#include <stdio.h>

int main()
{
    /* code */
    float R, D;
    printf("Digite um valor em real ");
    scanf("%f", &R);

    //cotação do dólar
    D = R/5.02;
    
    //saída
    printf("O valor correspondente em dólares é %f\n", D);

    return 0;
}

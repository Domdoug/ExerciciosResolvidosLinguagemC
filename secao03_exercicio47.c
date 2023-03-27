/*
Leia um número de 4 dígitos (de 1000 a 9999) e imprima
 1 dígito por linha
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, quociente, i;
    
    printf("Digite um número inteiro: ");
    printf("\n");
    scanf("%d", &n);

    printf("Impressão por linha");
    printf("\n");
    printf("=====================\n");

    // cálculo
    for (i = 3; i >= 0; i--)
    {
        quociente = n / pow(10,i);
        printf("%d\n", quociente);
        //printf("%d\n", n);
        //printf("%f\n", pow(10,i));
        //n = n - quociente*(float) pow(10, i);
        n -= quociente*(float) pow(10, i);
        //printf("%d\n", n);
        //n /= 10; //divide por 10. Similar a n = n / 10

    }

    return 0;
    
}

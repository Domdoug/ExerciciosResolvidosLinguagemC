/*
Fa�a uma fun��o para verificar se um n�mero � um quadrado perfeito.
Um quadrado perfeito � um n�mero inteiro n�o negativo que pode ser
expresso como o quadrado de outro n�mero inteiro: Ex.: 1, 4, 9...
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

float raiz(int valor); //prot�tipo de fun��o

int main()
{
    setlocale(LC_ALL, "");
    int num;
    printf("Quadrado de um n�mero perfeito\n");
    printf("Digite um n�mero inteiro n�o negativo: ");
    scanf("%d", &num);

    if (num % (int)raiz(num)==0)
        printf("O n�mero %d � um quadrado perfeito!\n", num);
    else
        printf("O n�mero %d n�o � um quadrado perfeito!\n", num);
    
    return 0;
}

float raiz(int valor){
    return sqrt(valor);
}
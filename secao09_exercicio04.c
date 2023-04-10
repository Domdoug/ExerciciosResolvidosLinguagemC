/*
Faça uma função para verificar se um número é um quadrado perfeito.
Um quadrado perfeito é um número inteiro não negativo que pode ser
expresso como o quadrado de outro número inteiro: Ex.: 1, 4, 9...
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

float raiz(int valor); //protótipo de função

int main()
{
    setlocale(LC_ALL, "");
    int num;
    printf("Quadrado de um número perfeito\n");
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &num);

    if (num % (int)raiz(num)==0)
        printf("O número %d é um quadrado perfeito!\n", num);
    else
        printf("O número %d não é um quadrado perfeito!\n", num);
    
    return 0;
}

float raiz(int valor){
    return sqrt(valor);
}
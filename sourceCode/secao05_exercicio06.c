/*
Faça um programa que leia 10 valores e imprima sua média.
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"");
    int valor, i=1, soma=0;
    float media;
    
    while (i<=10)
    {
        printf("Digite o %d º valor:\t", i);
        scanf("%d", &valor);
        soma+=valor;
        i+=1;
    }
    media = soma/10.0;
    printf("\nA soma corresponde à: %.2f\n", media);        
    return 0;
}
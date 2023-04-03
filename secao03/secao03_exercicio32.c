// Leia um número inteiro e imprima a soma do sucessor
// de seu triplo com o antecessor de seu dobro

#include <stdio.h>

int main()
{
    /* code */
    int numero, sucessor, antecessor, soma;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    //fórmula
    antecessor = 2*numero-1;
    sucessor = 3*numero+1;
    soma = antecessor+sucessor;

    //saida
    printf("O resultado do exemplo eh: %d\n", soma);

    return 0;
}

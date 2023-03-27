// Leia um número inteiro e imprima o seu antecessor
// e o seu sucessor.

#include <stdio.h>

int main()
{
    /* code */
    int numero, sucessor, antecessor;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    //fórmula
    antecessor = numero-1;
    sucessor = numero+1;

    //saida
    printf("O antecessor do numero digitado eh %d\n e o sucessor eh %d\n", antecessor, sucessor);

    return 0;
}

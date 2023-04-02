/*
Faça um algoritmo utilizando o comando while que mostra uma conataem regressiva
na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem "FIM!"
após a contagem.
*/

#include <stdio.h>

int main()
{
    int i=10;
    while (i>=0)
    {
        printf("\n%d", i);
        i-=1;
    }
    printf("\nFIM!\n");
    
    return 0;
}


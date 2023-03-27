/*
Faça um programa que peço ao usuário para digitar 10 valores e some-os.
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"");
    int valor, i=1, soma=0;
    
    while (i<=10)
    {
        printf("Digite o %d º valor:\t", i);
        scanf("%d", &valor);
        soma+=valor;
        i+=1;
    }
    printf("\nA soma corresponde à: %d\n", soma);        
    return 0;
}

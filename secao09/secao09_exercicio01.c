/*
Crie uma fun��o que recebe como par�metro um n�mero inteiro
e devolve o seu dobro.
*/

#include <stdio.h>
#include <locale.h>

int dobro(int valor); //prot�tipo de fun��o

int main()
{
    setlocale(LC_ALL, "");
    int num;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    printf("Valor do dobro do n�mero digitado: %d\n", dobro(num));
    
    return 0;
}

int dobro(int valor){
    return 2*valor;
}
/*
Crie uma função que recebe como parâmetro um número inteiro
e devolve o seu dobro.
*/

#include <stdio.h>
#include <locale.h>

int dobro(int valor); //protótipo de função

int main()
{
    setlocale(LC_ALL, "");
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("Valor do dobro do número digitado: %d\n", dobro(num));
    
    return 0;
}

int dobro(int valor){
    return 2*valor;
}
//Fa�a um programa que calcule e mostre a soma dos 50 primeiros n�meros pares = 2550

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int i=2, soma=0;

    do
    {
        if (i%2==0)
        {
            soma+=i;

        }
        i+=1;
        
    } while (i<=100);
    
    printf("\nA quantidade de n�meros pares � %d",(i-1)/2); //-1 porque o do loop faz o c�lculo antes da condi��o
    printf("\nA soma � igual �: %d", soma);    
    printf("\n");

    return 0;
}
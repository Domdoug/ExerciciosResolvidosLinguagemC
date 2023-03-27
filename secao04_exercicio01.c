/*
Faça um programa que receba dois números e mostre qual deles
é o maior.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num1, num2, resposta;
    //printf("")
    printf("Digite dois números:");
    fflush(stdout);
    scanf("%d%d", &num1, &num2);
    
    if (num1>num2)
    {
        resposta = num1;
    }else
    {
        resposta = num2;
    }
    
    printf("\nO máximo entre %d e %d é = %d\n",num1, num2, resposta);
    //getch();
    return 0;
}

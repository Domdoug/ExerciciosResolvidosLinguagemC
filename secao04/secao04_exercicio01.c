/*
Fa�a um programa que receba dois n�meros e mostre qual deles
� o maior.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num1, num2, resposta;
    //printf("")
    printf("Digite dois n�meros:");
    fflush(stdout);
    scanf("%d%d", &num1, &num2);
    
    if (num1>num2)
    {
        resposta = num1;
    }else
    {
        resposta = num2;
    }
    
    printf("\nO m�ximo entre %d e %d � = %d\n",num1, num2, resposta);
    //getch();
    return 0;
}

// Fa�a uma fun��o que receba dois n�meros e retorne qual deles � o maior.

#include <stdio.h>
#include <locale.h>

int maior(int num1, int num2);

int main()
{
    setlocale(LC_ALL, "");
    int num1, num2;
    printf("====C�lculo do maior n�mero=====\n");
    printf("Digite dois n�meros: ");
    scanf("%d %d", &num1, &num2);

    maior(num1, num2);

    printf("\nO maior valor entre %d e %d � %d\n", num1, num2, maior(num1, num2));
   
    return 0;
}

int maior(int num1, int num2){
    
    return (num1 > num2) ? num1 : num2;
};

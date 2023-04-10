// Faça uma função que receba dois números e retorne qual deles é o maior.

#include <stdio.h>
#include <locale.h>

int maior(int num1, int num2);

int main()
{
    setlocale(LC_ALL, "");
    int num1, num2;
    printf("====Cálculo do maior número=====\n");
    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);

    maior(num1, num2);

    printf("\nO maior valor entre %d e %d é %d\n", num1, num2, maior(num1, num2));
   
    return 0;
}

int maior(int num1, int num2){
    
    return (num1 > num2) ? num1 : num2;
};

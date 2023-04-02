/*
Faça um progrma que receba dois números e mostre qual deles
é o maior.
*/

#include <stdio.h>

int main()
{
    //float num1, num2;
    //printf("")
    int a,b,c;
    printf("insert two numbers:");
    scanf("%d%d", &a, &b);
    c = (a>b) ? a : b;
    printf("\nmaximum of %d and %d is = %d\n",a,b,c);
    getch();
    return 0;
}

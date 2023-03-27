/*
Faça um programa que calcule o terno pitagórico a, c, c para o qual a + b + c = 1000.
Um terno pitagórico é um conjunto de três números naturais a, b, c para o qual:
a^2 + b^2 = c^2
Por exemplo: 3^2 + 4^2 = 9 + 16 = 25 = 5^2
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    
    for (int a = 1; a <= 998; a++)
    {
        for (int b = 1; b < 998; b++)
        {
            for (int c = 1; c < 998; c++)
            {
                if (((a*a + b*b) == (c*c)) && (a+b+c)==1000)
                {
                    printf("\nOs valores de a, b e c são: %d, %d e %d", a, b, c);
                }
            }
            
        }
        
    }
    printf("\n");
    
    return 0;
}

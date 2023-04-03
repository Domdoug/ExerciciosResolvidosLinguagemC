/*
Faça um programa que calcule o maior número palíndromo a partir do produto de dois números
de 3 dígitos. Ex.: O maior palíndromo feito a partir do produto de dois números de dois dígitos é 9009 = 91*99
O maior palíndromo, da multiplicação de 913 x 993 é 906.609
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int fatorar, original, invertido=0, resto, limiteMax = 999, maior=0, num1, num2;

    // inverter o inteiro e armazenar na variável invertida
    for (int i = 1; i <= limiteMax; i++)  //9801 é o máximo valor para a multiplicação= 99*99. Para 999*999 = 998001
    {
        for (int j = 1; j <= limiteMax; j++)
        {
            fatorar = i*j;
            original = fatorar;
            while (fatorar != 0)
            {
                resto = fatorar % 10;
                invertido = invertido * 10 + resto;
                fatorar /= 10;
            }

            if (original == invertido && original > 10)
            {
                //palindromo. 
                //printf("\nPalindromo: %d", original);
                // Agora testar o maior
                if (maior < original)
                {
                    maior = original;
                    num1 = i;
                    num2 = j;
                }
            }
            invertido = 0;
            
        }
        
    }

    printf("\nO maior palíndromo, da multiplicação de %d x %d é %d\n", num1, num2, maior);
    
    return 0;
}

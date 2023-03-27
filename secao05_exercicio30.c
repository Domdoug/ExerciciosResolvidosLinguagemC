/*
Faça programas para calcular as seguintes sequências:
1 + 2 + 3 + 4 +...+ n
1 - 2 + 3 - 4 + 5 +...+ [(-1)^(n-1)]*n
1 + 3 + 5 + 7 +...+ (2n-1)
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, S1=0, S2=0, S3=0;
    
    do
    {
        printf("\ndigite um número inteiro e positivo:\t");
        scanf("%d", &num);
    } while (num<=0);
   
    for (int i = 1; i <= num; i++)
    {
        S1 += i;

        if (i%2==0)
        {
            S2 += -i;
        }
        else
        {
            S2 += i;
        }
        
        S3 += 2*i-1;
        
    }
    
    printf("\nO valor de S1(n) = 1 + 2 + 3 + 4 +...+ n para n=%d é: %d\n", num, S1);
    printf("\nO valor de S2(n) = 1 - 2 + 3 - 4 + 5 +...+ [(-1)^(n-1)]*n para n=%d é: %d\n", num, S2);
    printf("\nO valor de S3(n) = 1 + 3 + 5 + 7 +...+ (2n-1) para n=%d é: %d\n", num, S3);

    return 0;
}
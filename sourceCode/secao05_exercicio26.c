//Faça um algorítmo que encontre o primeiro múltiplo de 11, 13 ou 17, após número dado.

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num;

    printf("\nDigite um número:\t");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (i%11==0 || i%13==0 || i%17==0)
        {
            printf("\nO primeiro múltiplo de 11, 13 ou 17 é %d\n", i);
            num=i;
        }
        
    }
    
    return 0;
}

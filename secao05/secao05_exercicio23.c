// Fa�a um algoritmo que leia um n�mero positivo e imprima seus divisores.

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int num;

    printf("\nDigite um n�mero positivo:\t");
    scanf("%d", &num);

    if (num>0)
    {
        printf("\nOs divisores s�o:\n");
        for (int i = 1; i < num; i++)
        {
            if (num%i==0)
            {
                printf("%d\n",i);

            }
            
        }
        
    }

    

    return 0;
}

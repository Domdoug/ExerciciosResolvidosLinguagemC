//Fa�a um algor�tmo que encontre o primeiro m�ltiplo de 11, 13 ou 17, ap�s n�mero dado.

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num;

    printf("\nDigite um n�mero:\t");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (i%11==0 || i%13==0 || i%17==0)
        {
            printf("\nO primeiro m�ltiplo de 11, 13 ou 17 � %d\n", i);
            num=i;
        }
        
    }
    
    return 0;
}

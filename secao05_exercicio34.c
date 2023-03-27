/*
Fa�a um programa que calcule o menor n�mero divis�vel por cada um dos n�meros de
1 a 20? 
Ex.: 2520 � o menor n�mero que pode ser dividido por cada um dos n�meros
de 1 a 10, sem sobrar resto.
MMC: M�nimo M�ltiplo Comum.
Corresponde ao menor n�mero inteiro positivo, diferente de zero, 
que � m�ltiplo ao mesmo tempo de dois ou mais n�meros
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int seq=1, mmc;

    for (int i = 1; i <= 20; i++)
    {
        if (seq % i == 0)
        {
            mmc = seq;
        }
        else
        {
            i=1;
            seq+=1;
        }
        
    }

    printf("\nO menor n�mero divis�vel pelos n�meros de 1 a 20 (mmc) �: %d", mmc);
    printf("\n");
    //O menor n�mero divis�vel pelos n�meros de 1 a 20 (mmc) �: 232792560

    return 0;
}


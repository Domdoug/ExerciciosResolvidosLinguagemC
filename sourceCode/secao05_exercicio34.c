/*
Faça um programa que calcule o menor número divisível por cada um dos números de
1 a 20? 
Ex.: 2520 é o menor número que pode ser dividido por cada um dos números
de 1 a 10, sem sobrar resto.
MMC: Mínimo Múltiplo Comum.
Corresponde ao menor número inteiro positivo, diferente de zero, 
que é múltiplo ao mesmo tempo de dois ou mais números
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

    printf("\nO menor número divisível pelos números de 1 a 20 (mmc) é: %d", mmc);
    printf("\n");
    //O menor número divisível pelos números de 1 a 20 (mmc) é: 232792560

    return 0;
}


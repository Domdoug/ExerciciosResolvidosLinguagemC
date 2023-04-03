/*
Um funcionário recebe aumento anual. Em 1995 foi contratado por 2.000 reais.
Em 1996 recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem
ao dobro do anterior. Faça um programa que determine o salário atual do funcionário.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "");

    float sal=2000.0;
    const float reajuste1996=0.015;
    const float reajusteAnual = 0.03;
    int ano;
    
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);

    ano = tm.tm_year + 1900;
    //printf("Data: %d\n", ano);

    for (int i = 1996; i <= ano; i++)
    {
        if (i == 1996)
        {
            sal+=sal*reajuste1996;
        }
        else if (i >= 1997)
        {
            sal+=sal*reajusteAnual;
        }
    }
    printf("\nO Salário atual é igual a %.2f reais", sal);
    printf("\n");
    
    return 0;
}

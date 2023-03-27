// Idêntico ao exercicio 35

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int dd, mm, yy;

    printf("Digite a data no formato (DD/MM/YYYY): ");
    scanf_s("%d/%d/%d", &dd, &mm, &yy);

    //check year
    if (yy >= 1000 && yy <= 9999)
    {
        //check month
        if (mm >= 1 && mm <= 12)
        {
            //check days
            if ((dd >= 1 && dd <= 31) && (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12))
                printf("Data válida.\n");
            else if ((dd >= 1 && dd <= 30) && (mm == 4 || mm == 6 || mm == 9 || mm == 11))
                printf("Data válida.\n");
            else if ((dd >= 1 && dd <= 28) && (mm == 2))
                printf("Data válida.\n");
            else if (dd == 29 && mm == 2 && (yy % 400 == 0 || (yy % 4 == 0 && yy % 100 != 0)))
                printf("Data válida.\n");
            else
                printf("Dia inválido.\n");
        }
        else
        {
            printf("Mês inválido.\n");
        }
    }
    else
    {
        printf("Ano inválido.\n");
    }
    return 0;
}
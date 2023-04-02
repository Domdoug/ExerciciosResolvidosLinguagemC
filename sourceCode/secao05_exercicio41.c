/*
Fa�a um programa que calcula a associa��o em paralelo de dois resistores R1 e R2 fornecidos
pelo usu�rio via teclado. O programa fica pedindo estes valores e calculando at� que o
usu�rio entre com um valor para resistencia igual a zero.
R = (R1*R2)/(R1+R2)
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float R1, R2, R;

    printf("\nDigite os valores de dois resistores em ohms. Para sair digite 0 (zero) para qualquer:\t");
    scanf("%f %f", &R1, &R2);

    while (R1>0 && R2>0)
    {
        R = (R1*R2)/(R1+R2);
        printf("\nO valor da resistencia em paralelo � %f\n", R);

        printf("\nDigite os valores de dois resistores em ohms. Para sair digite 0 (zero) para qualquer:\t");
        scanf("%f %f", &R1, &R2);
    }
    
    return 0;
}
/*
Faça um programa que receba a altura e o sexo de uma pessoa
e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas
(onde h corresponde à altura):
homens: (72.7*h) - 58
mulheres: (62.1*h) - 44.7
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float h, peso_ideal;
    char sexo;
    //printf("Digite a altura (em metros) e o sexo (M ou F) da pessoa:\t");
    //scanf("%f %c", &h, &sexo);
    printf("Digite a altura (em metros):\t");
    scanf("%f", &h);

    printf("Digite o sexo (m/M ou f/F) da pessoa:\t");
    //scanf(" %c", &sexo);
    fflush(stdin);
    sexo = getchar(); // se o uso do scanf falhar, usar getchar
    
    //cálculo
    if (sexo=='f' || sexo=='F')  
    {
        peso_ideal = (62.1 * h) - 44.7;
    }
    else if (sexo=='m' || sexo=='M')
    {
        peso_ideal = (72.7 * h) - 58;
    }
    
    //saída
    printf("\nO peso ideal da pessoa do sexo %c e estatura %f é, em kg %f:\n", sexo, h, peso_ideal);

    return 0;
}

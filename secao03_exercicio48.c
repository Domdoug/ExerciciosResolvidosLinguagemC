/*
Leia um valor inteiro em segundos e imprima-o em 
horas, minutos e segundos.
*/

#include <stdio.h>

int main()
{
    int horas, minutos, segundos;
    printf("\nDigite um valor inteiro em unidade de segundos:\t");
    scanf("%d", &segundos);

    // Calculos
    horas = segundos / 3600; //aqui sai o quociente
    minutos = (segundos % 3600)/60; // na primeira parte sai o resto da divisão
    segundos = segundos%60;
    
    printf("\n");
    printf("O tempo em horas, minutos e segundos é %d horas, %d minutos e %d segundos", horas, minutos, segundos);
    printf("\n");
    return 0;
}


/*
Implemente um programa que calcule o ano de nascimento
de uma pessoa a partir de sua idade e do ano atual.
*/ 

#include <stdio.h>
#include <time.h>

int main()
{
    int ano_nasc, ano_atual, idade;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    
    printf("Digite a sua idade:\t");
    scanf("%d", &idade);

    //calculo
    ano_atual = tm.tm_year + 1900;
    ano_nasc = ano_atual-idade;

    //saida
    printf("\n");
    printf("O ano de nascimento é: %d\n", ano_nasc);
    return 0;
}

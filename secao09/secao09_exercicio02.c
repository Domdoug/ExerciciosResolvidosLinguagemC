/*
Faça uma função que receba a data atual (dia, mês e ano em inteiro)
e exiba-a na tela no formato textual por extenso. Exemplo: Data: 01/01/2000,
imprimir: 1 de janeiro de 2000
*/

#include <stdio.h>
#include <locale.h>


void extenso(int dia, int mes, int ano);

int main()
{
    setlocale(LC_ALL, "");
    int dia, mes, ano;
    printf("Digite o dia de hoje (1 a 31):\t");
    scanf("%d", &dia);
    printf("Digite o mês atual (1 a 12):\t");
    scanf("%d", &mes);
    printf("Digite o ano atual:\t");
    scanf("%d", &ano);

    extenso(dia, mes, ano);

    return 0;
}

void extenso(int dia, int mes, int ano){
    char meses[][12]={"janeiro",
                    "fevereiro",
                    "março",
                    "abril",
                    "maio",
                    "junho",
                    "julho",
                    "agosto",
                    "setembro",
                    "outubro",
                    "novembro",
                    "dezembro"
    };

    printf("Data por extenso: %d de %s de %d\n", dia, meses[mes-1], ano);

}
/*
Um empresa decide dar um aumento aos seus funcion�rios de acordo com uma tabela que
considera o sal�rio atual e o tempo de servi�o de cada funcion�rio. Os funcion�rios
com menor sal�rio ter�o um aumento proporcionalmente maior do que os funcion�rios
com um sal�rio maior e, conforme o tempo de servi�o na empresa, cada funcion�rio ir�
receber um b�nus adicional de sal�rio. Fa�a um programa que leia:
a) O valor do sal�rio atual do funcion�rio;
b) O tempo de servi�o desse funcion�rio na empresa (n�mero de anos de trabalho na empresa).
Use as tabelas abaixo para calcular o sal�rio reajustdo deste funcion�rio e imprima o valor
do sal�rio final reajustado ou uma mensagem, caso o funcion�rio n�o tenha direito a nenhum 
aumento.
|===================|============|==================|===============|
|   Sal�rio         |Reajuste(%) | Tempo de servi�o |    B�nus      |
|===================|============|==================|===============|
| At� 500,00        |   25%      |  Abaixo de 1 ano |  Sem b�nus    |
| At� 1000,00       |   20%      |  De 1 a 3 anos   |    100,00     |
| At� 1500,00       |   15%      |  De 4 a 6 anos   |    200,00     |
| At� 2000,00       |   10%      |  De 7 a 10 anos  |    300,00     |
| Acima de 2000,00  |Sem reajuste|  Mais de 10 anos |    500,00     |
|===================|============|==================|===============|

*/

#include <stdio.h>
#include <locale.h>

int bonus(int ts) {

    float bonificacao;
    //B�nus
    if (ts<1)
    {
        bonificacao = 0.0; //Sem bonus
    }
    else if (ts>=1 && ts<=3)
    {
        bonificacao = 100.0;
    }
    else if (ts>=4 && ts<=6)
    {
        bonificacao = 200.0;
    }
    else if (ts>=7 && ts<=10)
    {
        bonificacao = 300.0;
    }
    else if (ts>10)
    {
        bonificacao = 500.0;
    }
    else
    {
        float bonificacao = 0;
        printf("\nTempo de Servi�o inv�lido. Reveja o tempo de servi�o digitado.\n");
        getchar(); //Sair do programa
    }
    return bonificacao;    

}


int main()
{
    setlocale(LC_ALL,"");

    float salario_atual, salario_reaj;
    int ts;

    printf("\n|===================|=============|==================|===============|");
    printf("\n|   Sal�rio         |Reajuste(%%) | Tempo de servi�o |    B�nus      |");
    printf("\n|===================|=============|==================|===============|");
    printf("\n| At� 500,00        |   25%%      |  Abaixo de 1 ano |  Sem b�nus    |");
    printf("\n| At� 1000,00       |   20%%      |  De 1 a 3 anos   |    100,00     |");
    printf("\n| At� 1500,00       |   15%%      |  De 4 a 6 anos   |    200,00     |");
    printf("\n| At� 2000,00       |   10%%      |  De 7 a 10 anos  |    300,00     |");
    printf("\n| Acima de 2000,00  |Sem reajuste |  Mais de 10 anos |    500,00     |");
    printf("\n|===================|=============|==================|===============|");
   
    printf("\nDigite o valor atual do funcion�rio:\t");
    scanf("%f", &salario_atual);
    printf("\nDigite o tempo de servi�o do funcion�rio, em anos:\t");
    scanf("%d", &ts);

    //Sal�rio reajustado
    if (salario_atual<=500)
    {
        salario_reaj = salario_atual*(1+0.25) + bonus(ts);
    }
    else if (salario_atual<=1000)
    {
        salario_reaj = salario_atual*(1+0.20) + bonus(ts);
    }
    else if (salario_atual<=1500)
    {
        salario_reaj = salario_atual*(1+0.15) + bonus(ts);
    }
    else if (salario_atual<=2000)
    {
        salario_reaj = salario_atual*(1+0.10) + bonus(ts);
    }
    else if (salario_atual>2000)
    {
        salario_reaj = salario_atual + bonus(ts);
    }
    else
    {
        printf("\nSal�rio ou tempo de servi�o inv�lido. Reveja-os.\n");
        getchar(); //Sair do programa
    }

    printf("\nO Sal�rio final reajustado ser� de: %.2f\n", salario_reaj);

    return 0;
}

/*
Um empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que
considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários
com menor salário terão um aumento proporcionalmente maior do que os funcionários
com um salário maior e, conforme o tempo de serviço na empresa, cada funcionário irá
receber um bônus adicional de salário. Faça um programa que leia:
a) O valor do salário atual do funcionário;
b) O tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).
Use as tabelas abaixo para calcular o salário reajustdo deste funcionário e imprima o valor
do salário final reajustado ou uma mensagem, caso o funcionário não tenha direito a nenhum 
aumento.
|===================|============|==================|===============|
|   Salário         |Reajuste(%) | Tempo de serviço |    Bônus      |
|===================|============|==================|===============|
| Até 500,00        |   25%      |  Abaixo de 1 ano |  Sem bônus    |
| Até 1000,00       |   20%      |  De 1 a 3 anos   |    100,00     |
| Até 1500,00       |   15%      |  De 4 a 6 anos   |    200,00     |
| Até 2000,00       |   10%      |  De 7 a 10 anos  |    300,00     |
| Acima de 2000,00  |Sem reajuste|  Mais de 10 anos |    500,00     |
|===================|============|==================|===============|

*/

#include <stdio.h>
#include <locale.h>

int bonus(int ts) {

    float bonificacao;
    //Bônus
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
        printf("\nTempo de Serviço inválido. Reveja o tempo de serviço digitado.\n");
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
    printf("\n|   Salário         |Reajuste(%%) | Tempo de serviço |    Bônus      |");
    printf("\n|===================|=============|==================|===============|");
    printf("\n| Até 500,00        |   25%%      |  Abaixo de 1 ano |  Sem bônus    |");
    printf("\n| Até 1000,00       |   20%%      |  De 1 a 3 anos   |    100,00     |");
    printf("\n| Até 1500,00       |   15%%      |  De 4 a 6 anos   |    200,00     |");
    printf("\n| Até 2000,00       |   10%%      |  De 7 a 10 anos  |    300,00     |");
    printf("\n| Acima de 2000,00  |Sem reajuste |  Mais de 10 anos |    500,00     |");
    printf("\n|===================|=============|==================|===============|");
   
    printf("\nDigite o valor atual do funcionário:\t");
    scanf("%f", &salario_atual);
    printf("\nDigite o tempo de serviço do funcionário, em anos:\t");
    scanf("%d", &ts);

    //Salário reajustado
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
        printf("\nSalário ou tempo de serviço inválido. Reveja-os.\n");
        getchar(); //Sair do programa
    }

    printf("\nO Salário final reajustado será de: %.2f\n", salario_reaj);

    return 0;
}

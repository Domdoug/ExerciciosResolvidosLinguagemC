// Receba o salário-bae de um funcionário. Calcule e imprima o 
// salário a receber, sabendo-se que esse funcionário
// tem uma gratificação de 5% sobre o salário-base.
// Além disso, ele paga &% de imposto sobre o salário-base.

#include <stdio.h>

int main()
{
    /* code */
    float salario_base, salario_liquido;
    const float gratificacao = 0.05;
    const float ir = 0.07;

    printf("Informe o salário-base do funcionário: ");
    scanf("%f", &salario_base);

    //cálculo
    salario_liquido = salario_base*(1+gratificacao)*(1-ir);

    printf("\nO valor liquido recebido pelo funcionário é: %.2f\n", salario_liquido);

    return 0;
}


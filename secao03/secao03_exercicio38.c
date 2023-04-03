// Leia o salário de um funcionário. Calcule e imprima
// o valor do novo salário, sabendo que ele recebeu
// um aumento de 25%

#include <stdio.h>

int main()
{
    /* code */
    float salario, novo_salario;
    const float reajuste = 0.25;
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    //Fórmula
    novo_salario=salario*(1+reajuste);

    printf("O novo salario com o reajuste de 25%% foi de %.2f: ", novo_salario);

    return 0;
}

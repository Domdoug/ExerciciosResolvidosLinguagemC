/*
Leia o salário de um trabalhador e o valor da prestação de um empréstimo.
Se a prestação for maior que 20% do salário, imprima:
"Empréstimo não concedido", caso contrário, imprima: "Empréstimo concedido"
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float salario, emprestimo;
    printf("Digite o salário do trabalhador:\t");
    scanf("%f", &salario);
    printf("Digite o salário do trabalhador:\t");
    scanf("%f", &emprestimo);

    //Cálculos
    if (emprestimo>0.2*salario)
    {
        printf("\nEmpréstimo não concedido. Valor maior que 20%% do salário.\n");
    }
    else
    {
        printf("\nEmpréstimo concedido.\n");
    }
        
    return 0;
}

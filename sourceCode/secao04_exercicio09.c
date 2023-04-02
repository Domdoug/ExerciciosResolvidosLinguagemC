/*
Leia o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo.
Se a presta��o for maior que 20% do sal�rio, imprima:
"Empr�stimo n�o concedido", caso contr�rio, imprima: "Empr�stimo concedido"
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float salario, emprestimo;
    printf("Digite o sal�rio do trabalhador:\t");
    scanf("%f", &salario);
    printf("Digite o sal�rio do trabalhador:\t");
    scanf("%f", &emprestimo);

    //C�lculos
    if (emprestimo>0.2*salario)
    {
        printf("\nEmpr�stimo n�o concedido. Valor maior que 20%% do sal�rio.\n");
    }
    else
    {
        printf("\nEmpr�stimo concedido.\n");
    }
        
    return 0;
}

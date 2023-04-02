// Uma empresa contrata um encanador a R$ 30,00 por dia. 
// Faça um programa que solicite o número de dias trabalhados pelo
// encanador e imprima a quantia líquida que deverá
// ser paga, sabendo-se que são descontados 8% para imposto de renda.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    /* code */
    float num_dias;
    float salario;
    const float diaria = 30.;
    const float ir=0.08;

    setlocale(LC_ALL,"Portuguese");
    //setlocale(LC_ALL,"");
    printf("Digite o número de dias trabalhados: ");
    scanf("%f", &num_dias);

    // Cálculo
    salario = num_dias*diaria*(1-ir);

    printf("\nO salário recebido será de %.2f\n", salario);
    system("pause"); //se quiser a mensagem de "pressione qualquer tecla para continuar..."
    return 0;
}

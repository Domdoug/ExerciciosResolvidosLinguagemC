/*
Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui
uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%).
Faça um programa em que o usuário entre com o valor e o estado destino do produto
e o programa retorne o preço final do produto acrescido do imposto do estado em que 
será vendido. Se o estado digitado não for válido, mostrar uma mensagem de erro.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float valor;
    int estado = {'MG', 'SP', 'RJ','MS'};
    printf("Digite o valor do produto:\t");
    scanf("%f", &valor);
    printf("\nAgora escolha o Estado (MG, SP, RJ, MS) da venda do produto, sendo: \t");
    printf("\n1 - Para o estado de MG");
    printf("\n2 - Para o estado de SP");
    printf("\n3 - Para o estado de RJ");
    printf("\n4 - Para o estado de MS\n");
    scanf("%d", &estado);
    
    switch (estado)
    {
    case 1:
        printf("\nA taxa de MG é 7%%. O valor do produto correponderá a: %.2f\n", (valor*(1+0.07)));
        break;
    case 2:
        printf("\nA taxa de SP é 12%%. O valor do produto correponderá a: %.2f\n", (valor*(1+0.12)));
        break;
    case 3:
        printf("\nA taxa de RJ é 15%%. O valor do produto correponderá a: %.2f\n", (valor*(1+0.15)));
        break;
    case 4:
        printf("\nA taxa de MS é 8%%. O valor do produto correponderá a: %.2f\n", (valor*(1+0.08)));
        break;                    
    default:
        printf("\nO estado digitado é inválido \n");
        break;
    }
    



    return 0;
}

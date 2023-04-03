// Escreva um programa de ajuda para vendedores. A partir de um valor total
// lido, mostre:
// 1 - o total a pagar com desconto de 10%
// 2 - O valor de cada parcela, no parcelamento de 3 x sem juros;
// 3 - A comissão do vendedor, no caso da venda ser à vista
// (5% sobre o valor com desconto)
// 4 - A comissão do vendedor, no caso de venda ser parcelada
// (5% sobre o valor total).

#include <stdio.h>

int main()
{
    /* code */
    float valor_total, total_descontado, parcela, comissao_vista, comissao_prazo;
    float const desconto = 0.10;

    printf("Digite o valor total da venda: ");
    scanf("%f", &valor_total);

    //Cálculos
    total_descontado = valor_total*(1-desconto);
    parcela = total_descontado/3;
    comissao_vista = total_descontado*0.05;
    comissao_prazo = valor_total*0.05;

    printf("\nO valor líquido com desconto de 10%% será: %.2f\n", total_descontado);
    printf("\nO valor de cada parcela, em tres vezes será: %.2f\n", parcela);
    printf("\nComissão, no caso de venda à vista: %.2f\n", comissao_vista);
    printf("\nComissão, no caso de venda à prazo: %.2f\n", comissao_prazo);

    return 0;
}

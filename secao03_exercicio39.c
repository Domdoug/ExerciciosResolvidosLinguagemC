// A importancia de R$ 780.000,00 será dividida entre três
// ganhadores de um concurso. Sendo que da quantia total:
// 1 - O primeiro ganhador receberá 46%;
// 2 - O segundo receberá 32%;
// 3 - O terceiro receberá o restante.
//Calcule e imprima a quantia por cada um dos ganhadores.

#include <stdio.h>
#include <locale.h>

int main()
{
    /* code */
    float const valor_total = 780000;
    float const p_primeiro = 0.46;
    float const p_segundo = 0.32;
    float const p_terceiro = 1-p_primeiro-p_segundo;

    float primeiro, segundo, terceiro;
    setlocale(LC_NUMERIC,"Portuguese_Brazil.1252");

    //printf ("Locale is: %s\n", setlocale(LC_ALL,NULL) );

    primeiro = valor_total*p_primeiro;
    segundo = valor_total*p_segundo;
    terceiro = valor_total*p_terceiro;

    printf("O valor recebido pelo primeiro ganhador sera: R$ %.2f\n", primeiro);
    //printf("$%'.2f\n", primeiro);
    printf("O valor recebido pelo segundo ganhador sera: R$ %.2f\n", segundo);
    printf("O valor recebido pelo terceiro ganhador sera: R$ %.2f\n", terceiro);

    return 0;
}

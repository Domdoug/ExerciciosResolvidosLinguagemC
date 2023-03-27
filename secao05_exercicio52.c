/*
Escreva um programa que receba como entrada o valor do saque realizado pelo
cliente de um banco e retorne quantas notas de cada valor serão necessárias
para atender ao saque com a menor quantidade de notas possível.
Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float saque;
    int qtde_notas;

    printf("\nPrograma para saque com a menor quantidade de notas possível");
    printf("\nUtilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real");
    printf("\n============================================================");
    printf("\nDigite o valor de saque:\t");
    scanf("%f", &saque);
    //saque = 1252;

    /*Exemplos para se inspirar:
    1252 = 12*100 + 1*50 + 1*2: quantidade de notas: 12+1+1
    2143 = 21*100 + 2*20 + 1*2 + 1*1: quantidade de notas: 21+2+1+1
    525 = 5 * 100 + 1*20 + 1*5: quantidade de notas: 5+1+1
    35 = 1*20 + 1*10 + 1*5: : quantidade de notas: 1+1+1
    37 = 1*20 + 1*10 + 1*5 + 1*2 + 1*1 : : quantidade de notas: 1+1+1+1+1
    */
    //processamento
    //notas de 100
    if (saque/100.0>0)
    {
        qtde_notas = saque/100.00;
        if (qtde_notas>0)
        {
            printf("\nQuantidade de notas de 100: %d", qtde_notas);
        }
        saque -= qtde_notas*100;
        if (saque > 0)
        {
            //notas de 50
            qtde_notas = saque/50.00;
            if (qtde_notas>0)
            {
                printf("\nQuantidade de notas de 50: %d", qtde_notas);
            }
            saque -= qtde_notas*50;
            if (saque > 0)
            {
                //notas de 20
                qtde_notas = saque/20.00;
                if (qtde_notas>0)
                {
                    printf("\nQuantidade de notas de 20: %d", qtde_notas);
                }
                saque -= qtde_notas*20;
                if (saque > 0)
                {
                    //notas de 10
                    qtde_notas = saque/10.00;
                    if (qtde_notas>0)
                    {
                        printf("\nQuantidade de notas de 10: %d", qtde_notas);
                    }
                    saque -= qtde_notas*10;
                    if (saque > 0)
                    {
                        //notas de 5
                        qtde_notas = saque/5.00;
                        if (qtde_notas>0)
                        {
                            printf("\nQuantidade de notas de 5: %d", qtde_notas);
                        }
                        saque -= qtde_notas*5;
                        if (saque > 0)
                        {
                            //notas de 2
                            qtde_notas = saque/2.00;
                            if (qtde_notas>0)
                            {
                                printf("\nQuantidade de notas de 2: %d", qtde_notas);
                            }
                            saque -= qtde_notas*2;
                            if (saque > 0)
                            {
                                //notas de 1
                                qtde_notas = saque/1.00;
                                if (qtde_notas>0)
                                {
                                    printf("\nQuantidade de notas de 1: %d", qtde_notas);
                                }
                                saque -= qtde_notas*1;
                            }
                        }
                    }
                }
            }
            
        }
    //notas de 50
    }else if (saque/50.0>0)
    {
        qtde_notas = saque/50.00;
        if (qtde_notas>0)
        {
            printf("\nQuantidade de notas de 50: %d", qtde_notas);
        }
        saque -= qtde_notas*50;
        if (saque > 0)
        {
            //notas de 20
            qtde_notas = saque/20.00;
            if (qtde_notas>0)
            {
                printf("\nQuantidade de notas de 20: %d", qtde_notas);
            }
            saque -= qtde_notas*20;
            if (saque > 0)
            {
                //notas de 10
                qtde_notas = saque/10.00;
                if (qtde_notas>0)
                {
                    printf("\nQuantidade de notas de 10: %d", qtde_notas);
                }
                saque -= qtde_notas*10;
                if (saque > 0)
                {
                    //notas de 5
                    qtde_notas = saque/5.00;
                    if (qtde_notas>0)
                    {
                        printf("\nQuantidade de notas de 5: %d", qtde_notas);
                    }
                    saque -= qtde_notas*5;
                    if (saque > 0)
                    {
                        //notas de 2
                        qtde_notas = saque/2.00;
                        if (qtde_notas>0)
                        {
                            printf("\nQuantidade de notas de 2: %d", qtde_notas);
                        }
                        saque -= qtde_notas*2;
                        if (saque > 0)
                        {
                            //notas de 1
                            qtde_notas = saque/1.00;
                            if (qtde_notas>0)
                            {
                                printf("\nQuantidade de notas de 1: %d", qtde_notas);
                            }
                            saque -= qtde_notas*1;
                        }
                    }
                }
            }
        }
    //notas de 20
    }else if (saque/20.0>0)
    {
        //notas de 20
        qtde_notas = saque/20.00;
            if (qtde_notas>0)
            {
                printf("\nQuantidade de notas de 20: %d", qtde_notas);
            }
        saque -= qtde_notas*20;
        if (saque > 0)
        {
            //notas de 10
            qtde_notas = saque/10.00;
            if (qtde_notas>0)
            {
                printf("\nQuantidade de notas de 10: %d", qtde_notas);
            }
            saque -= qtde_notas*10;
            if (saque > 0)
            {
                //notas de 5
                qtde_notas = saque/5.00;
                if (qtde_notas>0)
                {
                    printf("\nQuantidade de notas de 5: %d", qtde_notas);
                }
                saque -= qtde_notas*5;
                if (saque > 0)
                {
                    //notas de 2
                    qtde_notas = saque/2.00;
                    if (qtde_notas>0)
                    {
                        printf("\nQuantidade de notas de 2: %d", qtde_notas);
                    }
                    saque -= qtde_notas*2;
                    if (saque > 0)
                    {
                        //notas de 1
                        qtde_notas = saque/1.00;
                        if (qtde_notas>0)
                        {
                            printf("\nQuantidade de notas de 1: %d", qtde_notas);
                        }
                        saque -= qtde_notas*1;
                    }
                }
            }
        }
    //notas de 10
    }else if (saque/10.0>0)
    {
        //notas de 10
        qtde_notas = saque/10.00;
            if (qtde_notas>0)
            {
                printf("\nQuantidade de notas de 10: %d", qtde_notas);
            }
        saque -= qtde_notas*10;
        if (saque > 0)
        {
            //notas de 5
            qtde_notas = saque/5.00;
            if (qtde_notas>0)
            {
                printf("\nQuantidade de notas de 5: %d", qtde_notas);
            }
            saque -= qtde_notas*5;
            if (saque > 0)
            {
                //notas de 2
                qtde_notas = saque/2.00;
                if (qtde_notas>0)
                {
                    printf("\nQuantidade de notas de 2: %d", qtde_notas);
                }
                saque -= qtde_notas*2;
                if (saque > 0)
                {
                    //notas de 1
                    qtde_notas = saque/1.00;
                    if (qtde_notas>0)
                    {
                        printf("\nQuantidade de notas de 1: %d", qtde_notas);
                    }
                    saque -= qtde_notas*1;
                }
            }
        }
    //notas de 5
    }else if (saque/5.0>0)
    {
        //notas de 5
        qtde_notas = saque/5.00;
        if (qtde_notas>0)
        {
            printf("\nQuantidade de notas de 5: %d", qtde_notas);
        }
        saque -= qtde_notas*5;
        if (saque > 0)
        {
            //notas de 2
            qtde_notas = saque/2.00;
            if (qtde_notas>0)
            {
                printf("\nQuantidade de notas de 2: %d", qtde_notas);
            }
            saque -= qtde_notas*2;
            if (saque > 0)
            {
                //notas de 1
                qtde_notas = saque/1.00;
                if (qtde_notas>0)
                {
                    printf("\nQuantidade de notas de 1: %d", qtde_notas);
                }
                saque -= qtde_notas*1;
            }
        }
    //notas de 2        
    }else if (saque/2.0>0)
    {
        //notas de 2
        qtde_notas = saque/2.00;
        if (qtde_notas>0)
        {
            printf("\nQuantidade de notas de 2: %d", qtde_notas);
        }
        saque -= qtde_notas*2;
        if (saque > 0)
        {
            //notas de 1
            qtde_notas = saque/1.00;
            if (qtde_notas>0)
            {
                printf("\nQuantidade de notas de 1: %d", qtde_notas);
            }
            saque -= qtde_notas*1;
        }
    //notas de 1
    }else if (saque/1.0>0)
    {
        //notas de 1
        qtde_notas = saque/1.00;
        if (qtde_notas>0)
        {
            printf("\nQuantidade de notas de 1: %d", qtde_notas);
        }
        saque -= qtde_notas*1;
    }
    
    //saída
    //printf("\nQuantidade de notas: %d", qtde_notas);
    printf("\n");

    return 0;
}

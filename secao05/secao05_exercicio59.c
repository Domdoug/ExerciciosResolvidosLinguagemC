/*
Escreva um programa que leia o n�mero de habitantes de uma determinada cidade,
o valor de kwh e para cada habitante entre com os seguintes dados:
consumo do m�s e o c�digo do consumidor (1-Residencial, 2-Comercial, 3-Industrial).
No final, imprima o maior, o menor e a m�dia do consumo dos habitantes e por fim, 
o total do consumo de cada categoria de consumidor.
Obs.: Alterei, no programa, o entendimento do consumo. Em vez de kWh, eu coloquei em R$, nos resultados
de maior, menor e m�dia e do total de cada categoria.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int tothab, hab=1, codigo;
    float Txkwh, consumo, maior, menor, media, res=0, com=0, ind=0;

    //Geral
    printf("\nDigite a quantidade de habitantes:\t");
    scanf("%d", &tothab);
    printf("\nDigite o valor do kWh. Digite com v�rgula, ex: 0,95310:\t");   //ex.: Com tributos: 1 kWh = 0,95310. Sem tributos: 1 kWh = 0,75411
    scanf("%f", &Txkwh);

    //para cada habitante
    while (hab <= tothab)
    {
        printf("\nDigite o consumo de energia no mes em kWh para o consumidor %d:\t", hab);
        scanf("%f", &consumo);

        printf("\nDigite o c�digo do consumidor:"
                "\n1-Residencial"
                "\n2-Comercial"
                "\n3-Industrial\n"
        );
        scanf("%d", &codigo);

        //Processamento
        //Consumo de cada categoria de instala��o
        switch (codigo)
        {
            case 1:
                res += consumo*Txkwh;
                break;
            case 2:
                com += consumo*Txkwh;
                break;
            case 3:
                ind += consumo*Txkwh;
                break;

        }

        //Estat�sticas gerais: 
        //maior e menor
        if (hab==1)
        {
            maior = consumo*Txkwh;
            menor = consumo*Txkwh;
        }else
        {
            if (consumo*Txkwh > maior)
            { 
                maior = consumo*Txkwh;
            }
            else if (consumo*Txkwh < menor) 
            {   
                menor = consumo*Txkwh;
            }
        }

        //Incrementa para o pr�ximo habitante
        hab++;
    }

    //M�dia
    media = (res+com+ind)/tothab;

    //Sa�da
    printf("\nO maior valor %.2f:\n" 
            "O menor valor %.2f:\n"
            "A m�dia de consumo dos habitantes %.2f:\n"
            "====O total de consumo de cada categoria de consumidor====\n"
            "Residencial: %.2f\n"
            "Comercial: %.2f\n"
            "Industrial: %.2f\n",
            maior,
            menor,
            media,
            res,
            com,
            ind
    );

    return 0;
}

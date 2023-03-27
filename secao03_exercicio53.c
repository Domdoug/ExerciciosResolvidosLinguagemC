/*
Faça um programa para ler as dimensões de um terreno (comprimento c e 
largura l), bem como o preço do metro de tela p.
Imprima o custo para ceercar este mesmo terreno com tela.
*/

#include <stdio.h>

int main()
{
    float c, l, p, custo;
    printf("Digite o comprimento c do terreno:\t");
    scanf("%f", &c);
    printf("Digite a largura l do terreno:\t");
    scanf("%f", &l);
    printf("Digite o preço do metro da tela:\t");
    scanf("%f", &p);
    
    //Cálculo
    custo = (2*c+2*l)*p;
    
    //Saída
    printf("\nO custo total para cercar o terreno será %.f\n", custo);


    return 0;
}

/*
Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
*/

#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "");

    int valor, i=1;
    int menor, maior;
    
    while (i<=10)
    {
        printf("Digite o %d º valor:\t", i);
        scanf("%d", &valor);

        if (i==1)
        {
            menor=valor;
            maior=valor;
        }else
        {
            if (valor>maior)
            {
                maior=valor;
            }
            if (valor<menor)
            {
                menor=valor;
            }
        }



        i+=1;
    }
    
    printf("\nO menor valor corresponde à: %d", menor);
    printf("\nO maior valor corresponde à: %d\n", maior);

    return 0;
}

/*
Faça um programa que receba trEs números e mostre-os em ordem crescente.
abc; acb; bac; bca; cab; cba
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int a, b, c;
    printf("\nDigite três números:\t");
    scanf("%d %d %d", &a, &b, &c);

    //processamento
    if (a<b){
        if (a<c){
            if (b<c){
                printf("\nOs três números em ordem crescente: %d, %d, %d\n", a, b, c);
            }else{
                printf("\nOs três números em ordem crescente: %d, %d, %d\n", a, c, b);
            }
        }else{
            printf("\nOs três números em ordem crescente: %d, %d, %d\n", c, a, b);
        }
    }
    else{
        if (b<c){
            if (a<c){
                printf("\nOs três números em ordem crescente: %d, %d, %d\n", b, a, c);
            }else{
                printf("\nOs três números em ordem crescente: %d, %d, %d\n", b, c, a);
            }
        }else{
                printf("\nOs três números em ordem crescente: %d, %d, %d\n", c, b, a);
        }
    }

    return 0;
}


/*
Fa�a um programa que receba trEs n�meros e mostre-os em ordem crescente.
abc; acb; bac; bca; cab; cba
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int a, b, c;
    printf("\nDigite tr�s n�meros:\t");
    scanf("%d %d %d", &a, &b, &c);

    //processamento
    if (a<b){
        if (a<c){
            if (b<c){
                printf("\nOs tr�s n�meros em ordem crescente: %d, %d, %d\n", a, b, c);
            }else{
                printf("\nOs tr�s n�meros em ordem crescente: %d, %d, %d\n", a, c, b);
            }
        }else{
            printf("\nOs tr�s n�meros em ordem crescente: %d, %d, %d\n", c, a, b);
        }
    }
    else{
        if (b<c){
            if (a<c){
                printf("\nOs tr�s n�meros em ordem crescente: %d, %d, %d\n", b, a, c);
            }else{
                printf("\nOs tr�s n�meros em ordem crescente: %d, %d, %d\n", b, c, a);
            }
        }else{
                printf("\nOs tr�s n�meros em ordem crescente: %d, %d, %d\n", c, b, a);
        }
    }

    return 0;
}


/*
Calcule as ra�zes da equa��o de 2� grau.
Lembrando que:
x=(-b+-raiz(delta))/2a
onde: delta = b^2 - 4ac
e
ax^2 + bx +c = 0 representa uma equa��o de segundo grau.

A vari�vel a atem que ser diferente de 0. Caso seja igual, imprima a mensagem:
"N�o � uma equa��o de segundo grau"
a) Se delta < 0, n�o existe raiz real. Imprima "N�o existe raiz"
b) Se delta = 0, existe uma raiz real. Imprima a raiz e a mensagem "Raiz �nica"
c) Se delta >= 0, imprima as duas ra�zes reais.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    //fun��o para corrigir os caracteres da lingua portuguesa no terminal
    setlocale(LC_ALL, "");
    
    int a, b, c;
    float delta, x1, x2;

    printf("\n=========== RA�ZES DE UMA EQUA��O DE SEGUNDO GRAU =====\n");
    printf("\nDigite os coeficientes a, b e c da equa��o de segundo grau:\t");
    scanf("%d %d %d", &a, &b, &c);

    //processamento
    if (a==0){
        printf("\nN�o � uma equa��o de segundo grau!!!");
        getch();
        //exit(1);
    }else
    {
        delta = pow(b,2) - 4*a*c;
        if (delta<0)
        {
            printf("\nA equa��o n�o possui ra�zes reais\n");
        }
        else if (delta==0)
        {
            x1 = (-b+sqrt(delta))/2*a;
            printf("\nA equa��o possui raiz �nica: %f", x1);
        }
        else
        {
            x1 = (-b+sqrt(delta))/2*a;
            x2 = (-b-sqrt(delta))/2*a;
            printf("\nA equa��o possui duas raizes reais: %f e %f", x1, x2);
        }
        
    }
       


    
    return 0;
}

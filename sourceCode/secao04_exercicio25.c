/*
Calcule as raízes da equação de 2º grau.
Lembrando que:
x=(-b+-raiz(delta))/2a
onde: delta = b^2 - 4ac
e
ax^2 + bx +c = 0 representa uma equação de segundo grau.

A variável a atem que ser diferente de 0. Caso seja igual, imprima a mensagem:
"Não é uma equação de segundo grau"
a) Se delta < 0, não existe raiz real. Imprima "Não existe raiz"
b) Se delta = 0, existe uma raiz real. Imprima a raiz e a mensagem "Raiz única"
c) Se delta >= 0, imprima as duas raízes reais.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    //função para corrigir os caracteres da lingua portuguesa no terminal
    setlocale(LC_ALL, "");
    
    int a, b, c;
    float delta, x1, x2;

    printf("\n=========== RAÍZES DE UMA EQUAÇÃO DE SEGUNDO GRAU =====\n");
    printf("\nDigite os coeficientes a, b e c da equação de segundo grau:\t");
    scanf("%d %d %d", &a, &b, &c);

    //processamento
    if (a==0){
        printf("\nNão é uma equação de segundo grau!!!");
        getch();
        //exit(1);
    }else
    {
        delta = pow(b,2) - 4*a*c;
        if (delta<0)
        {
            printf("\nA equação não possui raízes reais\n");
        }
        else if (delta==0)
        {
            x1 = (-b+sqrt(delta))/2*a;
            printf("\nA equação possui raiz única: %f", x1);
        }
        else
        {
            x1 = (-b+sqrt(delta))/2*a;
            x2 = (-b-sqrt(delta))/2*a;
            printf("\nA equação possui duas raizes reais: %f e %f", x1, x2);
        }
        
    }
       


    
    return 0;
}

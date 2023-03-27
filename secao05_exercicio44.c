/*
Leia um número positivo do usuário e então calcule e imprima a sequência de Fibonacci
até o primeiro número superior ao número lido.
Exemplo: Se o usuário informou o número 30, a sequência a ser impressa será:
0 1 1 2 3 5 8 13 21 34 55;
Fibonacci:
Fn = Fn-1 + Fn-2
onde: F0 = 0 and F1 = 1
*/

#include <stdio.h>
#include <locale.h>

int fib(int n, int imprimir)
{
    int f1 = 0, f2= 1;
    if (n <= 1)
        return n;
    if (imprimir==1)
    {
        printf("%d", f1);
    }
    
    for (int i = 2; i < n; i++)
    {
        if (imprimir==1)
        {
            printf(" %d", f2);
        }
       
        int proximo = f1 + f2;
        f1 = f2;
        f2 = proximo;
    }
    return f1+f2;
}
 
int main()
{
    setlocale(LC_ALL,"");

    //int n=9;
    int chute, n=0, imprimir=0;
    do
    {
        printf("\nDigite um número positivo para a sequência de fibonacci:\t");
        scanf("%d", &chute);
    } while (chute < 0);
    
    //processamento
    while ( chute >= fib(n, imprimir) )
    {
        n++;
    }
    imprimir=1; //imprimir a sequencia de fibonacci
    n+=2;
    
    fib(n, imprimir);
    //printf("%d\n", fib(n));
    printf("\n");
    return 0;
}
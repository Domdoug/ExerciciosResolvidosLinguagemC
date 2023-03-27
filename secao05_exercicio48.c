/*Faça um programa que some os termos de valor par da sequência de Fibonacci,
cujos valores não ultrapassem quatro milhões.
Fibonacci:
0 1 1 2 3 5 8 13 21 34 55;
Fn = Fn-1 + Fn-2
onde: F0 = 0 and F1 = 1
*/

#include <stdio.h>
#include <locale.h>

int fib(int n)
{
    int f1 = 0, f2= 1;
    if (n <= 1)
        return n;
    
    for (int i = 2; i < n; i++)
    {
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
    int n=0, soma=0, n_termos=0, termo, soma_fim;
    printf("\nSoma de todos os termos pares da sequencia de Fibonacci");
    printf("\nA Soma não pode ultrapassar 4 milhões...");
    
    //processamento
    while (soma<=4000000)
    {
        termo = fib(n);
        if (termo%2==0)
        {
            soma+=termo;
            if ((soma+termo)> 4000000)
            {
                soma_fim = soma - termo;
                n_termos--;
            }
            
            n_termos++;

        }
        n++;
    }
    
    printf("\nA soma dos termos pares de Fibonacci foi de %d\n", soma_fim);
    printf("\nA quantidade de termos foi de %d", n_termos);
    printf("\n");
    return 0;
}

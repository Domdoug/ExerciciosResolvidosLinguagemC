/*
Dados n e dois números inteiros positivos, i e j, diferentes de 0, imprimir em ordem crescente
os n primeiros naturais que são múltiplos de i ou de j ou de ambos.
Exemplo: Para n=6, i=2 e j=3 a saída deverá ser: 0, 2, 3, 4, 6, 8.
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, i, j, p=0, seq=0;

    do
    {
        printf("\nDigite a quantidade de números a serem impressos:\t");
        scanf("%d", &num);
    } while (num<0);
    
    do
    {
        printf("\nDigite o primeiro número inteiro positivo:\t");
        scanf("%d", &i);
    } while (i<0);
    
    do
    {
        printf("\nDigite o segundo número inteiro positivo:\t");
        scanf("%d", &j);
    } while (j<0);
    
    while (p<num)
    {
        if (seq%i==0 || seq%j==0)   //seq será os múltiplos de i ou j
        {
            /*Pelo fato do seq começar do zero e ser adicionado de 1, já estará em ordem crescente */
            printf("\n%d", seq);
            p+=1;  //contar para o loop do while se atender aos critérios de múltiplos de i e j.
        }
        seq+=1; //vai contando números naturais enquanto o loop não for satisfeito. O controle do loop está no if
        
    }
    printf("\n");
    
    return 0;
}

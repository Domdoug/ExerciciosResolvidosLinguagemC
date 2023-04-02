/*
Dados n e dois n�meros inteiros positivos, i e j, diferentes de 0, imprimir em ordem crescente
os n primeiros naturais que s�o m�ltiplos de i ou de j ou de ambos.
Exemplo: Para n=6, i=2 e j=3 a sa�da dever� ser: 0, 2, 3, 4, 6, 8.
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, i, j, p=0, seq=0;

    do
    {
        printf("\nDigite a quantidade de n�meros a serem impressos:\t");
        scanf("%d", &num);
    } while (num<0);
    
    do
    {
        printf("\nDigite o primeiro n�mero inteiro positivo:\t");
        scanf("%d", &i);
    } while (i<0);
    
    do
    {
        printf("\nDigite o segundo n�mero inteiro positivo:\t");
        scanf("%d", &j);
    } while (j<0);
    
    while (p<num)
    {
        if (seq%i==0 || seq%j==0)   //seq ser� os m�ltiplos de i ou j
        {
            /*Pelo fato do seq come�ar do zero e ser adicionado de 1, j� estar� em ordem crescente */
            printf("\n%d", seq);
            p+=1;  //contar para o loop do while se atender aos crit�rios de m�ltiplos de i e j.
        }
        seq+=1; //vai contando n�meros naturais enquanto o loop n�o for satisfeito. O controle do loop est� no if
        
    }
    printf("\n");
    
    return 0;
}

/*
Escreva um programa que escreva na tela de 1 até 100, de 1 em 1, 3 vezes. A primeira
vez deve usar a estrutura de repetição "for", a segunda "while" e a terceira "do while".
*/
#include <stdio.h>

/*
int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 100; i++)
    {
        printf("\n%d", i);
    }
    printf("\n");
    
    return 0;
}
*/
/*
int main()
{
    int i=1;
    while(i <= 100)
    {
        printf("\n%d", i);
        i+=1;
    }
    printf("\n");
    
    return 0;
}
*/

int main()
{
    int i=1;
    
    do
    {
        printf("\n%d", i);
        i+=1;
    } while(i <= 100);
    
    printf("\n");
    
    return 0;
}


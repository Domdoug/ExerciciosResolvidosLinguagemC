/*
Fa�a uma fun��o para verificar se um n�mero � positivo ou negativo,
sendo que o valor de retorno ser� 1 se positivo, -1 se negativo e 
0 se for igual a 0.
*/

#include <stdio.h>
#include <locale.h>

int confere(int num);

int main()
{
    setlocale(LC_ALL, "");
    int num, resposta;

    printf("Digite um valor:");
    scanf("%d", &num);

    resposta = confere(num);
    if (resposta==1)
    {
        printf("O n�mero � positivo\n");
    }
    else if (resposta==-1)
    {
        printf("O n�mero � negativo\n");
    }
    else
    {
        printf("O n�mero � igual a 0\n");
    }
    

    return 0;
}

int confere(int num){
    if (num>0)
    {
        return 1;
    }
    else if (num<0)
    {
        return -1;
    }
    else
    {
        return 0;
    }

}
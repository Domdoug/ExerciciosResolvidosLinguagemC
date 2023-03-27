/*
Faça um programa que leia um número inteiro positivo de
três dígitos (de 100 a 999).
Gere outro número formado pelos dígitos invertidos do
número lido. Exemplo:
NumeroLido = 123
NumeroGerado = 321
*/

#include <stdio.h>

int main()
{
    int n, reverse=0, remainder;

    printf("Entre com um número inteiro: ");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10; //resto da divisão
        reverse = reverse * 10 + remainder;
        n /= 10; //reducao do número para funcionar no loop

    }

    printf("Inverso do número = %d", reverse);
    printf("\n");
    system("pause"); //se quiser a mensagem de "pressione qualquer tecla para continuar..."

    return 0;
    

    return 0;
}

/*
n	    n != 0	remainder	reverse
123	    true	3	        0 * 10 + 3 = 3
12	    true	2	        3 * 10 + 2 = 32
1	    true	1	        32 * 10 + 1 = 321
0	    false	-	        Loop terminates.

*/
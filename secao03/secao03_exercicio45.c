/* Faça um programa para converter uma letra maiúscula em
letra minúscula. Use a tabela ASCII para resolver o problema.
'a' = ASCII 97
'A' = ASCII 65
Diferença = 97-65 = 32
subtraia 32 ( decimal ) do char da letra que voce tem.
*/

#include <stdio.h>

 
int main()
{
    //int numerico_letra;
    char letra;
    
    printf("\n");
    printf("Convertendo uma letra para minuscula: \n");
    printf("------------------------------------\n");
    printf("\n");
    printf("Entre com a letra maiuscula: ");
    scanf("%c", &letra); // %c transforma a letra em um numero correspondente na tabela ascii
    printf("\n");

    //cálculo
    letra = letra + 32;

    printf("Convertendo para minuscula : %c\n", letra); // %c formata para char
    //system("pause"); //se quiser a mensagem de "pressione qualquer tecla para continuar..."
    return(0);
}
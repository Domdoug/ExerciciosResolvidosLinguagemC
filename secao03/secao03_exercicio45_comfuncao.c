// Fa�a um programa para converter uma letra mai�scula em
// letra min�scula. Use a tabela ASCII para resolver o problema.

/* Convertendo uma string em mai�sculas * usando a fun��o strupr() */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
 
int main()
{
    setlocale(LC_ALL, "");
    char string[20];
    printf("\n");
    printf("Convertendo uma string para mai�sculas\n");
    printf("------------------------------------\n");
    printf("\n");
    printf("Entre com a string :");
    scanf("%s",&string);
    printf("\n");
    printf("string digitada : %s\n",string);
    printf("\n");
    printf("Convertendo para mai�sculas : %s\n",strupr(string));
    system("pause"); //se quiser a mensagem de "pressione qualquer tecla para continuar..."
    return(0);
}
/*
Faça um programa que apresente um menu de opções para o cálculo das seguintes operações entre
dois números:
a) adição (opção 1)
b) subtração (opção 2)
c) multiplicação (opção 3)
d) divisão (opção 4)
e) saída (opção 5)
O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do resultado e
a volta ao menu de opções. O programa só termina quando for escolhida a opção de saída (opção 5).
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

	//declaração das variáveis
	float num1, num2;
	int operacao=0; //para iniciar o loop while
	float resultado;

	//Entrada
    while (operacao!=5)
    {
        printf("\n::::::::::::::::::: MENU ::::::::::::::::::::::: \n");
        printf("Escolha a opção:");

        printf("\n1 - Adição");
        printf("\n2 - Subtração");
        printf("\n3 - Multiplicação");
        printf("\n4 - Divisão");
        printf("\n5 - Sair");
        printf("\n=================================================\n");
        printf("\nOpção: ");
        //fflush(stdout);
        scanf("%d", &operacao);

        switch (operacao) {
            case 1:
                printf("\nA operação escolhida foi a soma '+' ");
                break;
            case 2:
                printf("\nA operação escolhida foi a subtração '-' ");
                break;
            case 3:
                printf("\nA operação escolhida foi a multiplicação '*' ");
                break;
            case 4:
                printf("\nA operação escolhida foi a divisão '/' ");
                break;
            case 5:
                printf("\nSaída");
                printf("\n");
                return 0;                
        
        }

        printf("\n=================================================\n");
        printf("Digite dois números para realizar a operação matemática escolhida:\t");
        fflush(stdout);
        scanf("%f%f", &num1, &num2);

        switch (operacao) {
            case 1:
                resultado = num1 + num2;
                printf("\nO valor da soma é: %f", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("\nO valor da subtração é: %f", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("\nO valor da multiplicação é: %f", resultado);
                break;
            case 4:
                if (num2==0){
                    printf("\nO segundo número (denominador) não pode ser igual a zero");
                } else {
                    resultado = num1 / num2;
                    printf("\nO valor da divisão é: %f", resultado);
                }
                break;
    //		default:
    //			break;
        }
        printf("\n");
        printf("\n");
    }

	return 0;
}



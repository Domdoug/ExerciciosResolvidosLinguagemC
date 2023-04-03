/*
Fa�a um programa que apresente um menu de op��es para o c�lculo das seguintes opera��es entre
dois n�meros:
a) adi��o (op��o 1)
b) subtra��o (op��o 2)
c) multiplica��o (op��o 3)
d) divis�o (op��o 4)
e) sa�da (op��o 5)
O programa deve possibilitar ao usu�rio a escolha da opera��o desejada, a exibi��o do resultado e
a volta ao menu de op��es. O programa s� termina quando for escolhida a op��o de sa�da (op��o 5).
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

	//declara��o das vari�veis
	float num1, num2;
	int operacao=0; //para iniciar o loop while
	float resultado;

	//Entrada
    while (operacao!=5)
    {
        printf("\n::::::::::::::::::: MENU ::::::::::::::::::::::: \n");
        printf("Escolha a op��o:");

        printf("\n1 - Adi��o");
        printf("\n2 - Subtra��o");
        printf("\n3 - Multiplica��o");
        printf("\n4 - Divis�o");
        printf("\n5 - Sair");
        printf("\n=================================================\n");
        printf("\nOp��o: ");
        //fflush(stdout);
        scanf("%d", &operacao);

        switch (operacao) {
            case 1:
                printf("\nA opera��o escolhida foi a soma '+' ");
                break;
            case 2:
                printf("\nA opera��o escolhida foi a subtra��o '-' ");
                break;
            case 3:
                printf("\nA opera��o escolhida foi a multiplica��o '*' ");
                break;
            case 4:
                printf("\nA opera��o escolhida foi a divis�o '/' ");
                break;
            case 5:
                printf("\nSa�da");
                printf("\n");
                return 0;                
        
        }

        printf("\n=================================================\n");
        printf("Digite dois n�meros para realizar a opera��o matem�tica escolhida:\t");
        fflush(stdout);
        scanf("%f%f", &num1, &num2);

        switch (operacao) {
            case 1:
                resultado = num1 + num2;
                printf("\nO valor da soma �: %f", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("\nO valor da subtra��o �: %f", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("\nO valor da multiplica��o �: %f", resultado);
                break;
            case 4:
                if (num2==0){
                    printf("\nO segundo n�mero (denominador) n�o pode ser igual a zero");
                } else {
                    resultado = num1 / num2;
                    printf("\nO valor da divis�o �: %f", resultado);
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



//Pe�a ao usu�rio para digitar tr�s valores inteiros e imprima a soma deles
#include <stdio.h>

int main(){
	int var1, var2, var3, soma;

	printf("Digite o primeiro n�mero ");
	// Recebe os dados do teclado
	scanf("%d", &var1);
	printf("Digite o segundo n�mero ");
	// Recebe os dados do teclado
	scanf("%d", &var2);
	printf("Digite o terceiro n�mero ");
	// Recebe os dados do teclado
	scanf("%d", &var3);

	soma = var1+var2+var3;

	printf("A soma das vari�veis � %d", soma);
	return 0;


}

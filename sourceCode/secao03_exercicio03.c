//Peça ao usuário para digitar três valores inteiros e imprima a soma deles
#include <stdio.h>

int main(){
	int var1, var2, var3, soma;

	printf("Digite o primeiro número ");
	// Recebe os dados do teclado
	scanf("%d", &var1);
	printf("Digite o segundo número ");
	// Recebe os dados do teclado
	scanf("%d", &var2);
	printf("Digite o terceiro número ");
	// Recebe os dados do teclado
	scanf("%d", &var3);

	soma = var1+var2+var3;

	printf("A soma das variáveis é %d", soma);
	return 0;


}

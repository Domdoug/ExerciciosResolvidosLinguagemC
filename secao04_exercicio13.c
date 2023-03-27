/*
Fa�a um algoritmo que calcule a m�dia ponderada das
notas de 3 provas. A primeira e a segunda prova tem peso
1 e a terceira tem peso 2. Ao final, mostrar a m�dia do aluno
e indicar se o aluno foi aprovado ou reprovado. A nota para
aprova��o deve ser igual ou superior a 60 pontos.
 */

#include <stdio.h>

int main() {
	//Declara��o de vari�veis
	int nota1, nota2, nota3;
	int peso1=1, peso2=1, peso3=2;
	float media;

	//Entrada
	printf("Insira as tr�s notas do aluno:\t");
	fflush(stdout);
	scanf("%d%d%d", &nota1, &nota2, &nota3);

	//C�lculo
	media = (nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);

	printf("\nA m�dia do aluno foi: %.2f\n", media);

	if (media >= 60) {
		printf("\nO aluno foi APROVADO\n");
	} else {
		printf("\nO aluno foi REPROVADO\n");
	}

	return 0;
}

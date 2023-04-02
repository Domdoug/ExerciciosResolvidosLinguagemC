/*
 A nota final de um estudadnte � calculada
 a partir de tr�s notas atribu�das entre o intervalo
 de 0 at� 10, respectivamente, a um trabalho de laborat�rio,
 a uma avalia��o semestral e a um exame final. A m�dia das
 tr�s notas mencionadas anteriormente obedece aos pesos:
 1 - Trabalho de Laborat�rio: 2;
 2 - Avalia��o Semestral: 3;
 3 - Exame Final: 5.
 De acordo com o resultado, mostre na tela se o aluno est� reprovado (m�dia entre 0 e 2,9),
 de recupera��o (entre 3 e 4,9) ou se foi aprovado.
 Fa�a todas as verifica��es necess�rias.
 */

#include <stdio.h>

int main() {
	//Declara��o de vari�veis
	int nota1, nota2, nota3;
	int peso1=2, peso2=3, peso3=5;
	float media;

	//entrada
	printf("Digite as tr�s notas entre 0 e 10 do estudante:\t");
	fflush(stdout);
	scanf("%d%d%d", &nota1, &nota2, &nota3);

	//c�lculos
	if ((nota1<0 || nota1>10) || (nota2 <0 || nota2 > 10) || (nota3 < 0 || nota3 > 10)) {
		printf("Uma das notas � menor que zero ou maior que 10");
	} else {
		media = (nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);
		printf("\nA m�dia do aluno foi: %.2f\n", media);
		if (media>=0 && media<=2.9) {
			printf("Aluno Reprovado!");
		} else if (media >=3 && media<=4.9) {
			printf("Aluno em recupera��o");
		} else {
			printf("Aluno Aprovado!!");
		}
	}
	return 0;
}

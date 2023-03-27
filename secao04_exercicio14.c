/*
 A nota final de um estudadnte é calculada
 a partir de três notas atribuídas entre o intervalo
 de 0 até 10, respectivamente, a um trabalho de laboratório,
 a uma avaliação semestral e a um exame final. A média das
 três notas mencionadas anteriormente obedece aos pesos:
 1 - Trabalho de Laboratório: 2;
 2 - Avaliação Semestral: 3;
 3 - Exame Final: 5.
 De acordo com o resultado, mostre na tela se o aluno está reprovado (média entre 0 e 2,9),
 de recuperação (entre 3 e 4,9) ou se foi aprovado.
 Faça todas as verificações necessárias.
 */

#include <stdio.h>

int main() {
	//Declaração de variáveis
	int nota1, nota2, nota3;
	int peso1=2, peso2=3, peso3=5;
	float media;

	//entrada
	printf("Digite as três notas entre 0 e 10 do estudante:\t");
	fflush(stdout);
	scanf("%d%d%d", &nota1, &nota2, &nota3);

	//cálculos
	if ((nota1<0 || nota1>10) || (nota2 <0 || nota2 > 10) || (nota3 < 0 || nota3 > 10)) {
		printf("Uma das notas é menor que zero ou maior que 10");
	} else {
		media = (nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);
		printf("\nA média do aluno foi: %.2f\n", media);
		if (media>=0 && media<=2.9) {
			printf("Aluno Reprovado!");
		} else if (media >=3 && media<=4.9) {
			printf("Aluno em recuperação");
		} else {
			printf("Aluno Aprovado!!");
		}
	}
	return 0;
}

/*
Fa�a um programa que leia dez conjuntos de dois vetores, o primeiro representando o n�mero do aluno
e o segundo representando a sua altura em metros. Encontre o aluno mais baixo e o mais alto.
Mostre o n�mero do aluno mais baixo e do mais alto, juntamente com suas alturas.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h> //para fun��o time()
#include <stdlib.h> //fun��es rand() e srand()

#define limSupAluno 50   //intervalo de valores, para o gerar matr�cula do aluno.
#define limSupAltura 15   //intervalo de valores, para o gerar altura do aluno em cent�metros.

# define posicoes 5

int main()
{
    setlocale(LC_ALL, "");

    int IdAluno[posicoes], Altura[posicoes];
    int maior, menor, matMaior, matMenor;
    //int cont=0;
    //faz com que os n�meros sejam pseudo aleat�rios. Inicializador do gerador de n�meros aleat�rios. 
    srand((unsigned) time(NULL)); 
    //VETOR MATR�CULA DE ALUNO, GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
        IdAluno[i] = rand() % limSupAluno + 1; /* gera n�mero entre 1 (somado 1 ao limSupAluno) e limite superior do intervalo */
    //VETOR ALTURA DO ALUNO, GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
        Altura[i] = rand() % limSupAltura + 165;  //Para a altura, fiz o intervalo entre 165 a 180 cm = diferenca = 15. limSupAltura + 165

    for (int i = 0; i < posicoes; i++)
    {   //o produto escalar � dados por: x1 * y1 + x2 * y2 +....+ xn * yn.
            if (i==0)
                maior = menor = Altura[i];

            if (i>0)
            {
                if (Altura[i] > maior)
                {
                    maior = Altura[i];
                    matMaior = i;
                }
                if (Altura[i] < menor)
                {
                    menor = Altura[i];
                    matMenor = i;
                }
            }
    }

    printf("\nO maior e o menor aluno em estatura e suas respectivas matr�culas.\n");

    printf("%s = %d %s(%d)\n", "Matr�cula do menor aluno", IdAluno[matMenor], "�ndice", matMenor);
    printf("%s = %d %s\n", "Estatura do menor aluno", menor, "cm");
    
    printf("%s = %d %s(%d)\n", "Matr�cula do maior aluno", IdAluno[matMaior], "�ndice", matMaior);
    printf("%s = %d %s\n", "Estatura do maior aluno", maior, "cm");
    

    
    printf("\n");
    return 0;

}
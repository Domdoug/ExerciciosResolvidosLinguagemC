/*
Faça um programa que leia dez conjuntos de dois vetores, o primeiro representando o número do aluno
e o segundo representando a sua altura em metros. Encontre o aluno mais baixo e o mais alto.
Mostre o número do aluno mais baixo e do mais alto, juntamente com suas alturas.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h> //para função time()
#include <stdlib.h> //funções rand() e srand()

#define limSupAluno 50   //intervalo de valores, para o gerar matrícula do aluno.
#define limSupAltura 15   //intervalo de valores, para o gerar altura do aluno em centímetros.

# define posicoes 5

int main()
{
    setlocale(LC_ALL, "");

    int IdAluno[posicoes], Altura[posicoes];
    int maior, menor, matMaior, matMenor;
    //int cont=0;
    //faz com que os números sejam pseudo aleatórios. Inicializador do gerador de números aleatórios. 
    srand((unsigned) time(NULL)); 
    //VETOR MATRÍCULA DE ALUNO, GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
        IdAluno[i] = rand() % limSupAluno + 1; /* gera número entre 1 (somado 1 ao limSupAluno) e limite superior do intervalo */
    //VETOR ALTURA DO ALUNO, GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
        Altura[i] = rand() % limSupAltura + 165;  //Para a altura, fiz o intervalo entre 165 a 180 cm = diferenca = 15. limSupAltura + 165

    for (int i = 0; i < posicoes; i++)
    {   //o produto escalar é dados por: x1 * y1 + x2 * y2 +....+ xn * yn.
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

    printf("\nO maior e o menor aluno em estatura e suas respectivas matrículas.\n");

    printf("%s = %d %s(%d)\n", "Matrícula do menor aluno", IdAluno[matMenor], "índice", matMenor);
    printf("%s = %d %s\n", "Estatura do menor aluno", menor, "cm");
    
    printf("%s = %d %s(%d)\n", "Matrícula do maior aluno", IdAluno[matMaior], "índice", matMaior);
    printf("%s = %d %s\n", "Estatura do maior aluno", maior, "cm");
    

    
    printf("\n");
    return 0;

}
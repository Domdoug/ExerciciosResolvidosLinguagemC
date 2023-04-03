/*
Leia uma matriz 5 x 10 que se refere respostas de 10 questões de múltipla escolha,
referentes a 5 alunos. Leia, também, um vetor de 10 posições contendo o gabarito de 
respostas que podem ser a, b, c ou d. Seu programa deverá comparar as respostas
de cada candidato com o gabarito e emitir um vetor denominado resultado, contendo
a pontuação correspondente a cada aluno.
*/


#include <stdio.h>
#include <time.h>   //para função time()
#include <stdlib.h> //funções rand() e srand()
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int linhas=5, colunas=10;
    char matriz[linhas][colunas];
    char gabarito[colunas];
    int resultados[linhas];
    int soma=0;

    //char letraAleatoria = "abcd"[rand()%4];
    int i, j;

    //Inicializador do gerador de números pseudo aleatórios. 
    srand((unsigned) time(NULL));
    printf("\nGerada uma matriz 5 x 10 aleatoriamente com as opções a, b, c ou d");
    printf("\n================================================================\n");
    
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            matriz[i][j] = "abcd"[rand() % 4]; //sorteia uma das 4 letras: a, b, c, d. Funciona em  EBCDIC, ASCII, UTF-8, ISO-Latin-1
    }
    
    printf("\n\t Na forma matricial\n");
    printf("\t");
    for (i = 1; i <= colunas; i++)
        printf("\tQuest %d", i);
    
    printf("\n");
    for (i = 0; i < linhas; i++)
    {
        printf("Aluno %d:", i+1);
        for (j = 0; j < colunas; j++)
            printf("\t%c", matriz[i][j]);
        printf("\n");
    }
    printf("\n");

    //Gerar um gabarito aleatório
    for (j = 0; j < colunas; j++)
        gabarito[j] = "abcd"[rand() % 4]; //sorteia uma das 4 letras: a, b, c, d
    
    //Imprime o gabarito
    printf("\tGabarito das questões:");
    printf("\n\t");
   
    for (j = 0; j < colunas; j++)
        printf("\t%c", gabarito[j]);
    printf("\n");
    printf("\n");

    //compara as notas de cada aluno com o gabarito
    for (i = 0; i < linhas; i++)
    {
        soma=0;  //zera a soma dos acertos para novo aluno
        for (j = 0; j < colunas; j++)
        {
            if (matriz[i][j]==gabarito[j])  //se a questão coincide com o resultado do gabarito
                soma++;
        }
        resultados[i]=soma;
    }

    //imprime os resultados para cada aluno
    printf("Notas dos Alunos");
    printf("\n");
    for (i = 0; i < linhas; i++)
    {
        printf("Aluno %d: \t%d", i+1, resultados[i]);
        printf("\n");
    }

    printf("\n");

    return 0;
}

/*
Fa�a um programa para corrigir uma prova com 10 quest�es de m�ltipla escolha: a, b, c ou d, 
em uma turma com 3 alunos (Fiz com 8 alunos). Cada quest�o vale 1 ponto. Leia o gabarito e, para cada aluno,
leia sua matr�cula (n�mero inteiro) e suas respostas. Calcule e escreva:
Para cada aluno, escreva a sua matr�cula, suas respostas e sua nota. O percentual de 
aprova��o, assumindo m�dia 7.0.

Exerc�cio com base no anterior, exerc�cio 15, por�m com mais uma dimens�o, das m�ltiplas
escolhas.
=> A 3D array is a multi-dimensional array(array of arrays). A 3D array is a collection of 2D arrays.
It is specified by using three subscripts:Block size, row size and column size. 
More dimensions in an array means more data can be stored in that array. 
Ex.: int arr[3][3][3], now it becomes a 3D array.

    int shows that the 3D array is an array of type integer.
    arr is the name of array.
    first dimension represents the block size(total number of 2D arrays).
    second dimension represents the rows of 2D arrays.
    third dimension represents the columns of 2D arrays.
    i.e; int arr[3][3][3], so the statement says that we want three such 2D arrays which consists of 3 rows and 3 columns.
*/
/*
Para este exercicio, deve-se observar a hierarquia nos loops:
Aluno --> k (3 alunos + 1 gabarito)
Prova --> m (10 quest�es)
Quest�o --> i (combina��es poss�veis de resposta)
comparativo --> j (para checar com o gabarito se Acertou, Errou, Esqueceu)
*/

#include <stdio.h>
#include <time.h>   //para fun��o time()
#include <stdlib.h> //fun��es rand() e srand()
#include <locale.h>

#define Alunos 9 //4  //  0 - Gabarito; 1 at� 3 - Respostas multipla escolha dos 3 alunos.
#define Questoes 10 //N�mero de quest�es
#define limInf 1  //menor escolha do teste de m�ltipla escolha: a ou b ou c ou d
#define limSup 15 //Op��es poss�veis do vetor "possiveis"


int main()
{
    setlocale(LC_ALL, "");
    system("cls");

    int i, j, k, m;
    int lenStrGab[Questoes]={0};
    int lenStrResp[Alunos][Questoes]={0};
    int contAcertou[Alunos][Questoes]={0}, contErrou[Alunos][Questoes]={0}, contEsqueceu[Alunos][Questoes]={0};
    int acertou, esqueceu, contAprovado=0;
    //int Aluno[Alunos]; //vetor de alunos
    float pontuacao[Alunos][Questoes], pontuacaoAcertou[Alunos][Questoes];  //pontuacaoAcertou[k][m], para calcular os acertos em cada quesito
    float nota[Alunos]={0};
    
    // Direct initialization of 2-D char array
    //Todas as possibilidades das multiplas escolhas:
    char possiveis[][limSup] = {"a", "ab", "abc", "abcd", "abd", "ac", "acd", "ad",
                        "b", "bc", "bcd", "bd", 
                        "c", "cd", 
                        "d"};

    int posicaoPossiveis[Alunos][Questoes] = {};   //vetor do gabarito[0] dos alunos com as respectivas respostas. Tem que gerar 3*10 valores aleat�rios + 1*10 para o gabarito

    //Fun��o para os n�meros pseudo aleat�rios de 0 (Gabarito) at� Alunos*Questoes = 3*10 = 30. 
    srand((unsigned) time(NULL));   //semente aleat�ria

    //Gerar os vetores aleat�rios
    for (i = 0; i < Alunos; i++)  //Gabarito=0 e Alunos i>0
        for (j = 0; j < Questoes; j++)  //Resultado do Gabarito e Quest�es resolvida pelos alunos
            posicaoPossiveis[i][j] = rand() % (limSup - limInf);


    // 0 -> posicaoPossiveis[0] para gabarito e 1 at� n-> posicaoPossiveis[1], primeiro aluno para resposta da m�ltipla escolha
    // m --> n�mero de quest�es
    //loop para encontrar o tamanho da string. 
    //posicaoPossiveis seleciona a posi��o aleat�ria, gerada pela fun��o gen_random_posicaoPossiveis, no array dos poss�veis resultados
    //Alternativamente pode ser utlizada a fun��o strlen() da biblioteca <string.h>
    //o s�mbolo '\0' representa a identifica��o do fim da string

    printf("\nGabarito:\n");
    for (m = 0; m < Questoes; m++)
        printf("\nQuestao %d: %s", (m+1), possiveis[posicaoPossiveis[0][m]]); //imprime as respostas para cada quest�o
    
    //Deteminar o comprimento da string
    for (m = 0; m < Questoes; m++)
    {
        while (possiveis[posicaoPossiveis[0][m]][lenStrGab[m]]!='\0')
            lenStrGab[m]++; //Comprimento da string para cada quest�o de m�ltipla escolha
    }
    

    //Escolha dos alunos
    printf("\n");
    printf("\nRespostas dos Alunos:\n");
    for (k = 1; k < Alunos; k++)    //k=1, pois o gabarito k=0 j� foi gerado
    {
        for (m = 0; m < Questoes; m++)
        {
            while (possiveis[posicaoPossiveis[k][m]][lenStrResp[k][m]]!='\0')
                lenStrResp[k][m]++;  //tamanho da string de respostas do aluno k, da quest�o m
            //printf("Length string%d %d\n", k, lenStrResp[k][m]);
        }
    }
    
    //Corre��o do ponto de vista das respostas de m�ltipla escolha.
    //Resultados poss�veis: Acertou ou errou.
    for (k = 1; k < Alunos; k++)
    {
        for (m = 0; m < Questoes; m++)
        {
            for (i = 0; i < lenStrResp[k][m]; i++)   //for para cada quest�o multipla escolha
            {
                acertou=0;
                for (j = 0; j < lenStrGab[m]; j++)    //gabarito
                {
                    if (possiveis[posicaoPossiveis[k][m]][i]==possiveis[posicaoPossiveis[0][m]][j])
                    {
                        acertou=1;
                        break; //n�o precisa verificar no restante, pois s� existe uma ocorrencia no vetor de possiveis respostas.
                    }
                }

                if (acertou==1)  //Se ocorrer ao menos uma resposta certa em cada leitura
                    contAcertou[k][m]++;
                else
                    contErrou[k][m]++;
                
            }
            pontuacaoAcertou[k][m] = (float) contAcertou[k][m]/ (float) lenStrGab[m];   //corre��o da pontua��o de Acertos: Quantos acertos/tamanho do vetor gabarito
        }

        //printf("\nAcertou %d", contAcertou[k][m]);
        //printf("\nErrou %d", contErrou[k][m]);
        
    }

    //Corre��o do ponto de vista do gabarito. 
    //Resultados poss�veis: Acertou ou esqueceu. 
    //N�o precisa contar o acertou. J� feito no passo anterior.
    for (k = 1; k < Alunos; k++)
    {
        for (m = 0; m < Questoes; m++)  //Quest�es
        {
            for (i = 0; i < lenStrGab[m]; i++)    //gabarito
            {
                esqueceu=0;  //para n�o permitir que a primeira condi��o do if fique na mem�ria
                for (j = 0; j < lenStrResp[k][m]; j++) //multipla escolha
                {
                    if (possiveis[posicaoPossiveis[0][m]][i]!=possiveis[posicaoPossiveis[k][m]][j])
                        esqueceu=1;
                    else
                    {
                        esqueceu=0;
                        break;
                    }
                                
                }
                
                if (esqueceu==1)
                    contEsqueceu[k][m]++;
            }            
        }
    }
/*
    //Somente para verifica��o
    for (k = 1; k < Alunos; k++)
    {
        for (m = 0; m < Questoes; m++)
        {
            printf("Acertou %d\t", contAcertou[k][m]);
            printf("Errou %d\t", contErrou[k][m]);
            printf("Esqueceu %d\t", contEsqueceu[k][m]);
            printf("\n");
        }
    }
 */   
    //c�lculo da pontua��o de cada quest�o
    printf("\nGabarito\t");
    for (k = 1; k < Alunos; k++)
        printf("Aluno%d\t\t", k);

    printf("\n");
    for (m = 0; m < Questoes; m++)
    {
        printf("Quest %d: %s\t", (m+1), possiveis[posicaoPossiveis[0][m]]); //imprime as respostas para cada quest�o
        for (k = 1; k < Alunos; k++)
        {
            //Aproveitei para j� apurar a pontua��o de cada aluno
            pontuacao[k][m] = pontuacaoAcertou[k][m] - (float) (contErrou[k][m] + contEsqueceu[k][m]) * 0.25;    //0.25 de penaliza��o para erro ou deixar de marcar
            //pontuacao[k][m] = pontuacaoAcertou[k][m] - (float) (contErrou[k][m]) * 0.25;  //Excluida penaliza��o pelo esquecimento
            if (pontuacao[k][m]<0.0)
                pontuacao[k][m]=0.0;

            printf("%.2f\t", pontuacao[k][m]);
            printf("%s\t", possiveis[posicaoPossiveis[k][m]]); //imprime as respostas para cada quest�o
        }
        printf("\n");
    }

    //C�lculo da nota final
    for (k = 1; k < Alunos; k++)
    {
        for (m = 0; m < Questoes; m++)
            nota[k] += pontuacao[k][m];
    }

    for (k = 1; k < Alunos; k++)
    {
        if (nota[k]>=7.0)
        {
            printf("\n\033[44m Aluno %d %.2f %s \033[0m", k, nota[k], "Aprovado");     //em azul
            contAprovado++;
        }
        else
            printf("\n\033[42m\033[41m Aluno %d %.2f %s \033[0m", k, nota[k], "Reprovado");    //em vermelho
    }
    
    printf("\n");
    printf("\n�ndice de aprova��o %.2f%%", (float) (100*contAprovado/(Alunos-1)));
    printf("\n");

    return 0;
}

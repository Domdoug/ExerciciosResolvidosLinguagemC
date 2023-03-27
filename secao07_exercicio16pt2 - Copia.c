/*
Fa�a um programa para corrigir uma prova com 10 quest�es de m�ltipla escolha: a, b, c ou d, 
em uma turma com 3 alunos. Cada quest�o vale 1 ponto. Leia o gabarito e, para cada aluno,
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

#define Alunos 4  // 4 Blocos para alunos: 0 - Gabarito; 1 at� 3 - Respostas multipla escolha dos 3 alunos.
#define Questoes 10 //N�mero de quest�es
#define limInf 1  //menor escolha do teste de m�ltipla escolha: a ou b ou c ou d
#define limSup 15 //Op��es poss�veis do vetor "possiveis"

//fun��o para gerar sele��es aleat�rias
void gen_random_numbers(int *array, int len, int min, int max)
{
    for (int i = 0; i < len; i++)
        array[i] = rand() % (max - min) + min;
}

int main()
{
    setlocale(LC_ALL, "");
    system("cls");

    int i, j, k, m;
    int tamGab=0;
    int tamAluno[Alunos]={0};
    int contAcertou[Alunos]={0}, contErrou[Alunos]={0}, contEsqueceu[Alunos]={0};
    int acertou, esqueceu;
    //int Aluno[Alunos]; //vetor de alunos
    float nota[Alunos];
    
    // Direct initialization of 2-D char array
    //Todas as possibilidades das multiplas escolhas:
    char possiveis[][limSup] = {"a", "ab", "abc", "abcd", "abd", "ac", "acd", "ad",
                        "b", "bc", "bcd", "bd", 
                        "c", "cd", 
                        "d"};

    int numbers[Alunos] = {};   //vetor dos alunos com as respostas

    //Fun��o Inicializadora de n�meros pseudo aleat�rios. 
    srand((unsigned) time(NULL));   //semente aleat�ria
    gen_random_numbers(numbers, Alunos, limInf, limSup);

    // 0 -> numbers[0] para gabarito e 1 at� n-> numbers[1], primeiro aluno para resposta da m�ltipla escolha
    printf("\nGarbarito:\n");
    printf("%s", possiveis[numbers[0]]);
    
    //loop para encontrar o tamanho da string. 
    //Numbers seleciona a posi��o aleat�ria, gerada pela fun��o gen_random_numbers, no array dos poss�veis resultados
    //Alternativamente pode ser utlizada a fun��o strlen() da biblioteca <string.h>
    //o s�mbolo '\0' representa a identifica��o do fim da string
    while (possiveis[numbers[0]][tamGab]!='\0')
        tamGab++;

    //Escolha dos alunos
    printf("\nRespostas dos Alunos:\n");
    for (k = 1; k < Alunos; k++)    //i=1, pois o gabarito i=0 j� foi gerado
    {
        for (m = 0; m < Questoes; m++)
        {
            while (possiveis[numbers[k]][tamAluno[k]]!='\0')
                tamAluno[k]++;  //tamanho da string de respostas do aluno i

            printf("Aluno%d %s\t", k, possiveis[numbers[k]]);
            printf("Length string%d %d\n", k, tamAluno[k]);
        }
    }
    
    //Corre��o do ponto de vista das respostas de m�ltipla escolha.
    //Resultados poss�veis: Acertou ou errou.
    for (k = 1; k < Alunos; k++)
    {
        for (i = 0; i < tamAluno[k]; i++)   //multipla escolha
        {
            acertou=0;
            for (j = 0; j < tamGab; j++)    //gabarito
            {
                if (possiveis[numbers[k]][i]==possiveis[numbers[0]][j])
                {
                    acertou=1;
                    break; //n�o precisa verificar no restante, pois s� existe uma ocorrencia no vetor de possiveis respostas.
                }
            }

            if (acertou==1)  //Se ocorrer ao menos uma resposta certa em cada leitura
                contAcertou[k]++;
            else
                contErrou[k]++;
        }
        //printf("\nAcertou %d", contAcertou[k]);
        //printf("\nErrou %d", contErrou[k]);
        
    }
    

    //Corre��o do ponto de vista do gabarito. 
    //Resultados poss�veis: Acertou ou esqueceu. 
    //N�o precisa contar o acertou. J� feito no passo anterior.
    for (k = 1; k < Alunos; k++)
    {
        for (i = 0; i < tamGab; i++)    //gabarito
        {
            esqueceu=0;  //para n�o permitir que a primeira condi��o do if fique na mem�ria
            for (j = 0; j < tamAluno[k]; j++) //multipla escolha
            {
                if (possiveis[numbers[0]][i]!=possiveis[numbers[k]][j])
                    esqueceu=1;
                else
                {
                    esqueceu=0;
                    break;
                }
                            
            }
            
            if (esqueceu==1)
                contEsqueceu[k]++;
        }
    }
    


    for (k = 1; k < Alunos; k++)
    {
        printf("Acertou %d\t", contAcertou[k]);
        printf("Errou %d\t", contErrou[k]);
        printf("Esqueceu %d\t", contEsqueceu[k]);
        printf("\n");
    }
    
    //c�lculo da nota
    for (k = 1; k < Alunos; k++)
    {
        nota[k] = (float) (contAcertou[k]-contErrou[k]-contEsqueceu[k])/(float) tamGab;
        printf("\nAluno: \t%f", nota[k]);
        
        if (nota[k]>=0.7)
            printf("\n\033[44m %d %s \033[0m", k, "Aprovado");     //em azul
        else
            printf("\n\033[42m\033[41m %d %s \033[0m", k, "Reprovado");    //em vermelho
        
    
        printf("\n"); 

    }
    
    
    /*


    printf("\nGerada uma matriz 3 x 10 aleatoriamente com as op��es a, b, c ou d");
    printf("\n================================================================\n");
    
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            matriz[i][j] = multEscolha[rand() % numItens]; //sorteia um dos conjuntos do array. Funciona em  EBCDIC, ASCII, UTF-8, ISO-Latin-1
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

    //Gerar um gabarito aleat�rio
    for (j = 0; j < colunas; j++)
        gabarito[j] = multEscolha[rand() % numItens]; //sorteia um dos conjuntos do array.
    
    //Imprime o gabarito
    printf("\tGabarito das quest�es:");
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
            if (matriz[i][j]==gabarito[j])  //se a quest�o coincide com o resultado do gabarito
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
*/
    printf("\n");

    return 0;
}

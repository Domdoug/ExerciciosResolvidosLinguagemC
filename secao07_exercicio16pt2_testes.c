/*C�lculo de nota pelo sistema de m�ltipla escolha.
Vou usar o seguinte crit�rio de c�lculo: quantidade de itens certos / quantidade de itens do gabarito
Ou, pelo programa: n_letras_coincidentes_com_o_gabarito (contAcertou) / n_letras do gabarito (tamGab)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define qtdeBlocos 2 // 2 Blocos: 0 - Gabarito; 1 - Respostas da multipla escolha.
#define limInf 1    //uma op��o
#define limSup 15    //op��es poss�veis do vetor de multiescolha
//#define totOpcoes 4  //total de op�oes em uma �nica quest�o de multipla escolha   
//#define numItens 14 //usado na parte randomica. Representa o n�mero de op��es de multipla escolha.

void gen_random_numbers(int *array, int len, int min, int max){
    for (int i = 0; i < len; i++)
        array[i] = rand() % (max - min) + min;  //para n�o incluir o valor no �ndice zero, usar:array[i] = rand() % (max - min + 1) + min
}

int main() {
    system("cls");
    srand((unsigned) time(NULL));
    int i, j;
    int tamMult=0, tamGab=0, contAcertou=0, contErrou=0, contEsqueceu=0;
    int acertou, esqueceu;
    float nota;

    // Direct initialization of 2-D char array
    
    char possiveis[][14] = {"a", "ab", "abc", "abcd", "abd", "ac", "acd", "ad",
                        "b", "bc", "bcd", "bd", 
                        "c", "cd", 
                        "d"};


    int numbers[qtdeBlocos] = {};
    gen_random_numbers(numbers, qtdeBlocos, limInf, limSup);
    
    // 0 -> numbers[0] para gabarito e 1-> numbers[1] para resposta da m�ltipla escolha
    for (i = 0; i < qtdeBlocos; i++)
        printf("\n%d", numbers[i]);
    printf("\n");
    
    printf("\nGabarito:\n");
    printf("%s", possiveis[numbers[0]]);

    //loop para encontrar o tamanho da string. 
    //Alternativamente pode ser utlizada a fun��o strlen() da biblioteca <string.h>
    while (possiveis[numbers[0]][tamGab]!='\0')
        tamGab++;

    printf("\nComprimento da string: %d\n", tamGab);

    printf("\nMultiescolha:\n");
    printf("%s", possiveis[numbers[1]]);

    while (possiveis[numbers[1]][tamMult]!='\0')
        tamMult++;

    printf("\nComprimento da string: %d\n", tamMult);

    //Corre��o do ponto de vista das respostas de m�ltipla escolha. Resultados poss�veis: Acertou ou errou.
    //o s�mbolo '\0' representa a identifica��o do fim da string
    for (i = 0; i < tamMult; i++)        //m�ltipla escolha
    {
        acertou=0;
        for (j = 0; j < tamGab; j++)    //gabarito
        {
            if (possiveis[numbers[1]][i]==possiveis[numbers[0]][j])
            {
                printf("opt multipla %c\t", possiveis[numbers[1]][i]);
                acertou=1;
                break;  //n�o precisaria verificar no restante, pois s� existe uma ocorrencia no vetor de possiveis respostas.
            }
        }

        if (acertou==1) //Se ocorrer ao menos uma resposta certa em cada leitura
            contAcertou++;
        else
            contErrou++;
        
    }

    //Corre��o do ponto de vista do gabarito. Resultados poss�veis: Acertou ou esqueceu. N�o precisa contar o acertou. J� feito no passo anterior.
    for (i = 0; i < tamGab; i++)        //gabarito
    {
        esqueceu=0;
        for (j = 0; j < tamMult; j++)    //multipla escolha
        {
            if (possiveis[numbers[0]][i]!=possiveis[numbers[1]][j])
            {
                printf("opt gabarito %c\t", possiveis[numbers[0]][i]);
                esqueceu=1;
            }
            else
            {
                esqueceu=0;
                break;
            }
        }

        if (esqueceu==1)
            contEsqueceu++;
    }    

    printf("\nAcertou %d", contAcertou);
    printf("\nErrou %d", contErrou);
    printf("\nEsqueceu %d", contEsqueceu);
    
    //c�lculo da nota
    nota = (float) contAcertou/(float) tamGab;
    printf("\nAluno: \t%.2f", nota);
    
    if (nota>0.7)
        printf("\n\033[44m %s \033[0m", "Aprovado");     //em azul
    else
        printf("\n\033[42m\033[41m %s \033[0m", "Reprovado");    //em vermelho
    
   
    printf("\n"); 
    return 0;
}
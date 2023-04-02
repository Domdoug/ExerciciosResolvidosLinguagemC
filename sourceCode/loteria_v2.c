/* OBSERVAÇÕES:
srand(time(NULL)) objetiva inicializar o gerador de números aleatórios
com o valor da função time(NULL). Este por sua vez, é calculado
como sendo o total de segundos passados desde 1 de janeiro de 1970
até a data atual.
Desta forma, a cada execução o valor da "semente" será diferente.
*/


#include <stdio.h>
#include <stdlib.h> //funções rand() e srand()
#include <locale.h>
#include <time.h> //para função time()
#define N 3000 //Total de cartões
int main ()
{
    setlocale(LC_ALL, "");
    int tot_cartao=60; //para o tipo de cartão: 61: para megasena. 80 para quina. 25 para lotofacil. duplasena = 50
    int num_escolhidos=6; //total de apostas por cartão: minimos: 6 para megasena. 5 para quina. 15 para lotofácil.  duplasena = 6

    int freq[tot_cartao]; /* freq é a frequencia do número i+1 */
    int jogo[N][num_escolhidos], jogo1[N][num_escolhidos], i, j, k, aux;
    char ja_consta;

    for (i=0; i<tot_cartao; i++)
        freq[i] = 0;
    srand (time(NULL));
    
    for (i=0; i<N; i++){ //Aqui sorteia os jogos
        for (j=0; j<num_escolhidos; j++){
            do{
                jogo[i][j] = rand() % tot_cartao + 1; /* gera número entre 1 e tot_cartao */
                ja_consta = 'N';
                for (k=0; k<j; k++) //Aqui verifica se o numero ja foi sorteado nesse jogo
                    if (jogo[i][j] == jogo[i][k])
                        ja_consta = 'S';
            }while (ja_consta == 'S'); //Enquanto o numero sorteado for repetido o ciclo se repete
            jogo1[i][j] = jogo[i][j]; //Aqui só faz uma copia para outra matriz
            freq[jogo[i][j]-1]++; //Guarda a quantidade de vezes que cada valor foi sorteado 
                                  //Tem que ser jogo[i][j]-1 porque se não vai tentar acessar o indice 60 do vetor, sendo que só vai até 59.
        }
    }


    for(i=0;i<N;i++){   //Nessa parte o jogo é colocado em ordem crescente
        for(j=0;j<num_escolhidos;j++){
            for(k=j; k<num_escolhidos; k++){
                if(jogo1[i][k]<jogo1[i][j]){
                    aux = jogo1[i][j];
                    jogo1[i][j] = jogo1[i][k];
                    jogo1[i][k] = aux;
                }
            }
        }
    }

    printf("Jogos sorteados\n");
    for(i=0;i<N;i++){ //Aqui os jogos sao impressos na tela
        printf("Jogo %d:    ", i+1);
        for(j=0;j<num_escolhidos;j++)
            printf("%d ", jogo[i][j]);
        printf("(");
        for(j=0;j<num_escolhidos;j++)
            printf("%d ", jogo1[i][j]);
        printf(")\n");
    }
    
    printf("Frequência de cada número\n");
    for (i=0; i<tot_cartao; i++) //Aqui mostra a frequencia de cada numero sorteado
    {
        printf("\t%d: %d", i+1, freq[i]);
        if ((i+1) % 10 == 0)
            printf("\n");
    }


    return 0;
}
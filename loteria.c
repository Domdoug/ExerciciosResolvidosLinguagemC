/*Gerar números para Mega-Sena em Linguagem C
Implementar correções: 
1 - testar se os números estão repetidos
2 - Por em ordem crescente, junto da ordem aleatória gerada.
3 - vetor para imprimir somente depois do item 2
 
*/
#include <stdio.h>
#include <locale.h>
#include <time.h> //para função time()
#include <stdlib.h> //funções rand() e srand()
#define N 4 //Total de cartões

int main(){
    setlocale(LC_ALL, ""); 

    int tot_cartao=60; //para o tipo de cartão: 60: para megasena. 80 para quina. 25 para lotofacil. duplasena = 50
    int num_escolhidos=6; //total de apostas por cartão: minimos: 6 para megasena. 5 para quina. 15 para lotofácil.  duplasena = 6
    int jogo[N][num_escolhidos], jogo1[N][num_escolhidos], i, j, k, aux;
    char ja_consta;
    
    srand((unsigned) time(NULL)); //faz com que os números sejam pseudo aleatórios. Inicializador do gerador de números aleatórios. 
    printf("\033[34m %s \033[0m", "Números gerados:\n");//cor azul  

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
            printf("\033[42m\033[41m %d \033[0m| ", jogo1[i][j]);
        printf(")\n");
    }

    printf("\n"); 
    return(0);  
}


/*
int megasena(int num){ 
 printf("\033[42m \033[37m %d \033[0m | ",num);//cor fundo verde
}
*/


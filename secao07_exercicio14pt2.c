/*
Fa�a um programa paara gerar automaticamente n�meros entre 0 e 99 de uma cartela de bingo. 
Sabendo que cada cartela dever� conter 5 linhas de 5 n�meros, gere estes dados de modo
a n�o ter n�meros repetidos dentro das cartelas. O programa deve exibir na tela a cartela
gerada.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h> //para fun��o time()
#include <stdlib.h> //fun��es rand() e srand()


int main(){
    setlocale(LC_ALL, ""); 

    int tot_cartao=99; //Range de n�meros possiveis no cart�o [1 a 99]
    int linhas=5, colunas=5;
    int jogo[linhas][colunas], jogo1[linhas][colunas], i, j, k;
    char ja_consta;
    
    srand((unsigned) time(NULL)); //faz com que os n�meros sejam pseudo aleat�rios. Inicializador do gerador de n�meros aleat�rios. 
    printf("\033[34m %s \033[0m", "N�meros gerados:\n");//cor azul  

    for (i=0; i<linhas; i++){ //Aqui sorteia os jogos
        for (j=0; j<colunas; j++){
            do{
                jogo[i][j] = rand() % tot_cartao + 1; /* gera n�mero entre 1 e tot_cartao=99 */
                ja_consta = 'N';
                for (k=0; k<j; k++) //Aqui verifica se o numero ja foi sorteado nesse jogo
                    if (jogo[i][j] == jogo[i][k])
                        ja_consta = 'S';
            }while (ja_consta == 'S'); //Enquanto o numero sorteado for repetido o ciclo se repete
            jogo1[i][j] = jogo[i][j]; //Aqui s� faz uma copia para outra matriz
        }
    }

    printf("Cart�o gerado\n");
    for(i=0;i<linhas;i++){ //Aqui os jogos sao impressos na tela
        for(j=0;j<colunas;j++)
            printf("\033[42m\033[41m %d \033[0m| ", jogo1[i][j]);
        printf("\n");

    }

    printf("\n"); 
    return(0);  
}

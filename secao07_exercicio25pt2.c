/*
Faça um programa para determinar a próxima jogada em um jogo da velha. Assumir que
o tabuleiro é representado por uma matriz de 3 x 3, onde cada posição representa uma
das casas do tabuleiro. A matriz pode conter os seguintes valores -1, 0, 1 representando,
respectivamente, uma casa contendo uma peça mínha (-1), uma casa vazia do tabuleiro (0)
e uma casa contendo uma peça do meu oponente (1).
Exemplo:
_______________
| -1 |  1 | 1 |
| -1 | -1 | 0 |
|  0 |  1 | 0 |

Roteiro: 
1-Inicializar uma matriz com valores zero (não preenchidos)
2-Opção para quem inicia o jogo
3-Minha escolha (1), digitado com (scanf) em uma casa na matriz
4-O oponente, computador, (-1) aleatoriamente, escolher outra posição
5-Criar a lógica para print de quem venceu

*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

#define limSup 9  //total de posições no tabuleiro
#define LINHAS 3
#define COLUNAS 3

//Função delay para simular o computador pensando. 
//Desativei, pois já no final o delay demora muito a encaixar na linha/coluna vazia
/*
void delay(double dly){
    // save start time 
    const time_t start = time(NULL);

    time_t current;
    do{
        // get current time 
        time(&current);

        // break loop when the requested number of seconds have elapsed 
    }while(difftime(current, start) < dly);
}
*/

//vetor: 1-linha / 2-coluna / 3-diagonal principal / 4-diagonal secundária
//Jogador 1 (computador). Vermelho. Jogador 2 (eu). Verde
int colorir(int array2[LINHAS][COLUNAS], int vetor, int jogador, int posicao)
{
    int i, j;
    printf("\nResultado\n ");
    switch (vetor)
    {
    case 1:
        for ( i = 0; i < LINHAS; i++)
        {
            for (j = 0; j < COLUNAS; j++)
            {
                if (i == posicao)
                {
                    if (jogador == 1)
                        printf("\t\033[42m\033[41m %d \033[0m", array2[i][j]);  //vermelho
                    else
                        printf("\t\033[44m\033[44m %d \033[0m", array2[i][j]);  //azul
                }
                else
                    printf("\t %d", array2[i][j]);
            }
            printf("\n");
        }
        break;
    case 2:
        for ( i = 0; i < LINHAS; i++)
        {
            for (j = 0; j < COLUNAS; j++)
            {
                if (j == posicao)
                {
                    if (jogador == 1)
                        printf("\t\033[42m\033[41m %d \033[0m", array2[i][j]);  //vermelho
                    else
                        printf("\t\033[44m\033[44m %d \033[0m", array2[i][j]);  //azul
                }
                else
                    printf("\t %d", array2[i][j]);
            }
            printf("\n");
        }
        break;
    case 3:
        for ( i = 0; i < LINHAS; i++)
        {
            for (j = 0; j < COLUNAS; j++)
            {
                if (i == j)
                {
                    if (jogador == 1)
                        printf("\t\033[42m\033[41m %d \033[0m", array2[i][j]);  //vermelho
                    else
                        printf("\t\033[44m\033[44m %d \033[0m", array2[i][j]);  //azul
                }                
                else
                    printf("\t %d", array2[i][j]);
            }
            printf("\n");
        }
        break;
    case 4:
        for ( i = 0; i < LINHAS; i++)
        {
            for (j = 0; j < COLUNAS; j++)
            {
                if (j == LINHAS - 1 - i) //LINHAS - 1 - i
                {
                    if (jogador == 1)
                        printf("\t\033[42m\033[41m %d \033[0m", array2[i][j]);  //vermelho
                    else
                        printf("\t\033[44m\033[44m %d \033[0m", array2[i][j]);  //azul
                }
                else
                    printf("\t %d", array2[i][j]);
            }
            printf("\n");
        }            
    }
    return 0;
}

int confere(int array[LINHAS][COLUNAS])
{
    int i, j;
    int somaLin=0, somaCol=0, somaDiagPrin=0, somaDiagSec=0; 
    
    //checar na linha
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
            somaLin += array[i][j]; 
       
        if (somaLin == 3)
        {
            //Função colorir
            colorir(array, 1, 1, i);     //colorir a linha (1) na cor vermelho (computador=1)
            return 1; //computador
            exit(0);
        }
        else if (somaLin == -3)
        {
            colorir(array, 1, 2, i);     //colorir a linha (1) na cor verde (eu=2)
            return 2;   //eu      
            exit(0);
        }
        somaLin=0;
    }
    //checar na coluna
    for (j = 0; j < COLUNAS; j++)
    {
        for (i = 0; i < LINHAS; i++)
            somaCol += array[i][j]; 
       
        if (somaCol == 3)
        {
            //Função colorir
            colorir(array, 2, 1, j);     //colorir a coluna (2) na cor vermelho (computador=1)
            
            return 1; //computador
            exit(0);
        }
        else if (somaCol == -3)
        {
            colorir(array, 2, 2, j);     //colorir a coluna (2) na cor vermelho (eu=2)
            return 2;   //eu      
            exit(0);
        }
        somaCol=0;
    }
    
    //checar na diagonal principal
    for (i = 0; i < LINHAS; i++)
        somaDiagPrin += array[i][i]; 
       
    if (somaDiagPrin == 3)
    {
        //Função colorir
        colorir(array, 3, 1, i);     //colorir a diagonal (3) na cor vermelho (computador=1)
        return 1; //computador
        exit(0);
    }
    else if (somaDiagPrin == -3)
    {
        colorir(array, 3, 2, i);     //colorir a diagonal principal (3) na cor vermelho (eu=2)
        return 2;   //eu      
        exit(0);
    }

    //checar na diagonal secundária
    for (i = 0; i < LINHAS; i++)
        somaDiagSec += array[i][LINHAS - 1 - i]; 
       
    if (somaDiagSec == 3)
    {
        //Função colorir
        colorir(array, 4, 1, i);     //colorir a diagonal secundária (4) na cor vermelho (computador=1)
        return 1; //computador
        exit(0);
    }
    else if (somaDiagSec == -3)
    {
        colorir(array, 4, 2, i);     //colorir a diagonal secundária (4) na cor vermelho (eu=2)
        return 2;   //eu      
        exit(0);
    }

    return 0;
}


int main()
{
    setlocale(LC_ALL, "");
    int matriz[][COLUNAS]={{1,2,3},
                                {4,5,6},
                                {7,8,9}
    };

    int i, j;
    int computador, eu;
    int opcao;
    char vazio='S';
    int cont=0;
    int resultado;
    
    //Opção de quem incia o jogo da velha
    printf("\n=============== Jogo da velha ===============\n");

    //Matriz com as posições
    //Print da matriz de posições, porém com a sequencia de 1 a 9, definido na inicialização
    printf("\n****** Matriz de posições ******\n");
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
            printf("\t %d", matriz[i][j]);
        printf("\n");
    }    

    //criar matriz inicial de zeros
    for (i = 0; i < LINHAS; i++)
        for (j = 0; j < COLUNAS; j++)
            matriz[i][j]=0;

    //Forma matricial
    printf("\n****** Que comecem os jogos!!! ******\n");
    for (i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
            printf("\t %d", matriz[i][j]);
        printf("\n");
    }

    
    printf("\nDigite quem inicia o jogo, 1 para computador, 2 para você ou zero para sair: ");
    scanf("%d", &opcao);

    //Implementar o 0 para sair
    if (opcao==0)
        exit(0);

    //Se for o computador, gerar o aleatório entre 1 e 9 (0 e 8)
    //O número acima corresponde a posição no tabuleiro
    //Verificar se a posição é diferente de zero (não preenchido)
    //Se estiver preenchido, escolher outro local, aleatoriamente
    //Uso do while
    //Computador:
    srand((unsigned) time(NULL));

    //VER POSSIBILIDADE DE CHAMADA DE FUNÇÃO

    while (cont < limSup)
    {
        if (opcao==2)
        {
            //Depois do computador escolher, agora é sua vez
            //EU
            do
            {
                printf("\nAgora é sua vez! ");
                scanf("%d", &eu);   //eu: 1 a 9
                //eu = rand() % limSup+1;

                switch (eu)
                {
                case 1:
                    if (matriz[0][0]==0)
                    {
                        matriz[0][0]=-1;
                        vazio = 'N';
                    }
                    break;
                case 2:
                    if (matriz[0][1]==0)
                    {
                        matriz[0][1]=-1;
                        vazio = 'N';
                    }
                    break;
                case 3:
                    if (matriz[0][2]==0)
                    {
                        matriz[0][2]=-1;
                        vazio = 'N';
                    }
                    break;
                case 4:
                    if (matriz[1][0]==0)
                    {
                        matriz[1][0]=-1;
                        vazio = 'N';
                    }
                    break;
                case 5:
                    if (matriz[1][1]==0)
                    {
                        matriz[1][1]=-1;
                        vazio = 'N';
                    }
                    break;
                case 6:
                    if (matriz[1][2]==0)
                    {
                        matriz[1][2]=-1;
                        vazio = 'N';
                    }
                    break;
                case 7:
                    if (matriz[2][0]==0)
                    {
                        matriz[2][0]=-1;
                        vazio = 'N';
                    }
                    break;
                case 8:
                    if (matriz[2][1]==0)
                    {
                        matriz[2][1]=-1;
                        vazio = 'N';
                    }
                    break;
                case 9:
                    if (matriz[2][2]==0)
                    {
                        matriz[2][2]=-1;
                        vazio = 'N';
                    }
                    //break;            
                }

            } while (vazio=='S');            
            
            //Alterna quem iniciou para entrar na condicional do outro jogador
            opcao = 1;
            vazio = 'S';  //para quando voltar ao loop, enquanto não entrar em uma casa vazia: loop
            
            //Atualizar a matriz a cada jogada
            //Forma matricial
            for (i = 0; i < LINHAS; i++)
            {
                for (j = 0; j < COLUNAS; j++)
                    printf("\t %d", matriz[i][j]);
                printf("\n");
            }

            // Criar chamada para função conferir. Comando abaixo ficará dentro da função
            // LEITURAS FOR I, J PARA LINHA. DEPOIS COLUNAS. DEPOIS DIAGONAIS
            //Conferencia se venceu
            resultado = confere(matriz);
            if (resultado == 1)
            {
                printf("\n\033[42m\033[41m %s \033[0m %s", "O computador" ,"venceu!!\n");   //vermelho
                exit(0);
            }
            if (resultado == 2)
            {
                printf("\n\033[44m\033[44m %s \033[0m %s\n", "Você", "venceu!!");   //em azul
                exit(0);
            }

        }
        else
        {
            //COMPUTADOR
            printf("\nComputador pensando, aguarde... \n");
            do
            {
                //Funçao delay só para simular o computador pensando
                //delay(1);
                computador = rand() % limSup + 1;  //1 a 9. Posição onde o computador escolheu
                /* se esta posição estiver preenchida, gera outro */
                switch (computador)
                {
                case 1:
                    if (matriz[0][0]==0)
                    {
                        matriz[0][0]=1;
                        vazio = 'N';
                    }
                    break;
                case 2:
                    if (matriz[0][1]==0)
                    {
                        matriz[0][1]=1;
                        vazio = 'N';
                    }
                    break;
                case 3:
                    if (matriz[0][2]==0)
                    {
                        matriz[0][2]=1;
                        vazio = 'N';
                    }
                    break;
                case 4:
                    if (matriz[1][0]==0)
                    {
                        matriz[1][0]=1;
                        vazio = 'N';
                    }
                    break;
                case 5:
                    if (matriz[1][1]==0)
                    {
                        matriz[1][1]=1;
                        vazio = 'N';
                    }
                    break;
                case 6:
                    if (matriz[1][2]==0)
                    {
                        matriz[1][2]=1;
                        vazio = 'N';
                    }
                    break;
                case 7:
                    if (matriz[2][0]==0)
                    {
                        matriz[2][0]=1;
                        vazio = 'N';
                    }
                    break;
                case 8:
                    if (matriz[2][1]==0)
                    {
                        matriz[2][1]=1;
                        vazio = 'N';
                    }
                    break;
                case 9:
                    if (matriz[2][2]==0)
                    {
                        matriz[2][2]=1;
                        vazio = 'N';
                    }
                    //break;            
                }

            } while (vazio=='S');            
            
            //Alterna quem joga agora
            opcao = 2;
            vazio = 'S';

            //Atualizar a matriz a cada jogada
            //Forma matricial
            for (i = 0; i < LINHAS; i++)
            {
                for (j = 0; j < COLUNAS; j++)
                    printf("\t %d", matriz[i][j]);
                printf("\n");
            }
        }

            // Chamada para função conferir na vez do computador.
            //Conferencia se venceu
            resultado = confere(matriz);
            if (resultado == 1)
            {
                printf("\n\033[42m\033[41m %s \033[0m %s", "O computador" ,"venceu!!\n");   //vermelho
                exit(0);
            }
            if (resultado == 2)
            {
                printf("\n\033[44m\033[44m %s \033[0m %s\n", "Você", "venceu!!");   //em azul
                exit(0);
            }

        cont++;
    }

    return 0;
}

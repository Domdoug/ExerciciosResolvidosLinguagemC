/*
Leia uma matriz 5 x 5. Leia, tamb�m, um valor X. O programa dever� fazer uma
busca desse valor na matriz e, ao final, escrever a localiza��o (linha e coluna)
ou uma mensagem de "n�o encontrado"
Vou escrever um c�digo em que a matriz � gerada aleatoriamente, por�m o n�mero
X para a checagem ser� digitado pelo usu�rio. A matriz ainda n�o estar� impressa
quando da digita��o do valor X. Ser� tipo uma adivinha��o se o n�mero foi encontrado. 
*/

#include <stdio.h>
#include <time.h>       //para fun��o time()
#include <stdlib.h>     //fun��es rand() e srand()
#include <locale.h>

#define limSup 50  //valor m�ximo para o gerador de n�meros aleat�rios

int main()
{
    setlocale(LC_ALL, "");
    int linhas=5, colunas=5;
    int matriz[linhas][colunas];
    int i, j;
    int num, encontrou=0;

        //Inicializador do gerador de n�meros aleat�rios. 
    srand((unsigned) time(NULL));

    printf("\nGerada uma matriz 5 x 5 aleatoriamente");
    printf("\n====================================\n");
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            matriz[i][j] = rand() % limSup + 1;
            //para n�o exibir a matriz por hora, desativei o print da matriz
            //printf("matriz[%d][%d]=%d\n", (i+1), (j+1), matriz[i][j]);  
        }
    }

    //Entrada manual
    do
    {
        printf("\nDigite um n�mero entre 1 e 50: ");
        scanf("%d", &num);
    } while (num < 1 || num > 50);

    printf("\n\t Na forma matricial\n");

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("\t %d", matriz[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            if (num==matriz[i][j])
            {
                printf("\nO n�mero digitado %d est� na matriz aleat�ria na posi��o [%d][%d]", num, i+1, j+1);
                encontrou=1;
            }
        }
    }
    if (encontrou==0)
        printf("\nN�mero %d n�o encontrado na matriz aleat�ria", num);
    
    printf("\n");

    return 0;
}

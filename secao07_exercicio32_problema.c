/*
Leia dos vetores de inteiros x e y, cada um com 5 elementos (assuma que o usuário não informa 
elementos repetidos). Calcule e mostre os vetores resultantes em cada caso abaixo:
a) Soma entre x e y: soma de cada elemento de x com o elemento da mesma posição em y.
b) Produto entre x e y: multiplicação de cada elemento de x com o elemento de mesma posição em y.
c) Diferença entre x e y: todos os elementos de x que não existem em y.
d) Interseção entre x e y: apenas os elementos que aparecem nos dois vetores.
e) União entre x e y: todos os elementos de x e todos os elementos de y que não estão em x.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h> //para função time()
#include <stdlib.h> //funções rand() e srand()

#define limSup 50   //intervalo de valores
# define posicoes 5

int main()
{
    setlocale(LC_ALL, "");

    int x[posicoes], y[posicoes]; //v será o vetor de interseção
    int soma[posicoes] = {0};
    int produto[posicoes] = {0};
    int diferenca[posicoes] = {0};
    int intersecao[posicoes] = {0};
    int uniao[posicoes] = {0};
    char ja_consta;
    int i, j;
    //faz com que os números sejam pseudo aleatórios. Inicializador do gerador de números aleatórios. 
    srand((unsigned) time(NULL));

    //VETOR v1 GERADO RANDOMICAMENTE SEM REPETIÇÃO
    for (i = 0; i < posicoes; i++)
    {
        do
        {
            x[i] = rand() % limSup+1; /* gera número entre 1 e limite superior do intervalo */
            ja_consta = 'N';
            for (j = 0; j < posicoes; j++) //Aqui verifica se o numero ja foi sorteado nesse jogo
                if (x[i]==x[j])
                    ja_consta = 'S';
        } while (ja_consta = 'S');
    }

    //VETOR v2 GERADO RANDOMICAMENTE SEM REPETIÇÃO
    for (i = 0; i < posicoes; i++)
    {
        do
        {
            y[i] = rand() % limSup+1; /* gera número entre 1 e limite superior do intervalo */
            ja_consta = 'N';
            for (j = 0; j < i; j++) //Aqui verifica se o numero ja foi sorteado nesse jogo
                if (y[i]==y[j])
                    ja_consta = 'S';
        } while (ja_consta = 'S');
    }

    //a) Soma entre x e y: soma de cada elemento de x com o elemento da mesma posição em y.
    for (i = 0; i < posicoes; i++)
        soma[i]=x[i]+y[i];

    //b) Produto entre x e y: multiplicação de cada elemento de x com o elemento de mesma posição em y.
    for (i = 0; i < posicoes; i++)
        produto[i]=x[i]*y[i];

    //c) Diferença entre x e y: todos os elementos de x que não existem em y.
    for (i = 0; i < posicoes; i++)
        for (j = 0; j < posicoes; j++)
            if (x[i]!=y[i])
                diferenca[i]=x[i];

    //d) Interseção entre x e y: apenas os elementos que aparecem nos dois vetores.
    for (i = 0; i < posicoes; i++)
        for (j = 0; j < posicoes; j++)
            if (x[i]==y[i])
                intersecao[i]=x[i];
        
    //e) União entre x e y: todos os elementos de x e todos os elementos de y que não estão em x.
    //carrega do primeiro vetor
    for (i = 0; i < posicoes; i++)
        uniao[i]=x[i];
    //carrega do primeiro vetor
    for (i = 0; i < posicoes; i++)
        uniao[i+posicoes]=y[i];


    //impressão dos vetores x e y
    for (i = 0; i < posicoes; i++)
    {
        printf("%s(%d) = %d || ", "vetor x", i, x[i]);
        printf("%s(%d) = %d || ", "vetor y", i, y[i]);
        printf("\n");
    }
    printf("\n");

    //Impressão dos resultados
    for (i = 0; i < posicoes; i++)
        printf("%s(%d) = %d || ", "soma", i, soma[i]);
    
    for (i = 0; i < posicoes; i++)
        printf("%s(%d) = %d || ", "produto", i, produto[i]);

    for (i = 0; i < posicoes; i++)
        printf("%s(%d) = %d || ", "diferença", i, diferenca[i]);

    for (i = 0; i < posicoes; i++)
        printf("%s(%d) = %d || ", "interseção", i, intersecao[i]);

    for (i = 0; i < posicoes; i++)
        printf("%s(%d) = %d || ", "uniao", i, uniao[i]);




/*

    printf("Vetor resultante da união de valores de v1 e v2, sem repetir\n");
    for (int i = 0; i <= posicoes2; i++)
    {
        for (int j = i+1; j <= posicoes2; j++)
        {
            repetido=0;
            for (int k = 0; k <= i; k++)
            {
                if (aux[k]==v[i])
                {
                    repetido=1;
                    contRept+=1;
                }
            }
            if (repetido==0)
                aux[i] = v[i];
        }
    }
    
    //Laço para eliminar os índices correspondentes aos números que não receberam valor.
    for (int i = 0; i < posicoes2; i++)
    {
        if (aux[i]!=0)
            printf("%s(%d) = %d\n", "vetor união", i, aux[i]);
        
    }
*/
    printf("\n");

    return 0;
}


/*
Ler dois conjuntos de n�meros reais, armazenando-os em vetores e calcular o produto escalar
entre eles. Os conjuntos t�m 5 elementos cada. Imprimir os dois conjuntos e o produto escalar,
sendo que o produto escalar � dados por: x1 * y1 + x2 * y2 +....+ xn * yn.
*/

#include <stdio.h>
#include <locale.h>
#include <time.h> //para fun��o time()
#include <stdlib.h> //fun��es rand() e srand()

#define limSup 50   //intervalo de valores, para o sorteio.
# define posicoes 5

int main()
{
    setlocale(LC_ALL, "");

    int X[posicoes], Y[posicoes], PE=0;
    //int cont=0;
    //faz com que os n�meros sejam pseudo aleat�rios. Inicializador do gerador de n�meros aleat�rios. 
    srand((unsigned) time(NULL)); 
    //VETOR A, GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
        X[i] = rand() % limSup; /* gera n�mero entre 0 e limite superior do intervalo */
    //VETOR B, GERADO RANDOMICAMENTE
    for (int i = 0; i < posicoes; i++)
        Y[i] = rand() % limSup;

    for (int i = 0; i < posicoes; i++)
    {   //o produto escalar � dados por: x1 * y1 + x2 * y2 +....+ xn * yn.
            PE += X[i]*Y[i];
    }

    printf("\nProduto Escalar dos vetores X e Y.\n");
    for (int i = 0; i < posicoes; i++)
    {
        printf("%s(%d) = %d || ", "X", i, X[i]);
        printf("%s(%d) = %d || ", "Y", i, Y[i]);
        printf("\n");
    }
    printf("%s = %d ", "Produto Escalar dos vetores X e Y", PE);
    printf("\n");
    return 0;

}

/*
Fa�a um programa que leia um vetor de 15 posi��es e o compacte, ou seja, elimine as posi��es
com valor zero. Para isso, todos os elementos � frente do valor zero devem ser movidos uma
posi��o para tr�s no vetor.
*/
/*
Uma solu��o � manter um �ndice para a posi��o de c�pia e outro para a posi��o de leitura. 
A posi��o de c�pia anda para frente quando recebe um n�mero diferente de 0, 
j� a de leitura sempre anda para frente. Ao t�rmino deste processo, 
a posi��o de c�pia ser� o tamanho do vetor compactado.
Nesse loop, h� uma invariante. No caso a invariante � que sempre ao final do loop a vari�vel pos_copia 
est� apontando para uma posi��o a frente do �ltimo elemento do novo vetor compactado.
A garantia de t�rmino do loop tamb�m pode ser conferida, uma vez que a vari�vel pos_leitura sempre 
anda para frente e nunca l� mais elementos do que existiam no vetor original.
*/

#include <stdio.h>

#define MAX_TAM 15

int main()
{ 
    int vet[MAX_TAM];

    // l� entrada
    for(int i = 0; i < MAX_TAM; i++)
    {
        printf("Vetor[%d]: ", i + 1);
        scanf("%d", &vet[i]);
    }

    // realiza-se a c�pia utilizando dois �ndices
    int pos_copia = 0;
    for(int pos_leitura = 0; pos_leitura < MAX_TAM; pos_leitura++)
    {
        if(vet[pos_leitura] == 0)
            continue;

        vet[pos_copia] = vet[pos_leitura];
        pos_copia++;
    }

    // imprime o resultado
    printf("\n");
    for(int i = 0; i < pos_copia; i++)
        printf("VetorFinal [%d] = %d\n", i + 1, vet[i]);
}

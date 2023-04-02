/*
Faça um programa que leia um vetor de 15 posições e o compacte, ou seja, elimine as posições
com valor zero. Para isso, todos os elementos à frente do valor zero devem ser movidos uma
posição para trás no vetor.
*/
/*
Uma solução é manter um índice para a posição de cópia e outro para a posição de leitura. 
A posição de cópia anda para frente quando recebe um número diferente de 0, 
já a de leitura sempre anda para frente. Ao término deste processo, 
a posição de cópia será o tamanho do vetor compactado.
Nesse loop, há uma invariante. No caso a invariante é que sempre ao final do loop a variável pos_copia 
está apontando para uma posição a frente do último elemento do novo vetor compactado.
A garantia de término do loop também pode ser conferida, uma vez que a variável pos_leitura sempre 
anda para frente e nunca lê mais elementos do que existiam no vetor original.
*/

#include <stdio.h>

#define MAX_TAM 15

int main()
{ 
    int vet[MAX_TAM];

    // lê entrada
    for(int i = 0; i < MAX_TAM; i++)
    {
        printf("Vetor[%d]: ", i + 1);
        scanf("%d", &vet[i]);
    }

    // realiza-se a cópia utilizando dois índices
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

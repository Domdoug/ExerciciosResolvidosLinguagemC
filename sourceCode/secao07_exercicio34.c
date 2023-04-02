/*
Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor
Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo
que, caso o usuário digite um número que já foi digitado anteriormente, o programa
deverá pedir para ele digitar outro número. Note que cada valor digitado pelo usuário
dever ser pesquisado no vetor, verificando se ele existe entre os números que já 
foram fornecidos. Exibir na tela o vetor final que foi digitado.
*/

#include <stdio.h>
#define indice 10

int main()
{
    int vetor[indice];
    int Dif, Ok;

    printf("Vetor de 10 elementos distintos (teste repetidos para teste)\n");
    for (int i=0; i<indice; ++i)
    {
        printf("X[%d]: ", i);
        scanf("%d", &vetor[i]);
    
        Ok=0; // Inicializando a variável
        if (i>0)
        { 
            while (Ok != 1)
            {       
                Dif=0;
                    
                for (int j=0; j<i; ++j)
                    if (vetor[i]!=vetor[j]) 
                        Dif++;
                
                /* Caso o valor digitado ainda não
                persista no vetor, este será alocado.*/   
                if (Dif==i)
                    Ok = 1; // Quando Ok é igual a 1, o laço while é finalizado
                else
                {
                    printf("vetor[%d]: ", i);
                    scanf("%d", &vetor[i]);
                }
            }
        }
    }
    // Exibindo o vetor X para o usuário
    for (int i=0; i<indice; ++i)
        printf("%d\t", vetor[i]);
    
    printf("\n");

    return 0;
}




/*
Fa�a um programa para ler 10 n�meros DIFERENTES a serem armazenados em um vetor
Os dados dever�o ser armazenados no vetor na ordem que forem sendo lidos, sendo
que, caso o usu�rio digite um n�mero que j� foi digitado anteriormente, o programa
dever� pedir para ele digitar outro n�mero. Note que cada valor digitado pelo usu�rio
dever ser pesquisado no vetor, verificando se ele existe entre os n�meros que j� 
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
    
        Ok=0; // Inicializando a vari�vel
        if (i>0)
        { 
            while (Ok != 1)
            {       
                Dif=0;
                    
                for (int j=0; j<i; ++j)
                    if (vetor[i]!=vetor[j]) 
                        Dif++;
                
                /* Caso o valor digitado ainda n�o
                persista no vetor, este ser� alocado.*/   
                if (Dif==i)
                    Ok = 1; // Quando Ok � igual a 1, o la�o while � finalizado
                else
                {
                    printf("vetor[%d]: ", i);
                    scanf("%d", &vetor[i]);
                }
            }
        }
    }
    // Exibindo o vetor X para o usu�rio
    for (int i=0; i<indice; ++i)
        printf("%d\t", vetor[i]);
    
    printf("\n");

    return 0;
}




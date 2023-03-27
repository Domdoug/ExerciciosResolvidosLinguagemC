//Fa�a um programa que leia um vetor de 10 posi��es e verifique se existem valores iguais e os escreva na tela

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 10
int main (){
    int i,Vetor[N],aux[N]={0,0,0,0,0,0,0,0,0,0},count=0,j;
    bool repete;//Vari�vel que verifica se existe ou n�o o n�mero no vetor aux
    for(i=0;i<N;i++){
        printf("insira o %d� n�mero\n",i+1);
        scanf("%d",&Vetor[i]);
    }
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(Vetor[i]==Vetor[j]){
                repete=false;//Definir inicialmente como falso
                for(int k=0; k<i; k++)//Pecorre o vetor aux
                {
                    if(aux[k]==Vetor[i]){//Se j� existir fica verdadeiro
                       repete=true;
                    }
                }
                if(!repete){//Se nao existir no vetor ele � adicionado
                    aux[i]=Vetor[i];
                }
            }
        }
    }
    for(int l=0; l<N; l++)//Verifica quantos n�meros repetidos existem no vetor
        if(aux[l]!=0)
            count++;
    printf("existem %d n�meros iguais\n",count);
    printf("os n�meros que aparecem repetidos s�o:\n");
    for(i=0;i<N;i++){
        if(aux[i]!=0)
            printf("%d\n",aux[i]);
    }
    return 0;
}
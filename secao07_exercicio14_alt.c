//Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais e os escreva na tela

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 10
int main (){
    int i,Vetor[N],aux[N]={0,0,0,0,0,0,0,0,0,0},count=0,j;
    bool repete;//Variável que verifica se existe ou não o número no vetor aux
    for(i=0;i<N;i++){
        printf("insira o %dº número\n",i+1);
        scanf("%d",&Vetor[i]);
    }
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(Vetor[i]==Vetor[j]){
                repete=false;//Definir inicialmente como falso
                for(int k=0; k<i; k++)//Pecorre o vetor aux
                {
                    if(aux[k]==Vetor[i]){//Se já existir fica verdadeiro
                       repete=true;
                    }
                }
                if(!repete){//Se nao existir no vetor ele é adicionado
                    aux[i]=Vetor[i];
                }
            }
        }
    }
    for(int l=0; l<N; l++)//Verifica quantos números repetidos existem no vetor
        if(aux[l]!=0)
            count++;
    printf("existem %d números iguais\n",count);
    printf("os números que aparecem repetidos são:\n");
    for(i=0;i<N;i++){
        if(aux[i]!=0)
            printf("%d\n",aux[i]);
    }
    return 0;
}
/*
Faça um programa que leia um vetor de 15 posições e o compacte, ou seja, elimine as posições
com valor zero. Para isso, todos os elementos à frente do valor zero devem ser movidos uma
posição para trás no vetor.
*/

#include <stdio.h>
#include <stdlib.h>

#define indice 15
 
int main() {
 
    int vet[indice];
    int i,aux, s=1, c=0, l;

    for(i=0; i<indice; i++){ //entrada de dados
        printf("Vetor[%d]: ",i+1);
        scanf("%d",&vet[i]);
    }
    for(i=0; i<indice; i++){
        if(vet[i] == 0){
            c++;
        }
    }
    for(i=0; i<indice; i++){
        if(vet[i] == 0){
            s = 1;
            while(i + s < indice && vet[i+s] == 0){
                s++;
            }
            if (i + s >= indice){
                break;
            }
            aux=vet[i];
            vet[i]=vet[i+s];
            vet[i+s]=aux;
        }
    }
    l = indice - c;
    printf("\n");
    for(i=0; i<l; i++){
        if(vet[i] != 0){
            printf("VetorFinal [%d] = %d\n",i+1,vet[i]);
        }
    }
 
    return 0;
}
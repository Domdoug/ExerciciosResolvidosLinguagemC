//Leia um vetor co 20 números inteiros. Escreva os elementos do vetor, eliminando elementos repetidos

#include <stdio.h>
#include <stdlib.h>

int main (){
    int x[20], i, j, cont=0, aux;

    printf("Entre com os valores do vetor.\n");
    for(j=0;j<20;j++){
        printf("Vetor [%d]: ", j);
        scanf("%d", &x[j]);
    }
    printf("\n\n");
    
    for(i=0;i<20;i++){
        for(j=i+1;j<20;j++){
            if(x[i]>x[j]){
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;
            }
        }
    }
    
    cont = 1; //Se está na lista então aparece pelo menos 1 vez
    for(i=1; i<20; i++){ //Note que começa com i=1 para já comparar o segundo com o primeiro no if abaixo:
        if(x[i] == x[i-1]){ //Se é igual ao anterior incrementa o contador
            cont++;
        }
        else { //Se mudou o número
        
            //Acabou de contar o número anterior então podemos imprimir
            //o número de vezes que ele aparece:
            printf("O numero %d aparece %d vezes!\n", x[i-1], cont);
            
            //Recomeça a contagem para o novo número:
            cont = 1;
        }
    }
    //Também imprime para o último número:
    printf("O numero %d aparece %d vezes!\n", x[i-1], cont);
    
    return 0;
}
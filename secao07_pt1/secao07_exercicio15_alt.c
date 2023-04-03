//Leia um vetor co 20 n�meros inteiros. Escreva os elementos do vetor, eliminando elementos repetidos

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
    
    cont = 1; //Se est� na lista ent�o aparece pelo menos 1 vez
    for(i=1; i<20; i++){ //Note que come�a com i=1 para j� comparar o segundo com o primeiro no if abaixo:
        if(x[i] == x[i-1]){ //Se � igual ao anterior incrementa o contador
            cont++;
        }
        else { //Se mudou o n�mero
        
            //Acabou de contar o n�mero anterior ent�o podemos imprimir
            //o n�mero de vezes que ele aparece:
            printf("O numero %d aparece %d vezes!\n", x[i-1], cont);
            
            //Recome�a a contagem para o novo n�mero:
            cont = 1;
        }
    }
    //Tamb�m imprime para o �ltimo n�mero:
    printf("O numero %d aparece %d vezes!\n", x[i-1], cont);
    
    return 0;
}
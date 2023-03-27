//Leia um vetor com 20 n�meros inteiros. Escreva os elementos do vetor, eliminando elementos repetidos

#include <stdio.h>
#include <locale.h>

#define limMax 20

int main()
{
    setlocale(LC_ALL, "");

    //const int limMax = 4; //0, 1...9 (10 n�meros)
    //usei 9999 como o n�mero que ser� usado para separar os repetidos. Se aux[i]= 99999 for encontrado, no fim do programa, � porque neste �ndice
    // ocorreu um valor repetido e foi atribu�do o valor 99999.
    int num[limMax], aux[limMax]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; 
    int i, k, j; 
    int cont=0, repetido, contRept=0;
    
    printf("\n====Retirar valores repetidos do vetor de valores digitados====\n");
    do
    {
        printf("Digite o %d � n�mero na posi��o %d:\n", cont+1, cont);
        scanf("%d", &num[cont]);
        cont++;
    } while (cont < limMax);

    printf("Vetor resultante de valores sem repetir\n");
    for ( i = 0; i <= limMax; i++)
    {
        for ( j = i+1; j <= limMax; j++)
        {
            repetido=0;
            for ( k = 0; k <= i; k++)
            {
                if (aux[k]==num[i])
                {
                    repetido=1;
                    contRept+=1;
                }
                
            }
            if (repetido==0)
            {
                aux[i] = num[i];
            }

        }
    }
    //printf("\n");
    /*
    for(int l=0; l<limMax; l++)//Verifica quantos n�meros repetidos existem no vetor
        if(aux[l]!=0)
            count++;
    printf("existem %d n�meros iguais\n",count);
    printf("os n�meros que aparecem repetidos s�o:\n");
    */
    for(i = 0;i < limMax;i++){
        //aux1[i] = aux[i];
        if(aux[i]!=0)
            printf("%d\n",aux[i]);
    }

    return 0;
}
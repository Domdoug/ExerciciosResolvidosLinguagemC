/*
Leia dos vetores de inteiros x e y, cada um com 5 elementos (assuma que o usuário não informa 
elementos repetidos). Calcule e mostre os vetores resultantes em cada caso abaixo:
a) Soma entre x e y: soma de cada elemento de x com o elemento da mesma posição em y.
b) Produto entre x e y: multiplicação de cada elemento de x com o elemento de mesma posição em y.
c) Diferença entre x e y: todos os elementos de x que não existem em y.
d) Interseção entre x e y: apenas os elementos que aparecem nos dois vetores.
e) União entre x e y: todos os elementos de x e todos os elementos de y que não estão em x.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define indice 5

  //Autor: Mathias Santos Assis

int main()
{
    setlocale(LC_ALL, "");
    /*O vetor x e y pode armazenar até 5 elementos*/

    /*Considerando a hipótese de que todos os elementos
    do vetor X seja diferente do vetor Y, o vetor
    união é declarado com 10 posições*/

    /*Considerando a hipótese de que todos os elementos
    do vetor X seja iguais do vetor Y, o vetor
    interseccao é declarado com 5 posições*/

    /*Considerando a hipótese de que todos os elementos
    do vetor X seja diferentes do vetor Y, o vetor
    Diferenca é declarado com 5 posições*/

    int X[indice], Y[indice], Soma[indice], Produto[indice], Uniao[2*indice];
    int Xclone[indice], Yclone[indice];
    int op, aux, preenchimento_X, preenchimento_Y;

    preenchimento_X = preenchimento_Y = 0;

    // Menu de opção
    printf("Vetores X e Y de 5 elementos, cada\n");
    printf("Se inserir valores repetidos em X ou Y, o sistema persistirá no índice até o valor ser diferente\n");
    printf("<1> Inserir novo vetor X\n");
    printf("<2> Inserir novo vetor Y\n");
    printf("<3> Uniao de X e Y\n");
    printf("<4> Interseccao de X e Y\n");
    printf("<5> Diferenca de X e Y\n");
    printf("<6> Soma de X[i] e Y[i]\n");
    printf("<7> Produto de X[i] e Y[i]\n");
    printf("<8> Sair\n");

    /* Laço infinito (será repetido o bloco
        permanentemente até que o comando
        break seja utilizado)*/ 
    for (int repeat=0; repeat<1; --repeat)
    {
        op = 0; // Garante que ocorra o laço abaixo
        while ((op<1) || (op>8))
        {
            printf("\nA opcao deve estar entre 1 e 8.\n");
            printf("Digite opcao: ");
            scanf("%d",&op);
        } 
        printf("\n"); // Quebra de linha


        int Dif, Ok; // Declarando novas variáveis
    
        /*Tanto o vetor X como o Y, que é preenchido
        escolhendo as repectivas opções 1 e 2,
        não é permitido a inserção de valores
        repetidos dentro do vetor. Ex.: X[0]=4;
        Nenhuma outra posição dentro do vetor
        alocará o número 4.*/

        if (op == 1)
        {
            printf("Vetor X de 5 elementos distintos\n");
            for (int i=0; i<indice; ++i)
            {
                printf("X[%d]: ", i);
                scanf("%d", &X[i]);
            
                Ok=0; // Inicializando a variável
                if (i>0)
                { 
                    while (Ok != 1)
                    {       
                        Dif=0;
                            
                        for (int j=0; j<i; ++j)
                            if (X[i]!=X[j]) 
                                Dif++;
                        
                        /* Caso o valor digitado ainda não
                        persista no vetor, este será alocado.*/   
                        if (Dif==i)
                            Ok = 1; // Quando Ok é igual a 1, o laço while é finalizado
                        else
                        {
                            printf("X[%d]: ", i);
                            scanf("%d", &X[i]);
                        }
                    }
                }
            }
        
            printf("\n");

            // Ordenando o vetor X em ordem crescente
            for (int i = 0; i < indice; ++i)
                Xclone [i] = X[i];
            

            for (int i=0; i<indice; ++i)
            {
                for (int j=0; j<indice; ++j)
                {
                    if (Xclone[j]>Xclone[i])
                    {
                        aux=Xclone[j];
                        Xclone[j]=Xclone[i];
                        Xclone[i]=aux;
                    }
                }
            }
        
            // Exibindo o vetor X para o usuário
            for (int i=0; i<indice; ++i)
                printf("%d\t", Xclone[i]);
        
            /* A variável abaixo ao assumir valor 1,
            indica que o vetor X já foi preenchido */
            preenchimento_X = 1;
        }


        if (op == 2)
        {
            printf("Vetor Y de 5 elementos distintos\n");
            for (int i=0; i<indice; ++i)
            {
                printf("Y[%d]: ", i);
                scanf("%d", &Y[i]);
        
                Ok=0;
                if (i>0)
                { 
                    while (Ok != 1)
                    {       
                        Dif=0;
                            
                        for (int j=0; j<i; ++j)
                            if (Y[i]!=Y[j])
                                Dif++;
                            
                        if (Dif==i) 
                            Ok=1;
                        else
                        {
                            printf("Y[%d]: ", i);
                            scanf("%d", &Y[i]);
                        }
                    }
                }
            }
    
            printf("\n");
            // Ordenando o vetor Y em ordem crescente
            for (int i = 0; i < indice; ++i)
                Yclone[i] = Y[i];

            for (int i=0; i<indice; ++i)
            {
                for (int j=0; j<indice; ++j)
                {
                    if (Yclone[j]>Yclone[i])
                    {
                        aux=Yclone[j];
                        Yclone[j]=Yclone[i];
                        Yclone[i]=aux;
                    }
                }
            }
        
            // Exibindo o vetor Y para o usuário
            for (int i=0; i<indice; ++i)
                printf("%d\t", Yclone[i]);
        
            /* A variável abaixo ao assumir valor 1,
            indica que o vetor Y já foi preenchido */
            preenchimento_Y = 1;
        }


        /* Quando a opção 3 é escolhida será
        gerado o vetor união do vetor X e Y,
        que é formado por todos os elementos do
        vetor X ou Y, excluindo as repetições*/

        int cont=indice;  
        int cont_Igualdade;
        
        if (op == 3)
        {
            /* Se os vetores X e Y estiverem preenchido
            os comandos abaixo seram realizados*/
            printf("União entre X e Y: todos os elementos de X e todos os elementos de Y que não estão em X\n");
            if ((preenchimento_X ==1) && (preenchimento_Y ==1))
            {
                /* Como os elementos do vetor X são todos
                diferentes entre si, as 5 primeiras posições
                do vetor União seram ocupadas respectivamente
                pelas 5 primeiras posições do vetor X. */

                for (int i=0; i<indice; ++i)
                    Uniao[i] = X[i];
            
                for (int i=0; i<indice; ++i)
                {
                    cont_Igualdade=0;
                
                    for (int j=0; j<indice; ++j)
                        if (Y[i] == X[j]) 
                            cont_Igualdade++;
                
                    if (cont_Igualdade==0) 
                        Uniao[cont++] = Y[i];

                }
            
                // Ordenando o vetor Uniao em ordem crescente para visualização
                for (int i=0; i<cont; ++i)
                {
                    for (int j=0; j<cont; ++j)
                    {
                        if (Uniao[j]>Uniao[i])
                        {
                            aux=Uniao[j];
                            Uniao[j]=Uniao[i];
                            Uniao[i]=aux;
                        }
                    }
                }
            
                // Exibindo o vetor Uniao para o usuário
                for (int i=0; i<cont; ++i)
                    printf("%d\t",Uniao[i]); 
                
            }
            else
                printf("Operacao invalida");
        }


        /* Quando a opção 4 é selecionada será
        gerado o vetor da interseccao do vetor X e Y,
        que são os elementos comuns a ambos*/
        
        if (op == 4)
        {
            printf("Interseção entre X e Y: apenas os elementos que aparecem nos dois vetores\n");
            if ((preenchimento_X ==1) && (preenchimento_Y ==1))
            {
                for (int i=0; i<indice; ++i)
                {
                    for (int j=0; j<indice; ++j)
                    {
                        if (X[i] == Y[j])
                        // Exibindo o vetor Interseccao para o usuário
                            printf("%d\t", X[i]);
                    }
                }
            }
            else
                printf("Operacao invalida");
        }


        /*Quando a opção 5 é escolhida será
        gerado o vetor da diferença entre
        o vetor X e Y.
        O vetor formado é constituido pelos elementos
        de X que não pertencem a Y*/
        
        if (op == 5)
        {
            printf("Diferença entre X e Y: todos os elementos de X que não existem em Y\n");
            if ((preenchimento_X ==1) && (preenchimento_Y ==1))
            {
                for (int i=0; i<indice; ++i)
                {
                    cont_Igualdade=0;
                    for (int j=0; j<indice; ++j)
                        if (X[i] == Y[j])
                            cont_Igualdade++;
                
                    // Exibindo o vetor Diferenca para o usuário
                    if (cont_Igualdade==0) 
                        printf("%d\t", X[i]);
                }
            } 
        else
            printf("Operacao invalida");
        }


        //a) Soma entre X e Y: soma de cada elemento de X com o elemento da mesma posição em Y.
        if (op == 6)
        {
            for (int i = 0; i < indice; i++)
                Soma[i]=X[i]+Y[i];

            // Exibindo o vetor Soma para o usuário
            printf("Soma entre X e Y: soma de cada elemento de X com o elemento da mesma posição em Y\n");
            for (int i=0; i<indice; ++i)
                printf("%d\t",Soma[i]); 
        }
        //b) Produto entre X e Y: multiplicação de cada elemento de X com o elemento de mesma posição em Y.
        if (op == 7)
        {
            for (int i = 0; i < indice; i++)
                Produto[i]=X[i]*Y[i];        

            // Exibindo o vetor Produto para o usuário
            printf("Produto entre X e Y: multiplicação de cada elemento de X com o elemento de mesma posição em Y\n");
            for (int i=0; i<indice; ++i)
                printf("%d\t",Produto[i]); 
        }

        /* Ao escolher a opção 6 o programa será
        encerrado, pois o laço for irá ser quebrado*/
        if (op == 8)
            break;    


        /* Ao fim de cada opção as duas
        linhas abaixo será executadas*/
        printf("\n");
        system("pause");

    }
    return 0;

}
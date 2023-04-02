/*
Leia dos vetores de inteiros x e y, cada um com 5 elementos (assuma que o usu�rio n�o informa 
elementos repetidos). Calcule e mostre os vetores resultantes em cada caso abaixo:
a) Soma entre x e y: soma de cada elemento de x com o elemento da mesma posi��o em y.
b) Produto entre x e y: multiplica��o de cada elemento de x com o elemento de mesma posi��o em y.
c) Diferen�a entre x e y: todos os elementos de x que n�o existem em y.
d) Interse��o entre x e y: apenas os elementos que aparecem nos dois vetores.
e) Uni�o entre x e y: todos os elementos de x e todos os elementos de y que n�o est�o em x.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define indice 5

  //Autor: Mathias Santos Assis

int main()
{
    setlocale(LC_ALL, "");
    /*O vetor x e y pode armazenar at� 5 elementos*/

    /*Considerando a hip�tese de que todos os elementos
    do vetor X seja diferente do vetor Y, o vetor
    uni�o � declarado com 10 posi��es*/

    /*Considerando a hip�tese de que todos os elementos
    do vetor X seja iguais do vetor Y, o vetor
    interseccao � declarado com 5 posi��es*/

    /*Considerando a hip�tese de que todos os elementos
    do vetor X seja diferentes do vetor Y, o vetor
    Diferenca � declarado com 5 posi��es*/

    int X[indice], Y[indice], Soma[indice], Produto[indice], Uniao[2*indice];
    int Xclone[indice], Yclone[indice];
    int op, aux, preenchimento_X, preenchimento_Y;

    preenchimento_X = preenchimento_Y = 0;

    // Menu de op��o
    printf("Vetores X e Y de 5 elementos, cada\n");
    printf("Se inserir valores repetidos em X ou Y, o sistema persistir� no �ndice at� o valor ser diferente\n");
    printf("<1> Inserir novo vetor X\n");
    printf("<2> Inserir novo vetor Y\n");
    printf("<3> Uniao de X e Y\n");
    printf("<4> Interseccao de X e Y\n");
    printf("<5> Diferenca de X e Y\n");
    printf("<6> Soma de X[i] e Y[i]\n");
    printf("<7> Produto de X[i] e Y[i]\n");
    printf("<8> Sair\n");

    /* La�o infinito (ser� repetido o bloco
        permanentemente at� que o comando
        break seja utilizado)*/ 
    for (int repeat=0; repeat<1; --repeat)
    {
        op = 0; // Garante que ocorra o la�o abaixo
        while ((op<1) || (op>8))
        {
            printf("\nA opcao deve estar entre 1 e 8.\n");
            printf("Digite opcao: ");
            scanf("%d",&op);
        } 
        printf("\n"); // Quebra de linha


        int Dif, Ok; // Declarando novas vari�veis
    
        /*Tanto o vetor X como o Y, que � preenchido
        escolhendo as repectivas op��es 1 e 2,
        n�o � permitido a inser��o de valores
        repetidos dentro do vetor. Ex.: X[0]=4;
        Nenhuma outra posi��o dentro do vetor
        alocar� o n�mero 4.*/

        if (op == 1)
        {
            printf("Vetor X de 5 elementos distintos\n");
            for (int i=0; i<indice; ++i)
            {
                printf("X[%d]: ", i);
                scanf("%d", &X[i]);
            
                Ok=0; // Inicializando a vari�vel
                if (i>0)
                { 
                    while (Ok != 1)
                    {       
                        Dif=0;
                            
                        for (int j=0; j<i; ++j)
                            if (X[i]!=X[j]) 
                                Dif++;
                        
                        /* Caso o valor digitado ainda n�o
                        persista no vetor, este ser� alocado.*/   
                        if (Dif==i)
                            Ok = 1; // Quando Ok � igual a 1, o la�o while � finalizado
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
        
            // Exibindo o vetor X para o usu�rio
            for (int i=0; i<indice; ++i)
                printf("%d\t", Xclone[i]);
        
            /* A vari�vel abaixo ao assumir valor 1,
            indica que o vetor X j� foi preenchido */
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
        
            // Exibindo o vetor Y para o usu�rio
            for (int i=0; i<indice; ++i)
                printf("%d\t", Yclone[i]);
        
            /* A vari�vel abaixo ao assumir valor 1,
            indica que o vetor Y j� foi preenchido */
            preenchimento_Y = 1;
        }


        /* Quando a op��o 3 � escolhida ser�
        gerado o vetor uni�o do vetor X e Y,
        que � formado por todos os elementos do
        vetor X ou Y, excluindo as repeti��es*/

        int cont=indice;  
        int cont_Igualdade;
        
        if (op == 3)
        {
            /* Se os vetores X e Y estiverem preenchido
            os comandos abaixo seram realizados*/
            printf("Uni�o entre X e Y: todos os elementos de X e todos os elementos de Y que n�o est�o em X\n");
            if ((preenchimento_X ==1) && (preenchimento_Y ==1))
            {
                /* Como os elementos do vetor X s�o todos
                diferentes entre si, as 5 primeiras posi��es
                do vetor Uni�o seram ocupadas respectivamente
                pelas 5 primeiras posi��es do vetor X. */

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
            
                // Ordenando o vetor Uniao em ordem crescente para visualiza��o
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
            
                // Exibindo o vetor Uniao para o usu�rio
                for (int i=0; i<cont; ++i)
                    printf("%d\t",Uniao[i]); 
                
            }
            else
                printf("Operacao invalida");
        }


        /* Quando a op��o 4 � selecionada ser�
        gerado o vetor da interseccao do vetor X e Y,
        que s�o os elementos comuns a ambos*/
        
        if (op == 4)
        {
            printf("Interse��o entre X e Y: apenas os elementos que aparecem nos dois vetores\n");
            if ((preenchimento_X ==1) && (preenchimento_Y ==1))
            {
                for (int i=0; i<indice; ++i)
                {
                    for (int j=0; j<indice; ++j)
                    {
                        if (X[i] == Y[j])
                        // Exibindo o vetor Interseccao para o usu�rio
                            printf("%d\t", X[i]);
                    }
                }
            }
            else
                printf("Operacao invalida");
        }


        /*Quando a op��o 5 � escolhida ser�
        gerado o vetor da diferen�a entre
        o vetor X e Y.
        O vetor formado � constituido pelos elementos
        de X que n�o pertencem a Y*/
        
        if (op == 5)
        {
            printf("Diferen�a entre X e Y: todos os elementos de X que n�o existem em Y\n");
            if ((preenchimento_X ==1) && (preenchimento_Y ==1))
            {
                for (int i=0; i<indice; ++i)
                {
                    cont_Igualdade=0;
                    for (int j=0; j<indice; ++j)
                        if (X[i] == Y[j])
                            cont_Igualdade++;
                
                    // Exibindo o vetor Diferenca para o usu�rio
                    if (cont_Igualdade==0) 
                        printf("%d\t", X[i]);
                }
            } 
        else
            printf("Operacao invalida");
        }


        //a) Soma entre X e Y: soma de cada elemento de X com o elemento da mesma posi��o em Y.
        if (op == 6)
        {
            for (int i = 0; i < indice; i++)
                Soma[i]=X[i]+Y[i];

            // Exibindo o vetor Soma para o usu�rio
            printf("Soma entre X e Y: soma de cada elemento de X com o elemento da mesma posi��o em Y\n");
            for (int i=0; i<indice; ++i)
                printf("%d\t",Soma[i]); 
        }
        //b) Produto entre X e Y: multiplica��o de cada elemento de X com o elemento de mesma posi��o em Y.
        if (op == 7)
        {
            for (int i = 0; i < indice; i++)
                Produto[i]=X[i]*Y[i];        

            // Exibindo o vetor Produto para o usu�rio
            printf("Produto entre X e Y: multiplica��o de cada elemento de X com o elemento de mesma posi��o em Y\n");
            for (int i=0; i<indice; ++i)
                printf("%d\t",Produto[i]); 
        }

        /* Ao escolher a op��o 6 o programa ser�
        encerrado, pois o la�o for ir� ser quebrado*/
        if (op == 8)
            break;    


        /* Ao fim de cada op��o as duas
        linhas abaixo ser� executadas*/
        printf("\n");
        system("pause");

    }
    return 0;

}
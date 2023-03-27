//Fa�a um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a m�dia geral.
// Para debugar: gcc nome_arquivo.c -g
//Sempre que modificar o arquivo e salvar, executar o passo anterior para novo debug.
//Um terminal externo abrir� para ser digitado os valores.
//Se quiser empre executar o debug, na tela do debug, utilizar o comando do bot�o gdb (iniciar)

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    const int limMax = 14; //15 alunos
    int Aluno[limMax]; 
    int cont=0, soma=0;
    float media;

    
    printf("\nLer %d notas de alunos para calcular a m�dia\n", limMax+1);
    do
    {
        printf("Digite a %d � nota:\n", cont+1);
        scanf("%d", &Aluno[cont]);

        if (Aluno[cont]<0 || Aluno[cont]>10)
        {
            printf("\nA nota tem que ser entre 0 (zero) e 10 (dez)\n");
        }else
        {
            soma += Aluno[cont];
            cont++;
        }
           
    } while (cont <= limMax);

    //m�dia dos alunos
    media = (float) soma / (float) cont;
    printf("\nA m�dia das notas � igual a: %.2f", media);

    printf("\n");

    return 0;
}

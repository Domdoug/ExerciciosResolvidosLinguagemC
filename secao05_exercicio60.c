/*
Faça um programa que leia vários números e calcule e mostre:
a) A soma dos números digitados
b) A quantidade de números digitados
c) A média dos números digitados
d) O maior número digitado
e) O menor número digitado
f) A média dos números pares

finalize a entrada de dados caso o usuário informe o valor 0.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, soma=0, totnum=0, maior, menor, somaPares=0, contPares=0;
    float media, mediaPares;
    
    do
    {
        //Entrada
        printf("Digite vários números por vez. Para sair, digite 0 (zero):\t");
        scanf("%d", &num);

        if (num!=0)
        {
            //Estatísticas
            soma+=num;
            totnum++;
            if (totnum==1)
            {
                maior=num;
                menor=num;
            }
            else
            {
                if (num>maior)
                {
                    maior=num;
                }
                else if (num<menor)
                {
                    menor=num;
                }
                
            }
            
            //números pares
            if (num%2==0)
            {
                somaPares+=num;
                contPares++;
            }
        }

    } while (num!=0);

    media = (float) soma/totnum;
    mediaPares = (float) somaPares/contPares;

    //Saídas
    printf("\nA soma dos números digitados é %d"
        "\nA quantidade de números digitados é %d"
        "\nA média de números digitados é %.2f"
        "\nO maior número digitado é %d"
        "\nO menor número digitado é %d"
        "\nA média dos números pares digitados é %.2f\n",
        soma,
        totnum,
        media,
        maior,
        menor,
        mediaPares
    );
    
     return 0;
}

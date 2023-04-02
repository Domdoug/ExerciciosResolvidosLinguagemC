/*
Fa�a um programa que leia v�rios n�meros e calcule e mostre:
a) A soma dos n�meros digitados
b) A quantidade de n�meros digitados
c) A m�dia dos n�meros digitados
d) O maior n�mero digitado
e) O menor n�mero digitado
f) A m�dia dos n�meros pares

finalize a entrada de dados caso o usu�rio informe o valor 0.
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
        printf("Digite v�rios n�meros por vez. Para sair, digite 0 (zero):\t");
        scanf("%d", &num);

        if (num!=0)
        {
            //Estat�sticas
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
            
            //n�meros pares
            if (num%2==0)
            {
                somaPares+=num;
                contPares++;
            }
        }

    } while (num!=0);

    media = (float) soma/totnum;
    mediaPares = (float) somaPares/contPares;

    //Sa�das
    printf("\nA soma dos n�meros digitados � %d"
        "\nA quantidade de n�meros digitados � %d"
        "\nA m�dia de n�meros digitados � %.2f"
        "\nO maior n�mero digitado � %d"
        "\nO menor n�mero digitado � %d"
        "\nA m�dia dos n�meros pares digitados � %.2f\n",
        soma,
        totnum,
        media,
        maior,
        menor,
        mediaPares
    );
    
     return 0;
}

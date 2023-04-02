/*
Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado,
uma sequência arbitrária de notas (válidas no intervalo de 10 a 20) e que mostre na tela,
como resultado, a correspondente média aritmética. O número de notas com que o aluno
pretenda efetuar o cálculo não será fornecido ao programa, o qual terminará quando for
introduzido um valor que não seja válido como nota de aprovação.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num, soma=0, freq_num=0;
    float media;

    printf("\nDigite nota entre 10 e 20, inclusive:\t");
    scanf("%d", &num);

    while (num>=10 && num<=20)
    {
        soma += num;
        freq_num += 1;
        printf("\nDigite nota entre 10 e 20, inclusive:\t");
        scanf("%d", &num);
    }
    media = (float) soma/(float) freq_num;

    if (freq_num>=1)
    {
        printf("\nA quantidade de notas é %d", freq_num);
        printf("\nA média das notas é %.2f\n", media);
    }

    return 0;
}

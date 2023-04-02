/*
Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado,
uma sequ�ncia arbitr�ria de notas (v�lidas no intervalo de 10 a 20) e que mostre na tela,
como resultado, a correspondente m�dia aritm�tica. O n�mero de notas com que o aluno
pretenda efetuar o c�lculo n�o ser� fornecido ao programa, o qual terminar� quando for
introduzido um valor que n�o seja v�lido como nota de aprova��o.
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
        printf("\nA quantidade de notas � %d", freq_num);
        printf("\nA m�dia das notas � %.2f\n", media);
    }

    return 0;
}

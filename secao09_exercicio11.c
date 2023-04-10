/*
Elabore uma fun��o que receba tr�s notas de um aluno como par�metros
e uma letra. Se a letra for A, a fun��o dever� calcular a m�dia aritm�tica
das notas do aluno. Se for P, dever� calcular a m�dia ponderada, com pesos
5, 3 e 2.
*/

#include <stdio.h>
#include <locale.h>

float media(float nota1, float nota2, float nota3, char letra);

int main()
{
    setlocale(LC_ALL, "");
    float nota1, nota2, nota3, resultado;
    char letra;
    printf("====C�lculo da m�dia de nota de um aluno=====\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite A, se c�lculo for m�dia Aritm�tica ou P se Ponderada: ");
    scanf("%s", &letra);

    resultado = media(nota1, nota2, nota3, letra);

    if (letra=='A')
        printf("\nA m�dia aritm�tica corresponde �:%f\n", resultado);
    else
        printf("\nA m�dia ponderada corresponde �:%f\n", resultado);
    
    return 0;
}

float media(float nota1, float nota2, float nota3, char letra){
    
    if (letra=='A') //char65="A";char80="P"
        return (nota1+nota2+nota3)/3.0;
    else
        return (nota1*5.0+nota2*3.0+nota3*2.0)/(5.0+3.0+2.0);
};

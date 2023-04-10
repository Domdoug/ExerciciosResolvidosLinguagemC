/*
Elabore uma função que receba três notas de um aluno como parâmetros
e uma letra. Se a letra for A, a função deverá calcular a média aritmética
das notas do aluno. Se for P, deverá calcular a média ponderada, com pesos
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
    printf("====Cálculo da média de nota de um aluno=====\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite A, se cálculo for média Aritmética ou P se Ponderada: ");
    scanf("%s", &letra);

    resultado = media(nota1, nota2, nota3, letra);

    if (letra=='A')
        printf("\nA média aritmética corresponde à:%f\n", resultado);
    else
        printf("\nA média ponderada corresponde à:%f\n", resultado);
    
    return 0;
}

float media(float nota1, float nota2, float nota3, char letra){
    
    if (letra=='A') //char65="A";char80="P"
        return (nota1+nota2+nota3)/3.0;
    else
        return (nota1*5.0+nota2*3.0+nota3*2.0)/(5.0+3.0+2.0);
};

/*
Faça um programa que leia 2 notas de um aluno, verifique se as notas
são válidas e exiba na tela a média destas notas. Uma nota válida deve ser,
obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota possua um valor
válido, este fato deve ser informado ao usuário e o programa termina.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float nota1, nota2, media;
    printf("Digite o valor de duas notas dos alunos:\t");
    scanf("%f%f", &nota1, &nota2);

    if ((nota1>=0 && nota1<=10) && (nota2>=0 && nota2<=10))
    {
        media = (nota1+nota2)/2;
        printf("A média entre %.2f e %.2f é: %.2f\n", nota1, nota2, media);
    }
    else
    {
        printf("Uma das notas estão fora do intervalo entre 0 e 10\n");
    }
    
    return 0;
}

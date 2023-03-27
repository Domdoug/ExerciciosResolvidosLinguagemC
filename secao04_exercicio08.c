/*
Fa�a um programa que leia 2 notas de um aluno, verifique se as notas
s�o v�lidas e exiba na tela a m�dia destas notas. Uma nota v�lida deve ser,
obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota possua um valor
v�lido, este fato deve ser informado ao usu�rio e o programa termina.
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
        printf("A m�dia entre %.2f e %.2f �: %.2f\n", nota1, nota2, media);
    }
    else
    {
        printf("Uma das notas est�o fora do intervalo entre 0 e 10\n");
    }
    
    return 0;
}

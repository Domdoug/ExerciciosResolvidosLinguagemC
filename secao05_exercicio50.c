/*
Chico  tem 1.50 metro e cresce 2 cent�metros por ano, enquanto Z� tem 1,10
e cresce 3 cent�metros por ano. Escreva um programa que calcule e imprima
quantos anos ser�o necess�rio para que Z� seja maior que Chico.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    const float tx_crescChico=0.02, tx_crescZe=0.03;  //em metros
    float alturaChico=1.5, alturaZe=1.1;
    int t=0;
    
    while (alturaZe < alturaChico) //Chico � mais alto que Z�
    {
        t++;
        alturaChico += tx_crescChico;
        alturaZe +=  tx_crescZe;
    }
    
    printf("\nO tempo t para igualar as estatura �: %d anos", t);
   
    printf("\n");
    return 0;

}
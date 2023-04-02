
/*
Se os n�mero de 1 a 5 s�o inscritos em palavras: um, dois, tr�s, quatro, cinco, ent�o h�
2 + 4 + 4 + 6 + 5 = 22 letras usadas no total. Fa�a um programa que conte quantas letras
seriam utilizadas se todos os n�meros de 1 a 1000 (mil) fossem escritos em palavras.
Obs.: N�o conte espa�os ou h�fens.
*/

#include<stdio.h>    
#include<stdlib.h>
void numbertoword(int n)
{
     switch(n)    
     {    
     case 1:    
     printf("um ");    
     break;    
     case 2:    
     printf("dois ");    
     break;    
     case 3:    
     printf("tres ");    
     break;    
     case 4:    
     printf("quatro ");    
     break;    
     case 5:    
     printf("cinco ");    
     break;    
     case 6:    
     printf("seis ");    
     break;    
     case 7:    
     printf("sete ");    
     break;    
     case 8:    
     printf("oito ");    
     break;    
     case 9:    
     printf("nove ");    
     break;    
     case 0:    
     printf("zero ");    
     break;    
     default:    
     printf("tttt");    
     break;
    }  
}   
int main()
{  
long int n,rev=0,r;    
printf("Please, Enter the number: ");
scanf("%ld",&n);    
while(n>0)    
{    
r=n%10;    
rev=rev*10+r;    
n=n/10;    
}    
n=rev; 
printf("The word form is: ");
while(n>0)    
{    
r=n%10;    
numbertoword(r); 
n=n/10;    
}    
 return 0;  
}  
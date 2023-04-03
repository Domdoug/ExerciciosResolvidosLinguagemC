/*
Escreva um programa que leia um número inteiro positivo n e em seguida
imprima n linhas do chamado Triângulo de Pascal.
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
Dica:
Primeiro preenche tudo com 0, depois preenche a primeira coluna com 1, e a diagonal principal 
com 1... depois vai percorrendo os números abaixo da diagonal principal, usando a regra assim:
Se X[j] == 0, então x[j] = x[i-1][j] + x[i-1][j-1]
==================Código central ====================
for (x = 1; x < linhas; x++)
    for (y = 1; y < x; y++) {
        if (matriz[x][y] == 0) matriz[x][y] = matriz[x-1][y] + matriz[x-1][y-1];
    }
*/


#include <stdio.h>
//#include <math.h>


int main()
{
    int n,coef=0;
    printf("digite um inteiro n: \n");
    scanf("%d", &n);
    
    for (int i=0;i<=n;i++){
        
      for (int j=0;j<=i;j++){
        if (i==0 || j==0)
          coef = 1;
        else
          coef = coef * (i-j+1)/j ;
            
        printf("%d ", coef);
      }
  
      printf("\n");
    }
    return 0;
}


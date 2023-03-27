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

// -------------------------------------------
// Programa, em linguagem C, que le um inteiro
// n >= 1 e imprime as n primeiras linhas do 
// Triangulo de Pascal.
// -------------------------------------------

#include <stdio.h>
#include <stdlib.h>

// Funcao que recebe uma matriz "triangular"
// T com n linhas e a preenche com o Triangulo 
// de Pascal.

void preencher(int n, int **T) {

  int i,j;

  T[0][0] = 1;
  for (i = 1; i < n; i++) {
    T[i][0] = 1;
    T[i][i] = 1;
    for (j = 1; j < i; j++) {
      T[i][j] = T[i-1][j] + T[i-1][j-1];
    }
  }

  return;
}

// Funcao que recebe uma matriz "triangular"
// T com n linhas do Triangulo de Pascal e
// as imprime.

void imprimir(int n, int **T) {
  int i,j;

  for (i = 0; i < n; i++) {
    for (j = 0; j <= i; j++) {
      printf("%5d ", T[i][j]);
    }
    printf("\n");
  }

  return;
}

// Funcao principal.

int main() {
  int n,i,**T;

  printf("Qual eh seu n, parsa? ");
  scanf("%d", &n);

  T = (int **) malloc(n*sizeof(int *));
  if (T == NULL) {
    printf("Flw, parsa\n");
    return(-1);
  }
  
  for (i = 0; i < n; i++) {
    T[i] = (int *) malloc((i+1)*sizeof(int));
    
    if (T[i] == NULL) {
      printf("Flw, parsa\n");
      return(-1);
    }
  }

  if (n <= 0) {
    return(1);
  }

  preencher(n,T);
  imprimir(n,T);

  return(0);
}
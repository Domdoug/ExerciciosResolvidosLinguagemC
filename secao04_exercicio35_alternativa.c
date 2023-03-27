#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificarNumero(char *entrada) {
  int i;
  
  for (i = 0; entrada[i] != '\0'; i++)
  {
    if (entrada[i] != '/' && !isdigit(entrada[i]))
    {
      return 0;
    }
  }
  
  return 1;
}

int verificarData(char *entrada)
{
  const char substring[3] = "//";
  
  if (strstr(entrada, substring) != NULL)
  {
    return 0;
  }
  
  if (verificarNumero(entrada))
  {
    printf("S�o num�ricos.\n");
  }
  else
  {
    printf("N�o s�o num�ricos.\n");
    return 0;
  }
  
  int i = 0;
  long data[3];
  const char delimitador[2] = "/";
  char *token = strtok(entrada, delimitador);
  
  // Alimenta o vetor de inteiros
  while (token != NULL)
  {
    data[i++] = strtol(token, NULL, 10);
    token = strtok(NULL, delimitador);
  }

  // Realize suas valida��es. Se alguma n�o for atingida, retorne '0'
  
  printf("Dia: %d\n", data[0]);
  printf("Mes: %d\n", data[1]);
  printf("Ano: %d\n", data[2]);

  // Caso contr�rio, retorne '1'
  
  return 1;
}

int main()
{
  char str[80];
  
  printf("Digite uma data: ");
  gets(str);
  
  printf("%d\n", verificarData(str));
  
  return(0);
}
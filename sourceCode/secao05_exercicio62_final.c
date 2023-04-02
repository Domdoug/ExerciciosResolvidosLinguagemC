/*
Se os número de 1 a 5 são inscritos em palavras: um, dois, três, quatro, cinco, então há
2 + 4 + 4 + 6 + 5 = 21 letras usadas no total. Faça um programa que conte quantas letras
seriam utilizadas se todos os números de 1 a 1000 (mil) fossem escritos em palavras.
Obs.: Não conte espaços ou hífens.
2 + 4 + 4 + 6 + 2 + 4 + 4 + 4 + 4 + 3 + 4 + 4 + 5 + 7  

Resposta:
Quantidade de letras na sequencia de 1 a 1000 em caracteres é: 19822
Quantidade de números na sequencia de caracteres é: 0
Quantidade de caracteres especiais na sequencia de caracteres é: 3223
*/

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//#define str_size 100 //Declare the maximum size of the string

// Funcion principal
int main()
{
     setlocale(LC_ALL, "");
     
     int letras, digit, splch;
     letras = digit = splch = 0;
     int numero=1; //Alterar aqui, para DEBUG. DEPOIS VOLTAR PARA ZERO e habilitar o scanf
     int limiteSup = 1000;

     while (numero<=limiteSup)
     {
     
          // Variáveis da parte transcrição de números
          int unidade=0;
          int dezena=0;
          int centena=0;
          int milhar=0;
          
          // Variáveis para armazenar o texto
          char sequencia[200];
          //char sequencia[]={0};
          

          // Variáveis da parte contagem de caracteres
          //char str[str_size];
          int i=0;

          // Limpar a sequencia
          sequencia[0]='\0';
          // Solicitar el numero a convertir

          //Habilitar somente quando for para testes
          //printf("\nNumero : ");
          //scanf("%d",&numero);

          // Extraer la unidade y dezena del numero tecleado
          unidade = numero % 10 ;
          dezena = (numero / 10) % 10;
          centena = (numero / 100) % 10;
          milhar = (numero / 1000);

          // Trecho para determinar a parte de milhar
          switch (milhar)
          {
               case 1:
                    if ((centena==0 && dezena==0 && unidade==0) || (centena!=0 && (dezena!=0 || unidade!=0)))
                    {
                         strcat(sequencia,"mil ");
                    }
                    else
                    {
                         strcat(sequencia,"mil e ");
                    }
                    break;
               case 2:
                    if ((centena==0 && dezena==0 && unidade==0) || (centena!=0 && (dezena!=0 || unidade!=0)))
                    {
                         strcat(sequencia,"dois mil ");
                    }
                    else
                    {
                         strcat(sequencia,"dois mil e ");
                    }
                    break;
               case 3:
                    if ((centena==0 && dezena==0 && unidade==0) || (centena!=0 && (dezena!=0 || unidade!=0)))
                    {
                         strcat(sequencia,"tres mil ");
                    }
                    else
                    {
                         strcat(sequencia,"tres mil e ");
                    }
                    break;
               case 4:
                    if ((centena==0 && dezena==0 && unidade==0) || (centena!=0 && (dezena!=0 || unidade!=0)))
                    {
                         strcat(sequencia,"quatro mil ");
                    }
                    else
                    {
                         strcat(sequencia,"quatro mil e ");
                    }
                    break;
               case 5:
                    if ((centena==0 && dezena==0 && unidade==0) || (centena!=0 && (dezena!=0 || unidade!=0)))
                    {
                         strcat(sequencia,"cinco mil ");
                    }
                    else
                    {
                         strcat(sequencia,"cinco mil e ");
                    }
                    break;
               case 6:
                    if ((centena==0 && dezena==0 && unidade==0) || (centena!=0 && (dezena!=0 || unidade!=0)))
                    {
                         strcat(sequencia,"seis mil ");
                    }
                    else
                    {
                         strcat(sequencia,"seis mil e ");
                    }
                    break;
               case 7:
                    if ((centena==0 && dezena==0 && unidade==0) || (centena!=0 && (dezena!=0 || unidade!=0)))
                    {
                         strcat(sequencia,"sete mil ");
                    }
                    else
                    {
                         strcat(sequencia,"sete mil e ");
                    }
                    break;
               case 8:
                    if ((centena==0 && dezena==0 && unidade==0) || (centena!=0 && (dezena!=0 || unidade!=0)))
                    {
                         strcat(sequencia,"oito mil ");
                    }
                    else
                    {
                         strcat(sequencia,"oito mil e ");
                    }
                    break;
               case 9:
                    if ((centena==0 && dezena==0 && unidade==0) || (centena!=0 && (dezena!=0 || unidade!=0)))
                    {
                         strcat(sequencia,"nove mil ");
                    }
                    else
                    {
                         strcat(sequencia,"nove mil e ");
                    }
                    break;                                                                                                                   
          }

          // Trecho para determinar a parte de centena
          switch (centena)
          {
               case 1:
                    //tratamento da dezena com centena: 'e'
                    if (dezena==0 && unidade==0)
                    {
                         strcat(sequencia,"cem");
                    }
                    else
                    {
                         strcat(sequencia,"cento e ");
                    }
                    break;
               case 2:
                    if (dezena==0 && unidade==0)
                    {
                         strcat(sequencia,"duzentos");
                    }
                    else
                    {
                         strcat(sequencia,"duzentos e ");
                    }
                    break;
               case 3:
                    if (dezena==0 && unidade==0)
                    {
                         strcat(sequencia,"trezentos");
                    }
                    else
                    {
                         strcat(sequencia,"trezentos e ");
                    }
                    break;
               case 4:
                    if (dezena==0 && unidade==0)
                    {
                         strcat(sequencia,"quatrocentos");
                    }
                    else
                    {
                         strcat(sequencia,"quatrocentos e ");
                    }
                    break;
               case 5:
                    if (dezena==0 && unidade==0)
                    {
                         strcat(sequencia,"quinhentos");
                    }
                    else
                    {
                         strcat(sequencia,"quinhentos e ");
                    }
                    break;
               case 6:
                    if (dezena==0 && unidade==0)
                    {
                         strcat(sequencia,"seiscentos");
                    }
                    else
                    {
                         strcat(sequencia,"seiscentos e ");
                    }
                    break;
               case 7:
                    if (dezena==0 && unidade==0)
                    {
                         strcat(sequencia,"setecentos");
                    }
                    else
                    {
                         strcat(sequencia,"setecentos e ");
                    }
                    break;
               case 8:
                    if (dezena==0 && unidade==0)
                    {
                         strcat(sequencia,"oitocentos");
                    }
                    else
                    {
                         strcat(sequencia,"oitocentos e ");
                    }
                    break;
               case 9:
                    if (dezena==0 && unidade==0)
                    {
                         strcat(sequencia,"novecentos");
                    }
                    else
                    {
                         strcat(sequencia,"novecentos e ");
                    }
                    break;                                                                                                                   
          }     
          
          // Comprobar las dezenas para crear la sequencia que
          // devuelve el texto correspondiente al numero    
          // dezenas. Aqui tem que ter uma sequencia de ifs.
          if (dezena==1 && unidade==0)
          {
               strcat(sequencia, "dez");
          }
          else if (dezena==1 && unidade==1)
          {
               strcat(sequencia, "onze");
          }
          else if (dezena==1 && unidade==2)
          {
               strcat(sequencia, "doze");
          }
          else if (dezena==1 && unidade==3)
          {
               strcat(sequencia, "treze");
          }
          else if (dezena==1 && unidade==4)
          {
               strcat(sequencia, "catorze");
          }
          else if (dezena==1 && unidade==5)
          {
               strcat(sequencia, "quinze");
          }
          else if (dezena==1 && unidade==6)
          {
               strcat(sequencia, "dezesseis");
          }
          else if (dezena==1 && unidade==7)
          {
               strcat(sequencia, "dezessete");
          }
          else if (dezena==1 && unidade==8)
          {
               strcat(sequencia, "dezoito");
          }
          else if (dezena==1 && unidade==9)
          {
               strcat(sequencia, "dezenove");
          }
          //A partir de 20: vinte e um; vinte e dois, vinte e tres
          //dezena>=2, ou case -> 2
          else if (dezena==2 && unidade==0)
          {
               strcat(sequencia, "vinte");
          }
          else if (dezena==2)
          {
               strcat(sequencia, "vinte e ");
          }
          else if (dezena==3 && unidade==0)
          {
               strcat(sequencia, "trinta");
          }
          else if (dezena==3)
          {
               strcat(sequencia, "trinta e ");
          }
          else if (dezena==4 && unidade==0)
          {
               strcat(sequencia, "quarenta");
          }
          else if (dezena==4)
          {
               strcat(sequencia, "quarenta e ");
          }
          else if (dezena==5 && unidade==0)
          {
               strcat(sequencia, "cinquenta");
          }
          else if (dezena==5)
          {
               strcat(sequencia, "cinquenta e ");
          }
          else if (dezena==6 && unidade==0)
          {
               strcat(sequencia, "sessenta");
          }
          else if (dezena==6)
          {
               strcat(sequencia, "sessenta e ");
          }
          else if (dezena==7 && unidade==0)
          {
               strcat(sequencia, "setenta");
          }
          else if (dezena==7)
          {
               strcat(sequencia, "setenta e ");
          }
          else if (dezena==8 && unidade==0)
          {
               strcat(sequencia, "oitenta");
          }
          else if (dezena==8)
          {
               strcat(sequencia, "oitenta e ");
          }
          else if (dezena==9 && unidade==0)
          {
               strcat(sequencia, "noventa");
          }
          else if (dezena==9)
          {
               strcat(sequencia, "noventa e ");
          }          

          // unidades
          // el problema con las unidades ocurre por que no cumplen una
          // regla fija hasta el numero treinta y por lo tanto hay que evaluar
          // las dezenas para saber a que numero corresponden
          if (unidade == 1 && dezena > 1)
          {
               strcat(sequencia, "um");
          }
          else if (unidade == 1 && dezena == 0)
          {
               strcat(sequencia, "um");
          }
          else if (unidade == 2 && dezena > 1)
          {
               strcat(sequencia, "dois");
          }
          else if (unidade == 2 && dezena == 0)
          {
               strcat(sequencia, "dois");
          }
          else if (unidade == 3 && dezena > 1)
          {
               strcat(sequencia, "tres");
          }
          else if (unidade == 3 && dezena == 0)
          {
               strcat(sequencia, "tres");
          }
          else if (unidade == 4 && dezena > 1)
          {
               strcat(sequencia, "quatro");
          }
          else if (unidade == 4 && dezena == 0)
          {
               strcat(sequencia, "quatro");
          }
          else if (unidade == 5 && dezena > 1)
          {
               strcat(sequencia, "cinco");
          }
          else if (unidade == 5 && dezena == 0)
          {
               strcat(sequencia, "cinco");
          }
          else if (unidade == 6)
          {
               strcat(sequencia, "seis");
          }
          else if (unidade == 7)
          {
               strcat(sequencia, "sete");
          }
          else if (unidade == 8)
          {
               strcat(sequencia, "oito");
          }
          else if (unidade == 9)
          {
               strcat(sequencia, "nove");
          }               

          // Visualizar el resultado
          //printf("\nTexto do numero %d é %s\n",numero, sequencia);     
          //system("PAUSE");

          //Parte da contagem de dígitos

          /* Checks each character of string*/

          while(sequencia[i]!='\0')
          {
               if((sequencia[i]>='a' && sequencia[i]<='z') || (sequencia[i]>='A' && sequencia[i]<='Z'))
               {
                    letras++;
               }
               else if(sequencia[i]>='0' && sequencia[i]<='9')
               {
                    digit++;
               }
               else
               {
                    splch++;
               }

               i++;
          }
          numero++;
     }

    printf("Quantidade de letras na sequencia de 1 a 1000 em caracteres é: %d\n", letras);
    printf("Quantidade de números na sequencia de caracteres é: %d\n", digit);
    printf("Quantidade de caracteres especiais na sequencia de caracteres é: %d\n\n", splch);

}
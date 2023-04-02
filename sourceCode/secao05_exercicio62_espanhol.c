/*
Nuevos ejercicios de programación con solución 
propuestos por un lector del blog www.aprendoencasa.com, 
en esta ocasión las prácticas resueltas a realizar 
consiste en solicitar un número por pantalla y dar 
su equivalente en formato de texto, es decir convertir 
de número a palabra.  El número que se solicita ha de 
ser de dos dígitos ya que solo se convierte los números 
comprendidos entre 0 y 99, aunque seria fácilmente adaptable 
a otras situaciones. Volver a comentar que seguro que existen 
otros tipos de soluciones a los ejercicios aquí propuestos y estaré 
agradecido si queréis realizar algún tipo de comentario 
o plantear alguna solución nueva al ejercicio resuelto 
que aquí se plantea.
*/
// Inclusion de las libreria a utilizar en el programa
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Funcion principal
int main()
{
    // Variables a utilizar por el programa
     int unidad=0;
     int decena=0;
     int numero=0; // para debug, alterar aqui e desabilitar o scanf.
     // Crear variables donde se almacenara el texto
     // a devolver
     char Cadena[200];     
     char Auxiliar[200];
     // Vaciar la cadena
     Cadena[0]='\0';

     // Solicitar el numero a convertir
     printf("\nNumero : ");
     scanf("%d",&numero);
     // Extraer la unidad y decena del numero tecleado
     unidad = numero % 10 ;
     decena = numero / 10 ;
     // Comprobar las decenas para crear la cadena que
     // devuelve el texto correspondiente al numero    
     // Decenas
     switch(decena)
     {
        case 1:
             strcpy(Cadena,"diez");
             break;
        case 2:
             strcpy(Cadena,"veinte");
             break;
        case 3:
             strcpy(Cadena,"treinta");
             break;
        case 4:
             strcpy(Cadena,"cuarenta");
             break;
        case 5:
             strcpy(Cadena,"cincuenta");
             break;
        case 6:
             strcpy(Cadena,"sesenta");
             break;
        case 7:
             strcpy(Cadena,"setenta");
             break;
        case 8:
             strcpy(Cadena,"ochenta");
             break;
        case 9:
             strcpy(Cadena,"noventa");
             break;
     }
     // Unidades
     // el problema con las unidades ocurre por que no cumplen una
     // regla fija hasta el numero treinta y por lo tanto hay que evaluar
     // las decenas para saber a que numero corresponden
     if (decena==0 || decena==2) {
       switch(unidad)
       { 
          case 0:
             strcpy(Cadena,"cero");
             break;
        case 1:
             strcpy(Cadena,"uno");
             break;
        case 2:
             strcpy(Cadena,"dos");
             break;
        case 3:
             strcpy(Cadena,"tres");
             break;
        case 4:
             strcpy(Cadena,"cuatro");
             break;
        case 5:
             strcpy(Cadena,"cinco");
             break;
        case 6:
             strcpy(Cadena,"seis");
             break;
        case 7:
             strcpy(Cadena,"siete");
             break;
        case 8:
             strcpy(Cadena,"ocho");
             break;
        case 9:
             strcpy(Cadena,"nueve");
       }
     }
     if (decena==1) {
       switch(unidad)
       { 
          case 0:
             strcpy(Cadena,"diez");
             break;
        case 1:
             strcpy(Cadena,"once");
             break;
        case 2:
             strcpy(Cadena,"doce");
             break;
        case 3:
             strcpy(Cadena,"trece");
             break;
        case 4:
             strcpy(Cadena,"catorce");
             break;
        case 5:
             strcpy(Cadena,"quince");
             break;
        case 6:
             strcpy(Cadena,"dieciseis");
             break;
        case 7:
             strcpy(Cadena,"diecisiete");
             break;
        case 8:
             strcpy(Cadena,"dieciocho");
             break;
        case 9:
             strcpy(Cadena,"diecinueve");
       }
     }     
     // si se trata de los numeros entre el 20 y 29
     if(decena==2) {
         strcpy(Auxiliar,"veinti");
         strcat(Auxiliar,Cadena);
         strcpy(Cadena,Auxiliar);
     }
     // numeros superios a 29
     if(decena>2) {
        strcat(Cadena," y ");
        switch(unidad)
       { 
        case 1:
             strcat(Cadena,"uno");
             break;
        case 2:
             strcat(Cadena,"dos");
             break;
        case 3:
             strcat(Cadena,"tres");
             break;
        case 4:
             strcat(Cadena,"cuatro");
             break;
        case 5:
             strcat(Cadena,"cinco");
             break;
        case 6:
             strcat(Cadena,"seis");
             break;
        case 7:
             strcat(Cadena,"siete");
             break;
        case 8:
             strcat(Cadena,"ocho");
             break;
        case 9:
             strcat(Cadena,"nueve");
             break;
       }
     }
     // Visualizar el resultado
     printf("\nTexto del numero %d es %s\n",numero,Cadena);     
     system("PAUSE");
}
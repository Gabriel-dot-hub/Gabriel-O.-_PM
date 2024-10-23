#include <stdio.h>
#include <string.h>
#include <ctype.h>

 //cuenta palabras
 //El programa calcula el numero de palabras que hay en la cadena de caracteres

 int cuentap(char *);

 void main(void)
 {
     int  i;
     char fra[50];
     printf("\nIngrese la linea de texto: ");
     gets(fra);
     strcat(fra, ""); //Se genera un espacio en blanco al final de la cadena


     i = cuentap(fra);
     printf("\nLa linea de texto tiene %d palabras", i);
 }

    int cuentap(char *cad)
    {
    //La función cuenta el numero de palabras que hay en la cadena de caracteres
    char *cad0 = "";
    int i = 0;
    cad0 = strcmp(cad, " ");

        while (strcmp(cad, " "))
        {
            strcpy(cad, cad0);
            i++;
            cad0 = strstr (cad + 1, "");
            //se busca un espacio en blanco a partir de la siguiente posición

        }
        return(i);
        }

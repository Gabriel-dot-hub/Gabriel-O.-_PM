#include <stdio.h>


/* Archivos y cadenas de caracteres.
El programa escribe cadenas de caracteres en un archivo */

void main (void)
{
    char cad[50];
    int res;
    FILE *ar;
    if((ar = fopen("C:\\Users\\Gabriel\\Desktop\\Programación\\Gabriel-O.-_PM\\Programas Cap 9\\Programa 9.3\\Prueba.txt", "w")) != NULL)

    /*Se abre el archivo para escritura. En la misma estructura se verifica si
    se pudo abrir*/

   {
       printf("\n¿Desea ingresar una cadena de caracteres? S1-1 No-0:");
       scanf("%d", &res);
       while(res)
       {
           fflush(stdin);
           printf("Ingrese la cadena: ");
           gets(cad);
           fputs(cad, ar); /*Observa la forma como se escribe la cadena en el
           archivo */

           printf("\n¿Desea ingresar otra cadena de caracteres? Si-1 No-0:");
           scanf("%d", &res);
           if(res)
           fputs("\n", ar);
           /*Se indica un salto de línea, expto en la ultima cadena. Si no
           se hiciera esta indicación, la funcion fputs pegaría las cadenas
           y lugo tendriamos dificultades en el momento de leerlas. por otra
           parte, si realizaramos este salto de línea al final de la ultima
           cadena, en la escritura se repetiría la ultima cadena */
       }
       fclose(ar);
    }
    else
        printf("No se puede abrir el archivo");
    }


#include <stdio.h>

/* Archivos y cadenas de caracteres.
El programa lee cadenas de caracteres en un archivo. */

void main (void)
{
    char cad[50];
    FILE *ap;
    if ((ap = fopen ("C:\\Users\\Gabriel\\Desktop\\Programación\\Gabriel-O.-_PM\\Programas Cap 9\\Programa 9.4\\Prueba.txt", "r")) != NULL)
        /*Se abre el archivo para lectura y se verifica si se abrió correctamente.*/
    {
        while (!feof(ap))
        /*Mientras no se detecte el fin de archivo se siguen leyendo cadenas de
        caracteres. */
    {
        fgets(cad, 50, ap);
        /*Observa que la instrucción para leer cadenas requiere de tres
        argumentos */
        puts(cad);  /*expone la cadena en pantalla */
    }
        fclose(ap);
    }
        else
            printf("No se puede abrir el archivo");

}

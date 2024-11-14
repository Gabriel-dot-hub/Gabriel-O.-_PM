#include <stdio.h>

/*Incorpora caracteres
El programa agrega caracteres al archivo libro.txt */

void main(void)
{
    char p1;
    FILE *ar;
    ar = fopen("C:\\Users\\Gabriel\\Desktop\\Programación\\Gabriel-O.-_PM\\Programas Cap 9\\Programa 9.12\\libro.txt", "a");
    /*Se abre el archivo con la opción para incorporar caracteres  */
    if(ar != NULL)
    {
        while ((p1 = getchar())  != '\n')
            fputc(p1, ar);
        fclose(ar);
    }
    else
        printf("No se puede abrir el archivo");
}


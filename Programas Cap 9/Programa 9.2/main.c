#include <stdio.h>

//Archivos y caracteres.
//El programa lee caracteres de un arvhivo

void main (void)
{
    char p1;
    FILE *ar;
    if((ar = fopen("C:\\Users\\Gabriel\\Desktop\\Reservas para GIT\\Programa 9.2\\Lectura.txt", "r")) != NULL)

    {
        while(!feof(ar))
        {
            p1 = fgetc(ar);
            putchar(p1);
        }
        fclose(ar);
    }
    else
        printf("No se puede abrir el arcchivo");
}

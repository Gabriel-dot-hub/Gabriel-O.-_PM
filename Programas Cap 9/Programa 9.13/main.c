#include <stdio.h>

/* Cuenta caracteres.
El programa, al recibir como dato un archivo de texto y un caracter, cuenta
el numero de veces que se encuentra el caracter en el archivo */

int cuenta(char);

void main(void)
{
    int res;
    char car;
    printf("\nIngrese el caracter que se va a buscar en el archivo: ");
    car = getchar();
    res = cuenta(car);
    if (res != -1)
        printf("\n\nEl caracter %c se encuentra en el archivo %d veces", car, res);
    else
        printf("No se puede abrir el archivo");
}


    int cuenta(char car)
    /*Esta funcion determina cuantas veces se encuentra el caracter en el
    archivo */
    {
        int res, con = 0;
        char p;
        FILE *ar;
        if ((ar = fopen ("C:\\Users\\Gabriel\\Desktop\\Programación\\Gabriel-O.-_PM\\Programas Cap 9\\Programa 9.13\\libro.txt", "r")) != NULL)

        {
            while(!feof(ar)) //se manipula el archivo mientras no llegue a su fin
            {
                p = getc(ar);
                if (p == car)
                    con++;
            }
            fclose(ar);
            res = con;

        }
        else
            res = con;
        return(res);
    }


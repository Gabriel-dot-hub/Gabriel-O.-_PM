#include <stdio.h>
#include <ctype.h>

/* Letras minusculas y mayusculas.
El programa, al recibir como dato un archivo formado por cadenas de caracteres
determina el numero de letras minusculas y mayusculas que hay en el archivo  */

void minymay(FILE *);
/*Observa que esta funcion va a recibir un archivo como parámetro */

void main(void)
{
    char p;
    FILE *ar;
    if ((ar = fopen("C:\\Users\\Gabriel\\Desktop\\Programación\\Gabriel-O.-_PM\\Programas Cap 9\\Programa 9.14\\libro.txt", "r")) != NULL)
    {
        minymay(ar);
        /*Se llama a la funcion minymat. Se pasa el archivo ar como parametro */
        fclose(ar);
    }
    else
        printf("No se pudo abrir el archivo");
}
void minymay(FILE *arc)
/*Esta funcion cuenta en numero de minuscular y mayusculas que hay en el
archivo arc. */
{
    int min = 0, may = 0;
    char p;
    while (!feof(arc))
{
    p = fgetc(arc);     //se usa esta funcion para leer caracteres del archivo

    if (iswlower(p))
    min++;

    else
        if(isupper(p))
        may++;
    }
        printf("\nNumero de minusculas: %d", min);
        printf("\nNumero de mayusculas: %d", may);
    }

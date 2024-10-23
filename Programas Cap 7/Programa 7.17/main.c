#include <stdio.h>
#include <string.h>

//Cadena invertida
//EL programa obtiene la cadena unvertida.

char * inverso(char *);

void main(void)
{
    char fra[50], aux[50];
    printf("\nIngrese la linea de texto: ");
    gets(fra);
    strcpy(aux, inverso(fra)); //se copia aux en el resultado de la función inverso
    printf("\nEscribe la linea de texto en forma inversa: ");
    puts(aux);
}

char * inverso(char *cadena)
//la funcion calcula el inverso de una cadena y regresa el resiltado al programa principal
{
    int i = 0, j, lon;
    char cad;
    lon = strlen(cadena);
    j = lon - 1;

    while(i < ((lon - 1) / 2))
    //observa que el reemplazo de los caracteres se debe realizar solamente hasta la mital de la cadena
    {
        cad = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = cad;
        i++;
        j--;
    }
    return(cadena);
    }

#include <stdio.h>
#include <math.h>

/* Funcion matem�tica.
El programa obtiene el resultado de una funci�n.

OP y T. variable de tipo real. */

int main (void)
{
    int OP, T;
    float RES;
    printf("Ingrese la opcion del calculo y el valor entero: ");
    scanf("%d %d", &OP, &T);
    switch (OP)
    {

    case 1:
        RES = T / 5;
        break;
    case 2:
        RES = pow(T,T);
        /* La funci�n pow esta definica en la biblioteca math.h */
        break;
    case 3:
    case 4:
        RES = 6 * T/2;
        break;
    default:
        RES = 1;
        break;

    }
    printf("\nResultado: %7.2f", RES);
}
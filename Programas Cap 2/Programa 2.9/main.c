#include <stdio.h>
#include <math.h>

/*Expresión.
El programa, al recibir como datos tres calores enteros, establece si los
mismos satisfacen una expresión determinada.

R, T, Q: varaibles de tipo entero.
RES: variable de tipo real. */

void main (void)
{
    float RES;
    int R, T, Q;
    printf ("Ingrese los calores de R, T y Q. ");
    scanf ("%d %d %d", &R, &T, &Q);
    RES = pow (R, 4) - pow(T, 3) + 4 * pow(Q, 2);
    if (RES < 820)
            printf ("\nR = %d\tT = %d\t = Q %d", R, T, Q);
}

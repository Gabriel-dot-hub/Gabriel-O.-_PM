#include <stdio.h>

/* Promedio Curso.
El promgrama, al recibir como dato el promedio de un alumno es un curso
universitario, escribe aprobado si su promedio es mayor o igual a 6, o
reprobado en caso contrario.

PRO: variable de tipo real. */

void main (void)
{
    float PRO;
    printf ("Ingrese el promedio del alunmo: ");
    scanf ("%f", &PRO);
    if (PRO >= 6.0)
        printf ("\nAprobadao");
    else
        printf ("\nReprobado");
}

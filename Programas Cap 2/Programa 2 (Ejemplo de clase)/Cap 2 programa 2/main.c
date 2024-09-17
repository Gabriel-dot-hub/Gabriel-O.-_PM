#include <stdio.h>
/* Incremento de precio.
El programa, al recibir como dato el precio de un producto importadom,
incrementea 11% el mismo si éste es unferior a $1,500.
PRE y NPR: variable de tipo real. */

void incremento de precio (void)
{
    float PRE, NPR;
    printf ("Ingrese el precio del producto: ");
    scanf("%f" , &PRE);
    if (PRE > 1500)
{
    NPR = PRE * 1.11;
    printf("\nNuevo precio: %7.2f" ,NPR);
}
}

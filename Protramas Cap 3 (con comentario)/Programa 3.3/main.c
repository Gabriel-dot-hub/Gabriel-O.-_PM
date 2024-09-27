#include <stdio.h>

/* Suma pagos.

El programa, al recibir como datos un conjunto de pagos realizados en el ultimo
mes, obtiene la suma de los mismos.

PAG y SPA: viarables de tipo real.  */

void main (void)
{
    float PAG, SPA; //declaración de la variables pagos (PAG) y SPA que acumula los pagos//
    SPA = 0;    //Inicialización de la variable SPA en 0 //
    printf ("Ingrese el primer pago:\t"); //escribe que se ingrese el primer pago//
    scanf ("%f", &PAG); //lee el numero ingresado y lo almacena en la varaibale PAG //
    while (PAG)    //Estructura repetitiva que dice que para cada PAG diferente de 0 (es decir verdadero) se ejecute el proceso que tiene dentro//
    {
        SPA = SPA + PAG; //añade a la variable SPA la suma del pago ingresado, haciendo la operación de adición //
        printf ("Ingrese el siguiente pago:\t"); //luego de hace la suma pide ingresar el nuevo valor de PAG //
        scanf ("%f", &PAG); //Lee el salario ingresado y lo almacena en pag, entonces vuelve al while para ver si PAG en diferente de 0 //

    }
    printf ("\nEl total de pagos del mes es: %.2f", SPA); // PAG debe ser o para ejercutar esta linea, imprime la suma de los salarios almacenados en SPA//
}

#include <stdio.h>

/*Suma pagos.
El programa obtiene la suma de los pagos realizados el ultimo mes.

PAG y SPA: variables de tipo real. */

void main (void)
{
    float PAG, SPA = 0; //declara las variavles PAG que son los pagos y la suma de los salarios SPA se inicializa en 0
    printf ("Ingrese el primer pago:\t"); // solicita ingresar el primer pago
    scanf ("%f", &PAG); //lee los datos del primer pago y los almacena en PAG

    do      //´para ejecutar este do se necesica auque sea un primer pago en el mes
    {
        SPA = SPA + PAG;        // el programa toma el numero de PAGO y hace la operación de adicion a la  varaible SPA
        printf ("Ingrese el siguiente pago   -0 para terminar-:\t"); //socilita ingresar el proximo salario
        scanf ("%f", &PAG); //Lee el numero del otro salario y lo almacena en PAG
    }
    while (PAG);  //while se usa para que solo si PAG = 0 se imprima el total de los salarios que aparecen en el do
    printf ("\nEl total de pagos del mes es %.2f", SPA); //imprime la cantidad almacenada en SPA + 0
}


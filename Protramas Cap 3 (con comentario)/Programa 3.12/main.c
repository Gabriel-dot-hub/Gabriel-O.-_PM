#include <stdio.h>
#include <math.h>

/* Serie de ULAM.
El programa, al recibir como dato un entero positivo obtiene y escribe
la serie de ULAM

NUM: variable entera  */

void main (void)
{
    int NUM; //declaración de la vairiable entera
    printf ("Ingresa el numero para calcular la serie:"); //solicita depositar un entero positivo
    scanf ("%d", &NUM); //escanea el numero ingresado y lo almacena en NUM
    if (NUM > 0)    //este if se usa para delimitar el valor de NUM debe ser entero positivo
    {                  // si el if es verdadero se ejecta lo que hay en él
        printf ("\nSerue de ULAM\n"); // mensaje que dice serie de ULAM
        printf ("%d \t" , NUM); //Imprime el numero almacenado en NUM
        while (NUM != 1)   //Se ejecuta hasta que NUM sea 1 la secuancia acabará e 1
        {
            if (pow (-1, NUM) > 0) // si NUM es par divide entre 2
                NUM = NUM / 2;
            else
                NUM = NUM * 3 + 1; //si NUM es impar se multiplica por 3 y se le suma 1
            printf ("%d \t", NUM); // imprime lo que vale NUM y ejecuta el while otra vez e imprime otra vez a NUM
        }                           //mientras sea el while verdadero
    }
    else
        printf ("\n NUM deber ser entero positivo"); //se imprime cuendo el valor ingresado es  < 0.
}

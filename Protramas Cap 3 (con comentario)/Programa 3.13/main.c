#include <stdio.h>

/* Fibonacci.
El programa calacula y escribe los primeros 50 numeros de fibonacci.

I, PRI, SEG, SIG: variables de tipo entero- */

void main (void)
{
    int I, PRI = 0, SEG = 1, SIG; //declaración de la varaibles enteras
    printf("\t %d \t %d", PRI, SEG); //imprime los 2 primeros numeros de fibonacci
    for (I = 3; I <= 50; I++) //ciclo for comienza en 3, los otros dos se imprimieron
    {
        SIG = PRI + SEG; //calcula el siguiente numero sumando el primero al segundo
        PRI = SEG; //pone le valor del primero en el segundo
        SEG = SIG; // COloca el segundo en el siguiente
        printf ("\t %d, SIG"); //imprime el siguiente numero de la secuencia calculado
    }
}

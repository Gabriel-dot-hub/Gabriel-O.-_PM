#include <stdio.h>

/*Numeros perfectos.
El programa, al recibir como dato un numero entero positivo como limite, obtiene
los numeros perfecto que hay entre 1 y ese numero, y ademas imprime cuantos numeros
perfectos hay en el intervalo.

I, J, NUM, SUM, C: variables enteras */

void main (void)
{
    int I, J, NUM, SUM, C = 0; //variables enteras
    //I contador de numero actual
    //NUM límite, SUM suma de divisores C contador de numeros perfectos

    printf ("\nIngrese ek numero limite: "); //solicita ingresar el numero límite
    scanf ("%d", &NUM); //lee el numero limite y lo almacena en NUM

    for (I = 1; I <= NUM; I++) //se usa paraencontrar los divisores de I va hasta I/2
    {
        SUM = 0; //reinicia la suma de divisores para el numero actual
        for (J = 1; J <= (I / 2); J++); //clic
        if ((I % J) == 0) // si J es divisor de I se suma a SUM
                SUM += J;
        if (SUM == I) // si J es igual a I el numero es perfecto
        {
            printf ("\n%d es un número perfecto", I); //escribe que I es perfecto
            C++; //incrementa los perfectos
        }
}
    printf ("\nEntre 1 y %d hay un %d numeros perfectos", NUM, C); //Imprime la cantidad de perfectos entre 1 y el numero límite
}

#include <stdio.h>

/* Suma de positivos.
El programa, al recibir como datos N números enteros, obtiene la suma de los
enteros positivos.

I, N, NUM, SUM: variables de tipo entero. */

void main (void)
{
    int I, N, NUM, SUM; //declaracion de la variables de tipo entero//
    SUM = 0;        //inicialización de la variable SUM en o//
    printf ("Ingrese el numero de datos:\t"); //imprime ingresar la cantidad de veces que se va a efectuar la suma de enteros
    scanf ("%d", &N);       //escanea el dato y lo almacena en N, indicando que se sumran N numeros//
    for (I = 1; I <= N; I++) // Estructura repetitiva que evalua N iniciando en 1 e incrementando hasta N veces//
    {
        printf ("Ingrese el numero: %d:\t" , I); // Solicita el numero entero para I mayor y igual a 1//
        scanf ("%d", &NUM);    //escanea el dato ingresado y lo almacena en NUM //
        if (NUM > 0)       // con este if le decimos al programa que para cada NUM mayor a 0 sume este numero a lo que se encuentre en SUM que es 0 N veces //
            SUM = SUM + NUM;

    }
    printf ("\nLa suma de los numeros positivos es: %d" , SUM); //imprime el valor de la suma de los enteros ubicada en la variable SUM //
}

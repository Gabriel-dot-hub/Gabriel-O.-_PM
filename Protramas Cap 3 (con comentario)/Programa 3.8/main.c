#include <stdio.h>


/* Factorial.
El programa calcula el factorial de un numero entero.

FAC, I, NUM: variables de tipo entero. */

void main (void)
{
    int I, NUM; //declaaracion de las varibles enteras I que cuenta el ciclo y NUM para el numero ingresado
    long FAC;  //long es simplemente un entero mas grande que almacena el factorial FAC


   printf ("\nIngrese el numero: "); //solicita ingresar un entero
    scanf ("%d", &NUM); //Lee y almacene el entero ingresado en NUM

    if (NUM >= 0)     //verifica si el numero es mayor o igual a o
    {
        FAC = 1; //inicializacion del factorial en 1
        for (I = 1; I <= NUM; I++) //ciclo para calcular el factori

            FAC *= I; //se utiliza para multiplicar FAC por el valor de I y actualiza el valor de FAC

        printf ("\nEl factorial de %d es: %d", NUM, FAC); //imprime el factorial del entero ingresado

    }
    else
        printf ("\nError en el dato ingresado"); //este else sirve para que si en el if el numero entero es menor a
                                                //0 se imprima "error en el dato ingresado" y acabe el programa
}

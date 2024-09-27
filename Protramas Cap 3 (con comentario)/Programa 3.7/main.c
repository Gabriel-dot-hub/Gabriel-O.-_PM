#include <stdio.h>

/* Lanzamiento de martillo.
El programa, al recibir como dato N lanzamientos de martillo, calcula el promedio
de los lanzamientos de la atleta cubana

I, N: variables de tipo entero.
LAN, SLA = 0: variables de tipo real. */



void main (void)
{
    int I, N;   //declaracion de las variables de tipo entero I para controlar en ciclo de for y N para la cantidad e lanzamientos
    float LAN, SLA = 0;      //se declaran las variables y se inicializa SLA en 0, siendo LAN lanzamientos y SLA
    do          // este do se utiliza para conocer en valor de entrada de lanzamiento y verificar que sea entre 1 y 11
    {
        printf ("Ingrese el numero de lanzamientos:\t");
        scanf("%d", &N);
    }
    while (N < 1 || N > 11);       //Se utiliza N como el control en el while para delimitar en numero de lanzamientos de entrada

    for (I = 1; I <= N; I++)        // para I entre 1 y 11 incrementa a I N veces si y solo si se ejecuta cuando I <= N
    {
        printf ("\nIngrese el lanzamiento %d: ", I);
        scanf ("%f", &LAN);
        SLA = SLA + LAN;        //suma los saltos
    }
    SLA = SLA / N;      // cuando N es falso Se ejecuta la división de cuando fuero los saltos con el numero de saltos
    printf ("\nEl promedio de lanzamientos es: %.2f", SLA);
}

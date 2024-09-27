#include <stdio.h>

/* Nómina de profesores.
El program, al recibir como datos los salarios de los profesores de la una
universidad, obtiene la nómina y el promedio de los salarios.

I: variable de tipo entero.
SAL, NOM y PRO: viarables de tipo real. */

void main (void)
{
    int I = 0;  // declaracion de la variable I (e inicialización en 0) que contará el numero de de salarios para sacar el promedio
    float SAL, PRO, NOM = 0; //declaracion de la variables reales e inicialización de Nómina en 0. SAL serán los salarios y PRO el promedio
    printf ("Ingrese el salario del profesor:\t"); //pide ingresar un salario
    scanf("%f", &SAL); //lee el salario ingresado y lo almacena en SAL.

    do      // Estructura repetitiva que se ejecutará al menos una vez y se repite dependiendo de la condición while en este caso SAL diferente de 0
    {
        NOM = NOM + SAL;    // A la variable NOM opera adicionando el valor del salario ingresado
        I = I + 1;  // I es el numero de sueldos, le suma 1 cada que se ingresa una nuevo
        printf ("Ingrese el salario del profesor -0 para terminar- :\t"); //pido el proximo salario
        scanf ("%f", &SAL); // lee proxiom salario ingresado y empieza el bucle do si SAL es diferente de 0
    }
    while (SAL); //estuctura repetitiva que condiciona el do cuado SAL = 0 salta el do y ejecuta las lineas 25 y 26
    PRO = NOM / I; //se usa para dividir la suma de los salarios entre su cantidad y saca el promedio de //
    printf ("\nNómina: %.2f \t promedio de salarios: %.2f", NOM, PRO); //imprime el valor de NOM e imprime el valor de PRO //
}

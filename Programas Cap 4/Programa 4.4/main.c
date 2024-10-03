#include <stdio.h>

/*Prueba de variables globales, locales y estaticas-
El programa  utiliza funciones en la sque se usan diferentes tupos de
variables */

int f1 (void);
int f2 (void);
int f3 (void);
int f4 (void);     //prototipo de funciones

int K = 3;

void main (void)
{
    int I;
    for (I = 0; I <= 3; I++)
{
        printf ("\nEl resultado de la funcion f1 es: %d", f1());
        printf ("\nEl resultado de la funcion f2 es: %d", f2());
        printf ("\nEl resultado de la funcion f3 es: %d", f3());
        printf ("\nEl resultado de la funcion f4 es: %d", f4());

}
}

int f1 (void)
// f1 utiliza la variable global
{
    K += K;
    return (K);
}

int f2 (void)
// f2 utiliza la variable global
{
    int K = 1;
    K++;
    return (K);
}

int f3 (void)
// f3 utiliza la función estatica
{
    static int K = 8;
    K += 2;
    return (K);
}

int f4 (void)
//f4 utiliza dos variables con el mismo nombre local y global
{
    int K = 5;
    K = K + K; //utiliza local (K) y global (K)
    return (K);
}

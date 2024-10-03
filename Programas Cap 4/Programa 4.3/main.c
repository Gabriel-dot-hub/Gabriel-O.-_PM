#include <stdio.h>

//Conflicto de variables con el mismo nombre

void f1 (void);
int K = 5;

int main (void)
{
    int I;
    for (I = 1; I <= 3; I++)
        f1();
}

    void f1 (void) //la función usa la variable local I y la global I

    {
        int K = 2;  //varaible local
        K += K;
        printf("\nEl valor de la variable local es: %d", K);
        K = K + K;      //uso de ambas variables
                            //el termino "::" no funciona en C
        printf("\nEl valor de la variable global es: %d", K);
    }

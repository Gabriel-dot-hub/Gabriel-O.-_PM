#include <stdio.h>

//Cubo 3
//El programa calcula el cubo de los 10 primeros números naturales con la
//ayuda de una función y utilizando parametros por valor


int cubo (int); //prototipo de función. El parametro es de tipo entero

void main(void)
{
    int I;
    for (I = 1; I <= 10; I++)
        printf("\nEl cubo de I es: %d", cubo (I));
            //llama la función cubo. El paso del parametro es por valor
}

int cubo (int K) //K es un parametro por valor entero
        // la función calcula el cubo del parametro K

        {
            return (K*K*K);
        }

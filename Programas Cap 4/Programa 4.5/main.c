#include <stdio.h>

//Cubo 3
//El programa calcula el cubo de los 10 primeros n�meros naturales con la
//ayuda de una funci�n y utilizando parametros por valor


int cubo (int); //prototipo de funci�n. El parametro es de tipo entero

void main(void)
{
    int I;
    for (I = 1; I <= 10; I++)
        printf("\nEl cubo de I es: %d", cubo (I));
            //llama la funci�n cubo. El paso del parametro es por valor
}

int cubo (int K) //K es un parametro por valor entero
        // la funci�n calcula el cubo del parametro K

        {
            return (K*K*K);
        }

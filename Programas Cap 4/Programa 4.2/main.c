#include <stdio.h>

/* Cubo-2.
El programa calcula le cubo de los 10 primeros n�meros naturales con la ayuda de una funci�n. */


int cubo (void);       //prototipo de funci�n
int I;                  //variable global

void main (void)
{
    int CUB;
    for(I= 1; I <= 10; I++)
    {
        CUB = cubo();   //llamada a la funci�n
        printf ("\nEl cubo de %d es: %d", I, CUB);
    }
}
    int cubo (void)     //declara la funci�n
    //esta funcion calcula el cubo de la variable local I
    {
        int I = 2;  //variable locar entera I con le mismo nombre
        //que la variable global
        return(I*I*I);
    }

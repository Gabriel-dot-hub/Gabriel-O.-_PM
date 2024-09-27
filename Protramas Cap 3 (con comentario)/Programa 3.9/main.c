#include <stdio.h>
/* Serie.
El programa imprime los terminos y obtiene la suma de una determinada serie.

I, SEE y CAM: variable de tipo entero. */


void main (void)
{
    //Inicialización de la variables se inicializa I en 2 siendo el primer termino de la serie
    //CAM que será contador auxiliar
    int I = 2, CAM = 1;
    long SEE = 0;  //variable mas amplia que almacenará los termios de la serie
    while (I <= 2500)      //mientras I sea menor o igual a 2500 se ejecutará el while
    {
        SEE = SEE + I; //Suma lo que hay en I a la variable SEE
        printf ("\t %d", I); //Imprime lo que vale actualizado de I
        if (CAM)
        {              //Si CAM es verdadero (> 1)crementa I a 5
                        //luego decrementa CAM a cero o
            I += 5;
            CAM --;
        }

        else        //si CAM es falso = 0, incrementa I a 3 e incrementa CAM a 1
        {
            I += 3;
            CAM++;
        }
    }
    printf ("\nLa suma de la serie de %1d", SEE); //Imprime la suma de la serie, se una %1d para imprimir varables tipo long
}

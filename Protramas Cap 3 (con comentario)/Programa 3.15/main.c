#include <stdio.h>
#include <math.h>

/*Calculo de P.
El programa obtiene el valor de P aplicando una serie determinada.


I, B, C variables enteras
RES: varaible real doble precision */

void main (void)
{
    int I = 1, B = 0, C; //variables enteras
    double RES; //variables de doble precision
    RES = 4.0 / I; //se inicializa RES con le primer termino de la serie
    C = 1; //inicia el contadore en 1

    while ((fabs (3.1415 - RES)) > 0.0005) //se ejecuta mientas el valor de Pi sea mayor de 0.0005.
    {
        I += 2;
        if (B)
        {


        RES += (double) (4.0 / I); // suma el siguiente termino de la serie (4/1)
        B = 0;      // marca el indicador en suma como o
    }
    else        //alterna para el siguiente negativo
    {
        RES -= (double) (4.0 /I); //Resta el termino negativo de la serie
        B = 1; //marca el indicador de resta como 1.
    }
    C++; //incrementa el contador de terminos
}

printf ("\nNumero de terminos:%d", C); // imprime el total de aprozimaciones para llegar a pi
        }

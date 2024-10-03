#include <stdio.h>

/* Paso de una funcion como parametro por referencia */

int Suma (int X, int Y)
        //este reguresa la suma de  los parametros enteros X e Y

        {
            return (X + Y);
        }
    int Resta(int X, int Y)

        //este resta los parametros enteros X e Y
        {
            return (X - Y);
        }
{
    int Control(int (*apf) (int, int), int X, int Y)
    //esto recibe como parametro otra funcion -La direccion - //
    // y dependiendo cual es esta llama a la suma o resta //
}

        void main(void)
{
    int R1, R2;
    R1 = Control(Suma, 15, 5); //se pasa como parametro la funcion SUMA
    R2 = Control(Resta, 10, 4); //se pasa como parametro la funcion Resta
    printf("\nResultado 1: %d", R1);
}

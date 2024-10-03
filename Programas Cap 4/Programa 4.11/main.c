#include <stdio.h>

/* Mayor divisor
El programa, al recibir como dato un numero entero positivo, calcula
su mayor divisor. */

int mad(int);

void main(void)
{
    int NUM, RES;
    printf ("\nINgresa el numero: ");
    scanf("%d", &NUM);
    RES = mad(NUM);
    printf("\nEl mayor divisor de %d", NUM, RES);
}

int mad(int N1)
//esto calcula el mayor divisor del numero N1
{
    int I = (N1 / 2); //I inicia con el valor divisor mas alto posible

    while (N1 % I)
        //en ciclo se ejecuta mientras (N1 % I) sea diferente de 0
        //cuando es 0 se detiene enocontrando el mayor divisor de N1

            I --;
            return I;
}


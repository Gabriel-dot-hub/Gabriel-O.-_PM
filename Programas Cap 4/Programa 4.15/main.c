#include <stdio.h>

/*Productoria
El programa calcaula la productiría de los N primeros numeros naturales  */


int Productoria(int);

void main(void)
{
    int NUM;

    do
    {
        printf("Ingresa el numero del cual quieres calcular la productoria: ");
        scanf("%d", &NUM);
    }

    while (NUM > 100 || NUM < 1);
    printf("\nLa productoria de %d es: %d", NUM, Productoria(NUM));

    }

    int Productoria(int N)
    //calcula la Productoría de N

    {
        int I, PRO = 1;
        for (I = 1; I <= N; I++)
                PRO *= I;
        return (PRO);
    }

#include <stdio.h>
#include <math.h>


void main(void)
    //el programa con 3 datos de entrada calcula el precio por galon para un consumo
    //Entrada 1 consumo mínimo en L / 100km
    //Entrada 2 consumo maximo en L / 100km
    //Entrada 3 precio del galon de combustible

    //Salida, el costo de galon por km para cada consumo entre min y max
{
    float c_min;
    float c_max;
    float Pgal;

    //Gal_k es mi c_min pero en gal por kilometro que debo multiplicar
    //por el Pgal para cada valor entre c_min y c_max.

    float Gal_k;
    float I;

    printf("Ingresa el valor de consumo minimo L / 100km: ");
    scanf("%f", &c_min);
    printf("Ingresa el valor de consumo maximo L / 100km: ");
    scanf("%f", &c_max);
    printf("Ingresa el costo de galon de combustible: ");
    scanf("%f", &Pgal);

    for(I = c_min; I <= c_max; I++)
    {
        Gal_k = ( I / 100);
         Gal_k = Gal_k / 3.785;

       float Costok = (Gal_k * Pgal);

        printf("Consumo: %.2f L/100km | Costo por km %.6f$ gal/km\n", I, Costok);
    }

    return 0;

}


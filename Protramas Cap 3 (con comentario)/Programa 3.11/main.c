#include <stdio.h>


/* Examen de admisión.
El programa, al recibir como datos una serie de calificaciones de un examen,
obtiene el rango en que se encuentran éstas.

R1, R2. R3. R4 y R5: variable de tipo entero.
CAL: variable de tipo real. */

void main (void)
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0; //Representan los rangos para las calificaciones
    float CAL; //variable de tipo real donde se pondrán las calificaciones
    printf ("Ingresa la calificación del alumno: "); //Solicita ingresar la calificación
    scanf ("%f", &CAL); // lee las calificación y la almacena en CAL
    while (CAL != 1) //Para todo CAL diferente o igual a 1 se ejecuta lo que está en el while
    {
        if (CAL < 4) //si CAL es menor que 4 encrementa R1 por 1
            R1++;
        else
            if (CAL < 6) //si CAL es menor que 6 encrementa R2 por 1
                    R2++;
            else
                if (CAL < 8) //si CAL es menor que 8 encrementa R3 por 1
                        R3++;
                else
                    if(CAL < 9) //si CAL es menor que 9 encrementa R4 por 1
                            R4++;
                    else
                        if (CAL < 10)
                                R5++;
            printf ("Ingresa la calificacion del alumno:"); // solicita otra calificación para procesar
            scanf ("%f" , &CAL); // toma la nueva calificación, la lee y la pone en CAL
    }
    printf("\n0..3.99 = %d", R1); //Muestra las calificaciones en el rango de 0 y 3.99
    printf("\n4..5.99 = %d", R2); //Muestra las calificaciones en el rango de 4 y 5.99
    printf("\n6..7.99 = %d", R3); //Muestra las calificaciones en el rango de 6 y 7.99
    printf("\n8..8.99 = %d", R4); //Muestra las calificaciones en el rango de 8 y 8.99
    printf("\n9..10 = %d", R5); //Muestra las calificaciones en el rango de 9 y 10.0
    }

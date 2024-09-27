#include <stdio.h>
#include <math.h>

/* Pares e impares.
El programa, al recibir como datos N números enteros, obtiene la suma de los
números pares t  calcula el promedio de los impares.

I, N, NUM, SPA, CIM: variables de tipo entero. */

void main (void)
{
    // Declaración de todas la variables e inicialización
    // I cuenta los ciclos de for.
    // N es cuantos datos se procesan
    // NUM almacena cada numero que se ingresa
    // SPA suma de numeros pares
    // SIM suma los impares
    // CIM cuenta todos los numero impares

    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;
    printf ("Ingrese el numero de datos que se van a procesar:\t"); //Solicita los datos a procesar
    scanf ("%d", &N); //lee los numeros ingresados y los almacena en N
    if (N > 0)    //solo se ejecuta para N mayor que o si es = o imprime valor incorrecto
    {
        for (I =1; I <= N; I++)   //estructura repetitica que se ejecutará partiendo de I = 1 N veces
                                    // N es la cantidad de datos indicada por el user.
        {
            printf ("\nIngrese el numero %d:", I);   //solicita los numeros que se van a procesar
            scanf ("%d", &NUM);                   //lee los numeros ingresados y los almacena en NUM
            if (NUM)                          //Para todo NUM veradero > 0, se ejecuta el if
                if (pow (-1, NUM) > 0)
                SPA = SPA + NUM;        // Para el if verdadero A SPA se le suma lo que se almacene en NUM
            else                    //para caso contrario del if toma el valor de NUM y se lo suma a SIM
                                    // e incrementa a CIM en uno 1
            {
                SIM = SIM + NUM;
                CIM++;
            }
       }
        printf ("\nLa suma de los numeros pares es: %d", SPA);      //imprime la suma total de pares almacenada en SPA
        printf ("\nEl promedio de numeros impares es: %5.2f", (float)(SIM / CIM)); //imprime el promedio de los impares e ingresa la variable de SIM dividiendola en CIM
        }
        else
            printf ("\nEl valor de N es incorrecto"); //imprime en el caso de que N sea menor que 0.
    }


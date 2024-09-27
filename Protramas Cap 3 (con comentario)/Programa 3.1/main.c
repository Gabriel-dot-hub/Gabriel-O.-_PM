#include <stdio.h>

/* Nómina.
El programa, al recibir los salarios de 15 profesores, obtiene el total de la
nómina de la universidad.

I: varaible de tipo entero
SAL y NOM: variable de tipo real. */

void main (void)
{
    int I;                   // declaracion de la variable entera I que se usará en el for contar los ciclos//
    float SAL, NOM;                 // declaracion de salario y nomina, SAL para almacenar el salario de cada profesor//
                                    // y NOM para la suma de los salarios que será la nomina total
    NOM = 0;                      // se inicializa NOM = 0 que toma los salarios
    for (I = 1; I <= 15; I++)       //Cliclo que empieza con I =1 y para toda I < o = a 15 pedirá ingresar otro salario incrementando I hasta que I <= 15 sea falso//
    {
        printf ("\Ingrese el salario del profesor %d:\t" , I);      //imprime ingresar el salario del profesor y lo almacena en I//
        scanf ("%f" , &SAL);    // lee el salario ingresado y lo alamcena en la variabale SAL//
        NOM = NOM + SAL;        //Junta los salarios y los suma a nómina mientras se cumpla en for //
    }
    printf ("\nEl total de la nomina es: %.2f" , NOM); //imprime el total de la nómina cuando la condición del for es falsa//
                                                        //luego de haber hecho la suma de los salarios//

}

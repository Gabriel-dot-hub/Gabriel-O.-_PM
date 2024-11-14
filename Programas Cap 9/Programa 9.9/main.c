#include <stdio.h>

/*Alumnos.
El programa lee bloques -Variables de tipo estructura alumno- de un archivo
de acceso directo */

typedef struct {
int matricula;
char nombre[20];
int carrera;
float promedio;
} alumno;

void lee(FILE *);  //prototipo de funcion

void main(void)
{
    FILE *ar;
    if ((ar = fopen ("ad1.dat", "r")) != NULL)
        escribe(ar);
    else
        printf("\nEl archivo no se puede abrir");
    fclose(ar);
}

    void lee(FILE *ap)
    /*Esta funcion se utiliza para leer bloques de acceso directo*/
    {
        alumno alu;

        fread(&alu, sizeof(alumno), 1, ap);
        /*Observa que la funcion fread tiene los mismos argumentos que la funcion
        fwrite del programa anterior. Tambien es importante toamr nota de que cuando
        tenemos que leer los registris de un archivo utilizando una estructura
        repetitiva como el while, debemos realizar una primera lectura antes de
        ingresar al ciclo y luego las siguientes dentro del ciclo, pero como ultima
        instrucción del mismo. Esto se debe a que la lógica que siguen las
        instrucciones fwrite y fread es moverse y leer o escribir segun el caso
        Si no lo hicieramos de esta forma, terminariamos escribiendo la información
        del ultimo registro dos veces. Vamos a realizar un ejemplo sensillo
        para comprobar esto */

        while (!feof (ap))
        {
            printf("\nMatricula: %d", alu.matricula);
            printf("\tCarrera: %d", alu.carrera);
            printf("\tPromedio: %f\t", alu.promedio);
            puts(alu.nombre);
            fread(&alu, sizeof(alumno), 1, ap);
        }
        }


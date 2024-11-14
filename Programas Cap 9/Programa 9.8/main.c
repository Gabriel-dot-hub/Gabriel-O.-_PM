#include <stdio.h>

/* Alumnos.
El programa almacena variables de tipo estructura alumno en un archivo */

typedef struct      //Declaración de la estructura alumno
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
}alumno;

void escribe(FILE *);  //prototipo de función

void main(void)
{
    FILE *ar;
    if ((ar = fopen ("C:\\Users\\Gabriel\\Desktop\\Programación\\Gabriel-O.-_PM\\Programas Cap 9\\Programa 9.8\\doc98.txt", "w")) != NULL)
        escribe(ar);
    else
        printf("\nEl archivo no se puede abrir");
    fclose(ar);
}

    void escribe(FILE *ap)
    /*Esta funcion sirve para leer los datos de los alumnos utilizando una
    estrcutura tipo alumno, que se almacenará posteriormente en un archivo */
    {
        alumno alu;
        int i = 0, r;
        printf("\n¿Desea ingresar informacion sobre alumnos? (Sí-1 No-0): ");
        scanf("%d", &r);
        while(r)
        {
            i++;
            printf("Matricula del alumno %d: ", i);
            scanf("%d", &alu.matricula);
            printf("Nombre del alumno %d: ", i);
            fflush(stdin);
            gets(alu.nombre);
            printf("Carrera del alumno %d: ", i);
            scanf("%d", &alu.carrera);
            printf("Promedio del alumno %d: ", i);
            scanf("%f", &alu.promedio);

            fwrite(&alu, sizeof(alumno), 1, ap);
            /*Observa que la función fwrite tiene cuatro argumentos. El primero se
            utiliza para indicar la variable de tipo estructura que se desea almacenar;
            el segundo muestra el tamaño de esa variable de terminos de bytes; el tercero
            de almacenamiento secundario, y el ultimo representa el apuntador al inicio de
            la estructura FILE */

            printf("\n¿Desea ingorar información sobre mas alumnos? (Si-1 No-0): ");
            scanf("%d", &r);
    }
    }

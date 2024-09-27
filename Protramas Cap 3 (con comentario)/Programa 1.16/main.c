#include <stdio.h>


/*Calificaciones
El programa, al recibir un grupo de calificaciones de un alumno, obtiene el
promedio de calificaciones de cada uno de ellos y ,además, los alumnos con el mejor
y pros promedio.

I, MAT, MAMAT, MEMAT:  variables enteras
CAL, SUM, MAPRO, MEPRO y PRO: variables reales
*/

void main (void)
int I, MAT, MAMAT, MEMAT; //variables enteras
float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0; //variables reales
printf ("\nIngrese la matricula del primer alumno:\t"); //solicita la calificación del primer alumno
scanf ("%d", &MAT); //lee los datos de califiaciaones y los asigna a MAT

while (MAT) //bucle que se ejecuta simore que MAT se diferente de 0
{
    SUM = 0; //reinicia las calificaciones para cada alumno
    for (I = 1; I <= 5; I++)    //ciclo que captura 5 calificaciones del alumno
    {
        printf("\nINgrese la calificacion del aliumno:", I); //solicita otra vez las 5 calificaicones para otro alumno
        scanf("%f", CAL); //lee las califiaciones y las asiga a CAL
        SUM += CAL; //suma CAL a SUM
    }
    PRO = SUM / 5; //La suma entre 5 es promedio
    printf ("\nMatricula: %d\tPromedio: %5.2f", MAT, PRO); //imprime matroiicula y promedio del alumno
    if (PRO > MAPRO) //Compara el promedio con el mejor que haya
    {
        MAPRO = PRO; //actualiza el mejor promedio
        MAMAT = MAT; //Junto a la matricula
    }
    if (MEPRO < PRO) //verifica si el registrado es menor al menor registrado
    {

            MEPRO = PRO; //actualiza peor promedio
            MAMAT = MAT; //junto con la matricula
}
    printf("\nIngrese la matrícula del siguiente alumno: ");//pide ingresar la matricula del siguiente
    scanf("%d", &MAT); //lee la matrpicula y la almacena en MAT
 }
  printf ("\n\nAlumno con mejor promedio:\t%d\t\%5.2f", MAMAT, MAPRO); //Imprime mejor promedio y matricula correspondiente
  printf ("\n\nAlumno con peor  promedio:\t%d\t\%5.2f", MEMAT, MEPRO); //Imprime PEOr promedio y matricula correspondiente
}

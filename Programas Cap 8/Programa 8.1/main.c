#include <stdio.h>
#include <string.h>

/* Estructuras -1
El progmrama muestra la menera en que se declara auna estructura, así comop la
forma en que se tiene acceso a los campos de la variables de tipo
estructura tando para asignación de valores como para lectura y escritura. */

struct alumno  //declaracion de la estructura
{
    int matricula;
    char nombre[20];
    char carrera[20];   // campos de la estructura
    float promedio;
    char direccion[20];

};
// la declaración de una estructura termina con un punto y coma */

    void main(void)
    {
    /* observa que las variables de tipo estructura se declaran como cualquier otra
    variable. a1, a2 y a3 son varaibles e tipo estructura alimno*/
    struct alumno a1 = {120, "Maria", "contabilidad", 8.9, "Queretaro"};
    struct alumno *a3, *a4, *a5, a6;


    /* los campos de a1 reciben valores directamente   */

    char nom[20], car[20], dir[20];
    int mat;
    float pro;


    /* Los campos de a2 reciben valores por medio de una lectura. */

    printf("\nIngrese la matricula del alumno 2; ");
    scanf("%d", &a6.matricula);
    fflush(stdin);

    printf("Ingrese el nombre del alumno 2: ");
    gets(a2.nombre);

    printf("Ingrese la carrera del alumno 2:");
    gets(a2.carrera);

    printf("Ingrese el promedio del alumno 2: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);

    printf("Ingrese la direccion del alumno 2: ");
    gets(a2.direccion);

    /* Los campos de a3 reciben valores por medio de asignaciones. */

    printf("\nIngrese la matricula del alumno 3: ");
    scanf("%d", &mat);

    a3.matricula = mat;
    fflush(stdin);

    printf("Ingrese el nomnbre del alumno 3: ");
    gets(nom);
    strcpy(a3.nombre, nom);

    printf("Ingrese la carrera del alumno 3: ");
    gets(car);
    strcpy(a3.carrera, car);

    printf("Ingrese el promedio del alumno 3: ");
    scanf("%f", &pro);
    a3.promedio = pro;
    fflush(stdin);

    printf("Ingrese la direccion del alumno 3: ");
    gets(dir);
    strcpy(a3.direccionm, dir;)

    /* Observe la forma en que se imprimen los campos de a1 y a2. */
    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.direccion);

    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.direccion);

    /* Observa otra forma de escribir los campos de la variable de tipo estructura a3. */
    printf("\nDatos del alumno 3\n");
    printf("%d, \t %s \t %s \t %.2f \t %s", a3.matricula, a3.nombre, a3.carrara, a3.promedio, a3.direccion);

    }


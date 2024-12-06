#include <stdio.h>  // Biblioteca para entrada y salida estándar
#include <stdlib.h> // Biblioteca para funciones generales como malloc, exit
#include <string.h> // Con esta Biblioteca se manejarán las cadenas de texto

// Constantes
#define MAX_ALUMNOS 100 // Número máximo de alumnos permitido
#define NOMBRE_MAX 50   // Longitud máxima del nombre
#define CARRERA_MAX 50  // Longitud máxima de la carrera

//IMOPORTANTE//
//Mi programa define la estructura y para administrar los datos del alumno
//Definí las funciones y las fuí llamando una a una de manera que con en switch
//y con cada case entonces pueda llamar las funciones específicas y ejecuar cualquiera
//de ellas.

// Definición de la estructura Alumno
typedef struct
{
    char nombre[NOMBRE_MAX]; // Almacena el nombre del alumno
    float promedio;          // Almacena el promedio del alumno
    char carrera[CARRERA_MAX]; // Almacena la carrera del alumno
} Alumno;

// Declaración de funciones
void nuevoArchivo();                                // Crear un nuevo archivo vacío
void abrirArchivo(Alumno alumnos[], int *numAlumnos); // Leer datos desde un archivo
void guardarArchivo(Alumno alumnos[], int numAlumnos); // Guardar datos en un archivo
void buscarAlumno(Alumno alumnos[], int numAlumnos); // Buscar un alumno por nombre
void agregarAlumno(Alumno alumnos[], int *numAlumnos); // Agregar un nuevo alumno
void listarAlumnos(Alumno alumnos[], int numAlumnos); // Listar todos los alumnos

// Función principal
int main()
{
    Alumno alumnos[MAX_ALUMNOS]; // Arreglo para almacenar alumnos en memoria
    int numAlumnos = 0;          // Contador de alumnos en memoria
    int opcion;                  // Variable para la selección del menú

    do
    {
        // Mostrar el menú principal
        printf("\n--- Menu Principal ---\n");
        printf("1. Nuevo Archivo\n");
        printf("2. Abrir Archivo\n");
        printf("3. Guardar Archivo\n");
        printf("4. Buscar Alumno (Seleccionar Renglon)\n");
        printf("5. Agregar Alumno\n");
        printf("6. Listar Alumnos\n");
        printf("7. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);    // Leer la opción seleccionada
        getchar();               // Limpiar el buffer del teclado

        // Procesar la opción seleccionada
        switch (opcion)
        {
        case 1:
            nuevoArchivo();  // Crear un nuevo archivo vacío
            numAlumnos = 0;  // Reiniciar el contador de alumnos
            break;
        case 2:
            abrirArchivo(alumnos, &numAlumnos); // Abrir un archivo existente
            break;
        case 3:
            guardarArchivo(alumnos, numAlumnos); // Guardar datos en un archivo
            break;
        case 4:
            buscarAlumno(alumnos, numAlumnos); // Buscar un alumno por nombre
            break;
        case 5:
            agregarAlumno(alumnos, &numAlumnos); // Agregar un nuevo alumno
            break;
        case 6:
            listarAlumnos(alumnos, numAlumnos); // Listar los alumnos en memoria
            break;
        case 7:
            printf("Saliendo del programa...\n"); // Finalizar el programa
            break;
        default:
            printf("Opcion invalida. Intente nuevamente.\n"); // Opción no válida
        }
    }
    while (opcion != 7); // Con este while se continua hasta que el usuario elija salir

    return 0; //cierra el programa
}

// Crear un archivo vacío con un nombre especificado por el usuario
void nuevoArchivo()
{
    char nombreArchivo[50]; // Nombre del archivo que se quiera crear
    printf("Ingrese el nombre del archivo que desea crear (incluya .txt): ");
    scanf("%s", nombreArchivo);

    FILE *archivo = fopen(nombreArchivo, "w"); // Abrir el archivo en modo escritura
    if (archivo)
    {
        printf("Nuevo archivo creado: %s\n", nombreArchivo);
        fclose(archivo); // Cerrar el archivo
    }
    else
    {
        printf("Error al crear el archivo.\n");
    }
}

// Abrir un archivo existente y cargar los datos en memoria
void abrirArchivo(Alumno alumnos[], int *numAlumnos)
{
    char nombreArchivo[50]; // Nombre del archivo a abrir
    printf("Ingrese el nombre del archivo a abrir (incluya .txt): ");
    scanf("%s", nombreArchivo);

    FILE *archivo = fopen(nombreArchivo, "r"); // Abrir archivo en modo lectura
    if (!archivo)
    {
        printf("No se pudo abrir el archivo %s.\n", nombreArchivo);
        return;
    }

    *numAlumnos = 0; // Reiniciar el contador de alumnos
    // Leer línea por línea el archivo y cargar los datos en memoria
    while (fscanf(archivo, "%49[^,],%f,%49[^\n]\n",
                  alumnos[*numAlumnos].nombre,
                  &alumnos[*numAlumnos].promedio,
                  alumnos[*numAlumnos].carrera) == 3)
    {
        (*numAlumnos)++; // Incrementar el contador
    }

    fclose(archivo); // Cerrar el archivo
    printf("Archivo cargado con éxito. %d registros leídos.\n", *numAlumnos);
}

// Guardar los datos de los alumnos en un archivo
void guardarArchivo(Alumno alumnos[], int numAlumnos)
{
    char nombreArchivo[50]; // Nombre del archivo para guardar
    printf("Ingrese el nombre del archivo para guardar (incluya .txt): ");
    scanf("%s", nombreArchivo);

    FILE *archivo = fopen(nombreArchivo, "w"); // Abrir archivo en modo escritura
    if (!archivo)
    {
        printf("No se pudo guardar el archivo %s.\n", nombreArchivo);
        return;
    }

    // Escribir los datos en el archivo línea por línea
    for (int i = 0; i < numAlumnos; i++)
    {
        fprintf(archivo, "%s,%.2f,%s\n",alumnos[i].nombre,alumnos[i].promedio,alumnos[i].carrera);
    }

    fclose(archivo); // Cerrar el archivo
    printf("Archivo guardado exitosamente: %s\n", nombreArchivo);
}

            // Buscar un alumno por nombre
void buscarAlumno(Alumno alumnos[], int numAlumnos)
{
    char nombreBuscado[NOMBRE_MAX]; // Nombre a buscar
    printf("Ingrese el nombre del alumno a buscar: ");
    scanf("%s", nombreBuscado);

    int encontrados = 0; // Contador de coincidencias
    // Buscar coincidencias en el arreglo de alumnos
    for (int i = 0; i < numAlumnos; i++)
    {
        if (strcmp(alumnos[i].nombre, nombreBuscado) == 0)
        {
            printf("Renglón %d: Nombre: %s, Promedio: %.2f, Carrera: %s\n",
                   i + 1, alumnos[i].nombre, alumnos[i].promedio, alumnos[i].carrera);

            encontrados++;
        }
    }

    if (encontrados == 0) //if para ver si encuentra alumnos
    {
        printf("No se encontraron alumnos con el nombre %s.\n", nombreBuscado);
    }
}

// Agregar un nuevo alumno al arreglo en memoria
void agregarAlumno(Alumno alumnos[], int *numAlumnos)
{
    if (*numAlumnos >= MAX_ALUMNOS)   // Validar que no se supere el límite
    {
        printf("No se pueden agregar más alumnos, límite alcanzado.\n");
        return;
    }

    // Leer los datos del nuevo alumno
    printf("Ingrese el nombre del alumno: ");
    scanf("%s", alumnos[*numAlumnos].nombre); //toma el nombre y con el apuntador al numero de alumnos lo coloca en "nombre"
    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &alumnos[*numAlumnos].promedio);//toma el promedio  y con el apuntador al numero de alumnos lo coloca en "promedio"
    printf("Ingrese la carrera del alumno: ");
    scanf("%s", alumnos[*numAlumnos].carrera); //toma la carrera y con el apuntador al numero de alumnos lo coloca en "carrera"

    (*numAlumnos)++; // Incrementar el contador de alumnos
    printf("Alumno agregado exitosamente.\n");
}

// Listar todos los alumnos en memoria
void listarAlumnos(Alumno alumnos[], int numAlumnos)
{
    if (numAlumnos == 0) //if para verificar si el numero de alumnos equivale a 0, de ser cierto hace el printf
    {
        printf("No hay alumnos registrados.\n");
        return;
    }

    // Imprimir los datos de todos los alumnos
    printf("Lista de alumnos:\n");
    for (int i = 0; i < numAlumnos; i++)
    {
        printf("Renglón %d: Nombre: %s, Promedio: %.2f, Carrera: %s\n",
               i + 1, alumnos[i].nombre, alumnos[i].promedio, alumnos[i].carrera);
    }
}

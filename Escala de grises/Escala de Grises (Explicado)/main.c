#include <stdio.h>
#include <stdlib.h>

#pragma pack(push, 1) // Este #pragma pack con el "(push, 1)" le dice al compilador que empaquete
                        //todo lo que está dentro de este #pragma en 1 byte. Aquí, las estructuras.

typedef struct      //Se utiliza para declarar una estructura
{
            //se usa unsigned para declarar variables que no pueden tener un valor negativo

    unsigned char  bfType[2];   //Especifíca el tipo de archivo, que debe ser "BM"
    unsigned int   bfSize;      // Un entero que es el tamaño del archivo en bytes
    unsigned short bfReserved1;     //Reserva en byte
    unsigned short bfReserved2;     //Reserva en byte
    unsigned int   bfOffBits;  // El Offset se entiende como el desplazamiento hasta los datos de la imagen
} BITMAPFILEHEADER;    // Este nombre es el de la estructura para la cabecera del archivo

typedef struct
{
    unsigned int   biSize;         // Para el tamaño de este encabezado
    int            biWidth;        // Ancho de la imagen
    int            biHeight;       // Alto de la imagen
    unsigned short biPlanes;        // para el numero de planos de cada color
    unsigned short biBitCount;      // Bits por píxel (debe ser 24 para este ejemplo)
    unsigned int   biCompression;   // para el tipo de compresion
    unsigned int   biSizeImage;     //el tamaño de los datos de una imagen
    int            biXPelsPerMeter; // Resolución en pixeles en el eje X
    int            biYPelsPerMeter; // Resolución en pixeles en el eje y
    unsigned int   biClrUsed;       // Para el numero de colores de la paleta de colores
    unsigned int   biClrImportant;  //
} BITMAPINFOHEADER;  // Este nombre es el de la estructura para la informacion del archivo
#pragma pack(pop) //Con este #pragma pack "(pop)" delimita hasta donde funcionará el primer pragma

// Función para convertir un píxel BGR a escala de grises
unsigned char convertirAGris(unsigned char b, unsigned char g, unsigned char r)
{
    return (unsigned char)(0.3 * r + 0.59 * g + 0.11 * b);
    //Calcula el valor del brillo grisado del píxel ponderando los valores R, G, y B según cómo los percibe el ojo humano.
}

// Función para convertir la imagen BMP a escala de grises
void convertirBMPBlancoNegro(const char *input_filename, const char *output_filename) //Esta funcion convierte una imagen BMP a escala de grises y la guarda en un nuevo archivo
{
    FILE *input_file = fopen(input_filename, "rb");
    if (input_file == NULL) //Este if Intenta abrir le archivo BMP de entrada en modo de lectura binaria (rb) si falla muestra un error y termina el programa
    {
        fprintf(stderr, "No se puede abrir el archivo %s\n", input_filename);
        return;  //termina el programa luego de imprimir el error
    }


    BITMAPFILEHEADER fileHeader; //Lee el encabezado del archivo BMP, que contiene información básica sobre el formato del archivo.
    fread(&fileHeader, sizeof(BITMAPFILEHEADER), 1, input_file);


    BITMAPINFOHEADER infoHeader; //Lee el encabezado de información que contiene detalles como el tamaño de la imagen, la profundidad del color, etc.
    fread(&infoHeader, sizeof(BITMAPINFOHEADER), 1, input_file);

    // Con este if se comprueba que el achivo sea aun BMP de 24 bits, Si no lo es, muestra un error y cierra el archivo.
    if (fileHeader.bfType[0] != 'B' || fileHeader.bfType[1] != 'M' || infoHeader.biBitCount != 24)

    {
        fprintf(stderr, "El archivo no es un BMP de 24 bits\n");
        fclose(input_file); //cierra el archivo
        return; //cierra el programa
    }

    // Crear el archivo de salida en modo de escritura binaria (wb). Si no se puede crear, muestra un error y termina.
    FILE *output_file = fopen(output_filename, "wb");
    if (output_file == NULL)
    {
        fprintf(stderr, "No se puede crear el archivo %s\n", output_filename);
        fclose(input_file); //cierra el archivo
        return; //acaba el programa
    }

    // Toma los escabezados del archivo original al archivo de salida.
    fwrite(&fileHeader, sizeof(BITMAPFILEHEADER), 1, output_file);
    fwrite(&infoHeader, sizeof(BITMAPINFOHEADER), 1, output_file);

    // Calcula el numero de bytes de relleno que necesita cada fila para alinearse
    // a un múltiplo de 6 bytes, como requiere el formato BMP.
    int padding = (4 - (infoHeader.biWidth * 3) % 4) % 4;

    // Leer, convertir y escribir cada fila de píxeles
    for (int i = 0; i < infoHeader.biHeight; i++) //intera sobre cada fila de píxeles en la imagen
    {
        for (int j = 0; j < infoHeader.biWidth; j++) //Itera sobre cada píxel dentro de la fila
        {
            unsigned char bgr[3];  // Lee el píxel que son 3 bytes (azul, verde, rojo)
            fread(bgr, 3, 1, input_file);

            // Convertir el píxel leído a una escala de grises
            unsigned char gris = convertirAGris(bgr[0], bgr[1], bgr[2]);

            // Escribe el píxel leído en escala de grises en el archivo de salida
            unsigned char gris_pixel[3] = {gris, gris, gris};
            fwrite(gris_pixel, 3, 1, output_file);
        }

        // Elimina el padding del archivo original
        fseek(input_file, padding, SEEK_CUR);

        // Añade el mismo relleno al archivo de salida
        unsigned char padding_bytes[3] = {0, 0, 0};  // Máximo de 3 bytes de padding
        fwrite(padding_bytes, padding, 1, output_file);
    }


    fclose(input_file); //Cierra el archivo
    fclose(output_file); //Cierra el archivo

    printf("Imagen convertida a blanco y negro y guardada en %s\n", output_filename);
}

int main(int argc, char *argv[]) //Ejecuta la conversión de un archivo específico
{
    //Estos "const char" se usan para definir el archivo de entrada
    //avion.bmp y el archivo de salida en escala de grises avion_bn.bmp
    const char *archivo_entrada = "avion.bmp";
    const char *archivo_salida = "avion_bn.bmp";

    convertirBMPBlancoNegro(archivo_entrada, archivo_salida); //llama a la función que realiza la conversión a escala de grises

    return 0; //termina el programa
}

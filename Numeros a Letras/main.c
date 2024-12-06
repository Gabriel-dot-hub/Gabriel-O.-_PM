#include <stdio.h>


void numeroYLetras(int numero);
void repetir();

int main()
{
    repetir();
    return 0;
}

void repetir()
{
    double numero;
    int parteEntera, centavos;
    char opcion;

    do
    {
        printf("Introduce un numero de 1 al 1000: \n");
        scanf("%lf", &numero);

        parteEntera = (int)numero;
        centavos = (int)((numero - parteEntera) * 100);

        printf("El numero es: ");
        numeroYLetras(parteEntera);
        printf("con %d centavos.\n", centavos);

        printf("Desea convertir otro numero (si__no): \n");
        scanf("%c", &opcion);
    }

    while(opcion == 's' || opcion == 's');
    printf("\n");
}

void numeroYLetras(int numero)
{
    const char *unidades[] = {"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    const char *decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    const char *centenas[] = {"", "cien", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
    const char *miles[] = {"", "mil", "dos mil", "tres mil", "cuatro mil", "cinco mil", "seis mil", "siete mil", "ocho mil", "nueve mil"};

    if(numero < 10)
    {
        printf("%s", unidades[numero]);
    }
    else if(numero < 100)
    {
        printf("%s", decenas[numero / 10]);
        if
        (numero % 10 > 0)
        {
            printf("y %s", unidades[numero % 10]);
        }
    }

    else if
    (numero < 1000)
    {
        printf("%s", centenas[numero / 100]);
        if
        (numero % 100 > 0)
        {
            printf("");
            numeroYLetras(numero % 100);
        }
    }
    else
    {
        printf("%s", miles[numero / 1000]);
        if
        (numero % 1000 > 0)
        {
            printf("");
            numeroYLetras(numero % 1000);
        }
    }
}

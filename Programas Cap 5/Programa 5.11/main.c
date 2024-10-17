#include <stdio.h>

/* B�squeda binaria. */

const int MAX = 100;

void Lectura(int[], int);
int Binaria(int[], int, int);  /* Prototipos de funciones. */

int main(void) {
    int RES, ELE, TAM, VEC[MAX];

    // Validamos el tama�o del arreglo.
    do {
        printf("Ingrese el tama�o del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1);

    Lectura(VEC, TAM);  // Llenamos el arreglo.

    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);

    RES = Binaria(VEC, TAM, ELE);  // Realizamos la b�squeda binaria.

    if (RES != -1) {
        printf("\nEl elemento se encuentra en la posici�n: %d\n", RES + 1);
        // Sumo 1 porque la posici�n empieza en 0.
    } else {
        printf("\nEl elemento no se encuentra en el arreglo\n");
    }

    return 0;
}

void Lectura(int A[], int T)
/* La funci�n Lectura se utiliza para leer un arreglo unidimensional de T
elementos de tipo entero. Se asume que los elementos est�n ordenados. */
{
    int I;
    for (I = 0; I < T; I++) {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

int Binaria(int A[], int T, int E)
/* Esta funci�n realiza una b�squeda binaria del elemento E en el arreglo A.
Si encuentra el elemento, regresa la posici�n (0-indexada). Si no lo
encuentra, regresa -1. */
{
    int IZQ = 0, DER = T - 1, CEN;

    while (IZQ <= DER) {
        CEN = (IZQ + DER) / 2;

        if (E == A[CEN]) {
            return CEN;  // Se encontr� el elemento.
        } else if (E > A[CEN]) {
            IZQ = CEN + 1;  // Buscar en la derecha.
        } else {
            DER = CEN - 1;  // Buscar en izquierda.
        }
    }

    return -1;  // No se encontr� el elemento.
}

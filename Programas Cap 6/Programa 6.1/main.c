#include <stdio.h>

/* Diagonal principal.
El programa, al recibir como dato una matriz de tipo entero, escribe la
diagonal principal. */

const int TAM = 10;

void Lectura(int [] [TAM], int);  //prototipo de funciones
 void Imprime(int [] [TAM], int);


 void main (void)
 {
     int MAT[TAM][TAM];
     Lectura(MAT, TAM);
     Imprime(MAT, TAM);
 }
void Lectura(int A [][TAM],int F) /* La funci�n Lectura se utiliza para leer un arreglo bidimensional. Observa
que s�lo se debe pasar como par�metro el n�mero de filas ya que la matriz
es cuadrada. */

{
    int I, J;
    for (I = 0; I < F; I++)
        for(J = 0; J < F; J++)
    {
        printf("Ingrese el elementod de %d %d:", I+1, J+1);
        scanf("%d", &A[I][J]);
}
}

void Imprime(int A[][TAM], int F)
/* La funci�n Imprime se utiliza para escribir un arreglo bidimensional
cuadrado de F filas y columnas. */
{
    int I, J;
    for (I = 0; I < F; I++)
        for(J = 0; J < TAM; J++)
        if (I == J)
        printf("\nDiagonal %d %d: %d", I, J, A[I][J]);
}

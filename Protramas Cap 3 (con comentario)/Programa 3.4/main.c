#include <stdio.h>
#include <math.h>

/*Suma cuadrados.
El programa, al recibir como datos un grupo de enteros positivos, obtiene ek
cuadrado de los mismos y la suma corresnpondiente a dichos cuadrados. */

void main(void)
{
    int NUM;        //declaración de la variable NUM que es el numero del que se sumara el cuadrado
    long CUA, SUC = 0;  //long sirve para variables mas grandes que int que serán los cuadrados CUA y su suma SUC
    printf ("\nIngrese un mumero entero 0 para terminar:\t"); //Escribe que se ingrese el numero a elevar al cuadrado
    scanf("%d", &NUM); //lee el numero dado y lo almacena en NUM
    while (NUM) //estructura repetitiva que dice "para todo NUM diferente de 0" es decir, verdadero, ejecuta lo que tiene dentro el while
    {
        CUA = pow (NUM, 2); //ejecuta la operación pow del cuadrado, por eso el 2, al numero almacenado en NUM
        printf ("%d al cubo es %d", NUM, CUA);
        SUC = SUC + CUA;  //asigna a la variable SUC le valor del cuadrado de NUM que es CUA y lo suma a SUC
        printf ("\nIngrese un munero entero -0 para terminar-:\t"); //pide ingresar un nuevo valor para NUM
        scanf ("%d", &NUM); //lee el numero y lo almacena en NUM para repetir el proceso
    }
    printf ("\nLa suma de los cuadrados es %d", SUC); // para NUM = 0 imprime el valor que se encuentra en SUC y acaba el programa.
}

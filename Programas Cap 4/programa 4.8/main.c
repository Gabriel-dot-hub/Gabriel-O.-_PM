#include <stdio.h>

/*Combinacion de variables globales y locales, y parametros por valor
y por referencia */

int a, b, c, d; //variables globales

void funcion1 (int *, int *); //prototipo de funcion con dos parametros por referecia

int funcion2(int, int *); //primer parametro por valor y segundo por referencia

void main(void)
{
    int a;   //a es variable local
    a = 1;  //se asigna el valor de a
    b = 2;      //se le asignan valores a b, c y d.
    c = 3;
    d = 4;

    printf("\n%d %d %d %d", a, b, c, d);
    funcion1(&b, &c);
    printf("\n%d %d %d %d", a, b, c, d);
    a = funcion2(c, &d);
    printf("\n%d %d %d %d", a, b, c, d);

}

void funcion1(int *b, int *c)
{
    int d;
    a = 5;
    d = 3;
    (*b)++;
    (*c) += 2;
    printf("\n %d %d %d %d", a, *b, *c, d);
}

int funcion2(int c, int *d)
{
    int b;
    a++;
    b = 7;
    c += 3;
    (*d) += 2;
    printf("\n%d %d %d %d", a, b, c, *d);
    return (c);
}

#include <stdio.h>

/* Aplicaci�n de operadores. */

void main (void)
{
    int i = 5, j = 4, k, l, m;
    k = !i * 3 + --j * 2 - 3;
    printf("\nEl valor de k es: %d" , k);

    l = ! (!i || l && 0) &&  l;
    printf("\nEl valor de l es %d" ,l);

    m = (k = (! (12 > 10 ))), j = (10 || 0) && k, (! (k || j));
}

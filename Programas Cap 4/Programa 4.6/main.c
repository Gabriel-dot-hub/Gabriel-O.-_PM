#include <stdio.h>


    //prueba de parametros por referencia

    void f1(int *);

    int main (void)
    {
        int I, K = 4;
        for (I = 1; I <= 3; I++)
        {
            printf("\n\nValor de K antes de llamar a la funcion: %d", ++K);
            printf("\nValor de K despues de llamar a la funcion: %d", K);
    }

    void f1(int *R)
    // la funcion f1 recibe un parametro por referencia. Cada vez que el
    //parametro de utiliza en la funcion debe ir precedido por el operador
    //de indirección
    {
        *R += *R;
    }
    }

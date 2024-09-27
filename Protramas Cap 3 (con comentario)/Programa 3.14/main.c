#include <stdio.h>

/* Elección
El programa obtiene el total de cada candidato y el porcentaje
correspondiente, También considera votos nulos

VOT, C1, C2, C3, C4, C5 NU, SVO variables enteras
PO1, PO2, PO3, PO4, PO5, PON: variables de tipo real. */

void main (void)
{
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO;
    float PO1, PO2, PO3, PO4, PO5, PON;
    //las de arriba son variables de conteo de votos
    printf ("Ingrese el primer voto: "); //ingresa el primer voto
    scanf ("%d", &VOT); //lee el voto ingresado y lo pone en VOT
    while (VOT) //blucle para VOT hasta que sea 0
    {
        switch (VOT)
        {
            case 1: C1++;   break;
            case 2: C2++;   break;
            case 3: C3++;   break;
            case 4: C4++;   break;
            case 5: C5++;   break;
                default: NU++; break; //voto nulo
        }
        printf ("Ingrese el siguientte voto -0 para terminar-: "); //solicita el siguiente voto
        scanf ("%d", &VOT); //lee el siguiente voto y lo pone en VOT
}
SVO = C1 + C2 + C3 + C4 + C5 + NU; // calcula el total de votos
PO1 = ((float) C1 / SVO) * 100;
PO2 = ((float) C2 / SVO) * 100;
PO3 = ((float) C3 / SVO) * 100;
PO4 = ((float) C4 / SVO) * 100;
PO5 = ((float) C5 / SVO) * 100;
PON = ((float) NU / SVO) * 100;

printf("\nTotal de votos: %d, SVO"); //imprime lso resultados de los calculos para cada candidato.
printf("\n\nCandidato 1: %d votos -- Portencaje: %5.2f", C1, PO1);
printf("\nCandidato 2: %d votos -- Portencaje: %5.2f", C2, PO2);
printf("\nCandidato 3: %d votos -- Portencaje: %5.2f", C3, PO3);
printf("\nCandidato 4: %d votos -- Portencaje: %5.2f", C4, PO4);
printf("\nCandidato 5: %d votos -- Portencaje: %5.2f", C5, PO5);
printf("\nNulos:       %d votos -- Portencaje: %5.2f", C1, PO1);
}

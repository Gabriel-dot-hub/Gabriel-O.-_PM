#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    //PROGRAMA CODIFICADOR//

/*Este codificador toma la frase que se le ingresa por teclado, la pone en una cadena de caracteres
  y toma un valor entero y lo almacena en "key" como cada caracter tiene un valor en el código ESCII
  límita el valor de key a entre 1 y 10 y tomando los valores imprimibles les resta a cada caracter de
  la cadena el valor de key, codificando lo que en principio se le ingresa por teclado*/


main() //Este codificador funciona con los caracteres imprimibles del Código ASCII desde el 32
{       //hasta el 126 que es el ultimo en su lista.

	char frase[100]; //Declara un tipo char con 100 espacios donde irá nuestra frase a codificar
	int key;   //Declara el entero Key que servirá como numero clave del cifrado
	int i,salto=0; //Declara los enteros i que se usará en el for


	while(1)//bucle infinito
	{
		system("cls");//"cls" se usa para limpiar la pantalla de la consola
		printf("Ingresa la frase a decifrar: "); //pide ingresar por teclado una frase
		gets(frase); //Se utiliza gets para tomar lo ingresado por teclado
		//(tipo de dato char) y almacenarlo en la variable frase

		do //Este do condiciona a que se tenga que meter algo por teclado, en caso contrarío no se continúa con la key
        {
			printf("Incerte la clave de cifrado: "); //Este do condiciona a que se tenga que meter algo por teclado
			scanf("%d",&key); //Se usa scanf para tomar los datos enteros, numeros, y almacenarlos en la variable entera "key"
		}

		while(key<1 || key>10); //Un while para limitar el rango de valor de la variable key entre +1 y -10
		printf("\n\n----------------------------------\nFrase decifrada:\n");  //Imprime una línea que dice Frase decifrada y un espacio debajo de ella

		for(i=0; i<strlen(frase); i++,salto=0)//"strlen" sirve para calcular la longitud de una cadena de caracteres
            // y retorna de vuelta '\0' cuando llega al final, entonces cuando llega al final de la frase manda NULL
            // Y salta a la linea 34

		{
			if(frase[i]<32+key)//Con la condición de que el caracter sea menor de 32 + key, a cada caracter correspondiente a la frase ingresada se le suma "key"
			//de forma tal que "Encripta" la frase y asume que la frase se encuentra en el rango de los ASCII imprimibles
			//y establece el valor del salto en 95.

			{
				salto = 95; //El salto de 95 mantiene los saltos en entre las variables para que se mantengan en al rango de las imprimibles
			}
			printf("%c",frase[i]-key+salto);//se imprime el valor cambiado caracter, restandole el valor que ingresamos por teclado en key
                        //Y tiene que ser >= 1 <=10
		}

		printf("\n\n"); //imprime dos lineas debajo
		system("pause");//Le dice al sistema que pause la ejecución del programa.

    }
}

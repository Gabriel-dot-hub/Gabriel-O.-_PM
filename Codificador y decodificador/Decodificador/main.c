#include <stdio.h>
#include <stdlib.h>
#include <string.h>

        //PROGRAMA DECODIFICADOR
main()
{
	char frase[100]; //Declara un tipo char con 100 espacios donde irá nuestra frase a codificar
	int key;  //Declara el entero Key que servirá como numero clave del descifrado
	int i,salto=0; //Declara los enteros i que se usará en el for

	while(1)
	{
		system("cls"); //sirve para limpiar la pantalla de la consola.
		printf("Ingresa la frase a decodificar: "); // pide la condificación dada por el primer programa
		gets(frase); //Se utiliza gets para tomar lo ingresado por teclado
		//(tipo de dato char) y almacenarlo en la variable frase

		do //Este do condiciona a que se tenga que meter algo por teclado, en caso contrarío no se continúa con la key
        {
			printf("Inserte la clavce de cifrado: ");  //pide con qué clave se cifró la frase que se eingresó en el codificador
			scanf("%d",&key); //escanea la clave cifrada y la almacena en key, que será el valor con la que se decodificarán los datos
		}

		while(key<1 || key>10); //limita el valor del rango a >= 1 y <= 10.
		printf("\n\n----------------------------------\nFrase Descifrada:\n"); //Imprime una línea que dice Frase decifrada y un espacio debajo de ella

		for(i=0; i<strlen(frase); i++,salto=0)//se abre un bucle for con la longitud de la frase integrada
		{
			if(frase[i]>126-key) //Este if es la clave para decodificar la frase insertada en el programa anterior, ahora codificada
			//toma la cadena de caracteres y verifica que esté dentro del valor de 126 - key
			//que es el valor ultimo de los imprimibles
			{
				salto=95; //establece el salto en 95 que es la diferencia entre 32 y 126 contando el ultimo caracter de la cadena de imprimibles
			}
			printf("%c",frase[i]+key-salto);//se imprime el valor a cada caracter de la cadena
			//le resta el valor de key, devolviendolo a su valor ASCII original, "desencriptando" así
			//la frase.

		printf("\n\n"); //imprime 2 líneas de espacio debajo
		system("pause");//Detiene la ejecución del programa
	}

    }
    }

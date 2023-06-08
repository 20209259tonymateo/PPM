#include <stdio.h>

/* Cubo-3.
El programa calcula el cubo de los 10 primeros números naturales con la 
ayuda de una función y utilizando parámetros por valor. */

int cubo (int);         // Prototipo de funcion. El parametro es de tipo entero.

int main (void){
	int i;
	for (i = 1; i <= 10; i++)

		printf("\nEl cubo de i es: %d", cubo(i));
		// Llamada a la funcion cubo. El paso del parametro es por valor.
}

int cubo (int k)            // k es un parametro por valor de tipo entero
// la funcion calcula el cubo del parametro k.

{
	return (k*k*k);
}

#include <stdio.h>

/* Cubo-2.
El programa calcula el cubo de los 10 primeros números naturales con la
ayuda de una función. */

int cubo (void);                        // Prototipo de funcion
int i;                                 //  Variable global

int main (void){
	int cub;
	for (i = 1; i <= 10; i++){
		cub = cubo();            // Llamada a la funcion cubo
		printf("\nEl cubo de %d es: %d", i, cub);
	}
}

int cubo(void)                   // Declaracion de la funcion
// La funcion calcula el cubo de la variable local i

{
	int i = 2;            //Variable local entera i con el mismo nombre que la variable global;
	return (i*i*i);
}

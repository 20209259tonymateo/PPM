#include <stdio.h>

/* Cubo-1.
El programa calcula el cubo de los 10 primeros números naturales con la
ayuda de una función. En la solución del problema se utiliza una variable
global, aunque esto, como veremos más adelante, no es muy recomendable. */

int cubo(void);             /* Prototipo de función. */
int i;                      /* Variable global. */

int main (void){
	int cub;
	for (i = 1; i <= 10; i++){
		cub = cubo();            /* Llamada a la función cubo. */
		printf("\nEl cubo de %d es: %d", i, cub);
	}
}

int cubo(void)                   /* Declaración de la función. */
/* La función calcula el cubo de la variable global I. */
{
return (i*i*i);
}

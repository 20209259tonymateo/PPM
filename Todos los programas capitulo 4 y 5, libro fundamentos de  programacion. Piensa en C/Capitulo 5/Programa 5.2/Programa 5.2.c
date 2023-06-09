#include <stdio.h>

/* Elección.
El programa almacena los votos emitidos en una elección en la que hubo cinco
➥candidatos e imprime el total de votos que obtuvo cada uno de ellos. */

int main (void){
	int ele[5] ={0}; /*Declaración del arreglo entero ELE de cinco
➥elementos. Todos sus elementos se inicializan en 0. */
int i, vot;
printf("Ingresa el primer voto (0 - Para terminar): ");
scanf("%d", &vot);
while (vot){
	if ((vot > 0) && (vot < 6))              // Se verifica que el voto sea correcto.
	ele[vot-1]++;           /* Los votos se almacenan en el arreglo.
➥Recuerda que la primera posición del arreglo es 0, por esa razón a la
➥variable VOT se le descuenta 1. Los votos del primer candidato se
➥almacenan en la posición 0. */
	else 
	printf("\nEl voto ingresado es incorrecto.\n");
	printf("Ingresa el siguiente voto (0 - Para terminar): ");
	scanf("%d", &vot);
}
printf("\n\nResultados de la Eleccion\n");
for (i = 0; i <= 4; i++)
printf("\nCandidato %d: %d", i+1, ele[1]);
}

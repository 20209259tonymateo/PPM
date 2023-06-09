#include <stdio.h>

/* Cuenta-números.
El programa, al recibir como datos un arreglo unidimensional de tipo
entero y un número entero, determina cuántas veces se encuentra el
número en el arreglo. */

int main (){
	int i, num, cue = 0;
	int arre[100];                            // Declaracion del arreglo
	for (i = 0; i < 100; i++){
		printf("Ingrese el elemento %d del arreglo: ", i+1);
		scanf("%d", &arre[i]);                 // Lectura -asignacion - del arreglo
	}
	printf("\n\nIngrese el numero que se va a buscar en el arreglo: ");
	scanf("%d", &num);
	for (i = 0; i < 100; i++)
		if (arre[i] == num)    // Comparacion del numero con los elementos del arrreglo
		
		cue++;
		
printf("\n\nEl %d se encuentra %d veces en el arreglo", num, cue);
}

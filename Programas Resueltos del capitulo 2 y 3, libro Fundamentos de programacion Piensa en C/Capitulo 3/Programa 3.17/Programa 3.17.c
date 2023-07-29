#include <stdio.h>

/* Números perfectos.
El programa, al recibir como dato un número entero positivo como límite, obtiene
los números perfectos que hay entre 1 y ese número, y además imprime cuántos números perfectos hay en el intervalo.
I, J, NUM, SUM, C: variables de tipo entero. */

int main (){
	int i, j, num, sum, c = 0;
	printf("\nIngrese el numero limite: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++){
		sum = 0;
		for (j = 1; j <= (i / 2); j++)
			if ((i % j) == 0)
				sum += j;
		if (sum == i)
		{
			printf("\n%d es un numero perfecto", i);
			c++;
		}
	}
	printf("\nEntre 1 y %d hay %d numeros perfectos", num, c);

	return 0;
}

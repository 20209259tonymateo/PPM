#include <stdio.h>
#include <math.h>

/* Pares e impares.
El programa, al recibir como datos N números enteros, obtiene la suma de los
números pares y calcula el promedio de los impares.
I, N, NUM, SPA, SIM, CIM: variables de tipo entero. */

int main(){
	int i, n, num, spa = 0, sim = 0, cim = 0;
	printf("Ingrese el numero de datos que se van a procesar:\t");
	scanf("%d", &n);
	if (n > 0){
		for (i = 1; i <= n; i++){
			printf ("\nIngrese el numero %d: ", i);
			scanf ("%d", &num);
			if (num)
				if (pow(-1, num) > 0)
					spa = spa + num;
				else
				{
					sim = sim + num;
					cim++;
				}
		}
		printf("\n La suma de los numeros pares es: %d", spa);
		printf("\n El promedio de numeros impares es: %5.2f", (float)(sim / cim));
	}
	else
		printf("\n El valor de n es incorrecto");

return 0;
}

#include <stdio.h>

/* Suma positivos.
El programa, al recibir como datos N números enteros, obtiene la suma de los
enteros positivos.
I, N, NUM, SUM: variables de tipo entero. */

int main (){
	int i, n, num, sum;
	sum = 0;
	printf("Ingrese el numero de datos:\t");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++){
		printf("Ingrese el dato numero %d: \t", i);
		scanf("%d", &num);
		if (num > 0)
			sum = sum + num;
	}
	printf("\nLa suma de los numeros positivos es: %d", sum);
	
	return 0;
}

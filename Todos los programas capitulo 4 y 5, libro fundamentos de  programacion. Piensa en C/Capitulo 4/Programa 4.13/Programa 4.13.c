#include <stdio.h>
#include <math.h>

/* Pares e impares.
El programa, al recibir como datos N números enteros, calcula cuántos
de ellos son pares y cuántos impares, con la ayuda de una función. */

void parimp (int, int *, int *);            // Prototipo de funcion
2
int main(){
	int i, n, num, par = 0, imp = 0;
	printf("Ingresa el numero de datos: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++){
		printf("Ingresa el numero %d: ", i);
		scanf("%d", &num);
		parimp (num, &par, &imp);
	/* Llamada a la función. Paso de parámetros por valor y por
➥ referencia. */
	}
	
	printf("\nNumero de pares: %d", par);
	printf("\nNumero de impares: %d", imp);
}

void parimp (int num, int *p, int *i)
/* La función incrementa el parámetro *P o *I, según sea el número par
o impar. */

{
	int res;
	res = pow(-1,num);
	if (res > 0)
		*p += 1;
	else
		if (res < 0)
			*i += 1;
			
}

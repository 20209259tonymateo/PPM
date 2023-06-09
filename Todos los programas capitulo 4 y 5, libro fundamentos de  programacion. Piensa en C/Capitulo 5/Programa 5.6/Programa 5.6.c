#include <stdio.h>
#include <math.h>

/* Suma-cuadrados.
El programa calcula la suma del cuadrado de los elementos de un arreglo 
unidimensional de 100 elementos de tipo real. */

const int max = 100;
/* MAX se utiliza para reservar el espacio máximo que podrá ocupar el arreglo. */

void lectura(float *, int);   // Prototipo de funciones
double suma(float *, int);

int main (){
	float vec[max];
	double res;
	lectura (vec, max);
	res = suma(vec, max);
	/* Se llama a la función Suma y se almacena el resultado en la variable RES. */
	printf("\n\nSuma del arreglo: %2lf", res);
}

void lectura(float a[], int t)
/* La función Lectura se utiliza para leer un arreglo unidimensional de Telementos de tipo real. */
{
	int i;
	for (i = 0; i < t; i++){
		printf("Ingrese el elemento %d: ", i+1);
		scanf("%f", &a[i]);
	}
}

double suma(float a[], int t)
/* La función Suma se utiliza para calcular la suma del cuadrado de los 
componentes de un arreglo unidimensional de T elementos de tipo real. */

{
	int i;
	double aux = 0.0;
	for (i = 0; i < t; i++)
		aux += pow(a[i], 2);
	return (aux);
}

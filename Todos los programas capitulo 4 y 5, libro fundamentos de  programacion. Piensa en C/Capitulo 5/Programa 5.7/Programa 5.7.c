#include <stdio.h>

/* Arreglo sin elementos repetidos.
El programa, al recibir como dato un arreglo unidimensional desordenado de N
elementos, obtiene como salida ese mismo arreglo pero sin los elementos
repetidos. */

void lectura(int *, int);                 //Prototipos de funciones
void imprime(int *, int);
void elimina(int *, int);

/* Observa que en el prototipo de Elimina, el segundo parámetro es por
referencia. Esto, porque el tamaño del arreglo puede disminuir. */

int main(){
	int tam, arre[100];
	/* Se escribe un do-while para verificar que el tamaño del arreglo que se
	ingresa sea correcto. */
	
	do
	{
		printf("Ingrese el tamano del arreglo: ");
		scanf("%d", &tam);
	}
	
	while (tam > 100 || tam < 1);
	lectura(arre, tam);
	/* Observa que el tamaño del arreglo se pasa por referencia.*/
	imprime(arre, tam);
}

void lectura(int a[], int t)
/* La función Lectura se utiliza para leer un arreglo unidimensional de T
elementos de tipo entero. */
{
	printf("\n");
	int i;
	for (i = 0; i < t; i++)
	{
		printf("Ingrese el elemento %d: ", i+1);
		scanf("%d", &a[i]);
	}
}

void imprime(int a[], int t)
/* La función Imprime se utiliza para escribir un arreglo unidimensional, sin 
repeticiones, de T elementos de tipo entero. */
{
	int i;
	for (i = 0; i < t; i++)
		printf("\nA[%d]: %d", i, a[i]);
	}
	
void elimina (int a[], int *t)
/* Esta función se utiliza para eliminar los elementos repetidos de un arreglo
unidimensional de T elementos de tipo entero. */ 

{
	int i = 0, k, l;
	while (i < (*t-1))
	{
		k = i + 1;
		while (k <= (*t-1))
		{
			if (a[i] == a[k])
			{
				for (l = k; l < (*t-1); l++)
					a[l] = a[l+1];
				*t = *t -1;
			}
			else
			k++;
		}
		i++;
	}
}

/*
#include <stdio.h>

/* Arreglo sin elementos repetidos.
El programa, al recibir como dato un arreglo unidimensional desordenado de N
elementos, obtiene como salida ese mismo arreglo pero sin los elementos
repetidos. 

void lectura(int *, int);                 //Prototipos de funciones
void imprime(int *, int);
void elimina(int *, int);

/* Observa que en el prototipo de Elimina, el segundo parámetro es por
referencia. Esto, porque el tamaño del arreglo puede disminuir. */

int main(){
	int tam, arre[100];
	int TAM, ARRE[100];
	/* Se escribe un do-while para verificar que el tamaño del arreglo que se
	ingresa sea correcto. 
	
	do
	{
		printf("Ingrese el tamaño del arreglo: ");
		scanf("%d", &tam);
	}
	
	while (tam > 100 || tam < 1);
	lectura(arre, tam);
	elimina(arre, &tam);
	/* Observa que el tamaño del arreglo se pasa por referencia.*/
	imprime(ARRE, TAM);
}

void lectura(int a[], int t)
/* La función Lectura se utiliza para leer un arreglo unidimensional de T
elementos de tipo entero. 

{
	printf("\n");
	int iM
	for (i = 0; i < t; i++)
	{
		printf("Ingrese el elemento %d: ", i+1);
		scanf("%d", &a[i]);
	}
}

void imprime(int a[], int t)
/* La función Imprime se utiliza para escribir un arreglo unidimensional, sin 
repeticiones, de T elementos de tipo entero. 
{
	int i;
	for (i = 0; i < t; i++)
		printf("\nA[%d]: %d", i, a)

*/

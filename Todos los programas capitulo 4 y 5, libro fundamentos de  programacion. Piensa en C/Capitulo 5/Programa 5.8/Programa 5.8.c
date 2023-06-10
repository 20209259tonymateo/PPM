#include <stdio.h>

/* Primos.
El programa almacena en un arreglo unidimensional los primeros 100 números
primos. */

const int tam = 100;
        //Prototipos de funciones
void primo(int, int *);
void imprime (int, int);    

int main (){
	int p[tam] = {1,2};
	int fla, j = 2, pri = 3;
	while (j <= tam)
	{
		fla = 1;
			primo(pri, &fla);  // Se llama a la funcion que determina si pri es primo
		if (fla)         // Si fla es 1, entonces pri es primo
			{
			p[j] = pri;
			j++;
		}
		pri += 2;
	}
	imprime(p,tam);

}

void primo(int a, int *b)
/* Esta función determina si A es primo, en cuyo caso el valor de *B no se
altera. */
{
	int d = 3;
	while (*b && (d < (a / 2)))
	{
		if ((a % d) == 0)
			*b = 0;
			d++;
	}
}

void imprime(int primos[], int t)
/* Esta función imprime el arreglo unidimensional de números primos. */
{
	int i;
	for (i = 0; i < t; i++)
		printf("\nprimos[%d]: %d", i, primos[i]);
		
	}

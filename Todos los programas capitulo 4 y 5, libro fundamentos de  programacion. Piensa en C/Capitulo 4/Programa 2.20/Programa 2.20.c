#include <stdio.h>

// Funciones y parametros

int f1 (int, int *);                // Prototipo de funcion.

int a = 3;
int b = 7;
int c = 4;           // Variables globales
int d = 2;

int main (){
	a = f1 (c, &d);
	printf("\n%d %d %d %d", a, b, c, d);
	c = 3;
	c = f1 (a, &c);
	printf("\n%d %d %d %d", a, b,c ,d);
}

int f1 (int x, int *y){
	int a;
	a = x * *y;
	c++;
	b += *y;
	printf("\n%d %d %d %d", a, b, c, d);
	*y--;
	return (c);
}

#include <stdio.h>

// Prueba de parametros por referencia

void f1 (int *);
//Prototipo de funcion. El parametro es de tipo entero y por referencia observa el uso del operador de indireccion.

int main (){
	int i, k = 4;
	for (i = 1; i <= 3; i++){
		printf("\n\nValor de k antes de llamar a la funcion: %d", ++k);
		printf("\nValor de k después de llamar a la funcion: %d", f1(&k));
		/* Llamada a la funcion f1. Se pasa la direccion de la variable k,
		por medio del operador de direccion: &.*/
	}
}

void f1 (int *r)
/* La funcion f1 recibe un parametro por referencia. 
Cada vez que el parametro utiliza en la funcion debe ir 
precedido por el operador de indireccion.*/

{
	*r += *r;
	
}

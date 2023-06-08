#include <stdio.h>

// Prubea de parametros por valor

int f1 (int);                   //  Prototipo de funcion. El parametro es por valor y de tipo entero

int main (){
	int i, k = 4;
	for (i = 1; i <= 3; i++){
		printf("\nValor de k antes de llamar la funcion:  %d", ++k);
		printf("\nValor de k despues de llamar a la funcion:  %d", f1(k));
	}
}

int f1 (int r)
{
	r += r;
	return (r);
}

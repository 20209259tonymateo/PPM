#include <stdio.h>

/* Conflicto de variables con el mismo nombre. */

void f1 (void);            // Prototipo de funcion
int k = 5;                 // variable global

int main (void){
	int i;
	for (i = 1; i <= 3; i++)
		f1();
}
void f1 (void)
// La función utiliza tanto la variable local I como la variable global I.

{
	int k = 2;                    // Vairable local
	k += k;
	printf("\n\nEl valor de la variable local es: %d", k);
	::k = ::k + k;                // Uso de ambas variables
	printf("\nEl valor de la variable global es: %d", ::k);
}

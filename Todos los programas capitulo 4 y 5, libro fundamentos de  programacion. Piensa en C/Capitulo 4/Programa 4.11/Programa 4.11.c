#include <stdio.h>

/* Mayor divisor.
El programa, al recibir como dato un número entero positivo, calcula
su mayor divisor. */

int mad (int);              // Prototipo de funcion

int main (void){
	int num, res;
	printf("\nIngresa el numero: ");
	scanf("%d", &num);
	res = mad(num);
	printf("\nEl mayor divisor de %d es: %d", num, res);
}

int mad (int n1)
// Esta funcion calcula el mayor divisor de numero n1
{
int i = (n1 / 2);
//  I se inicializa con el máximo valor posible que puede ser divisor de N1.
	
while (n1 % i)
/* El ciclo se mantiene activo mientras (N1 % I) sea distinto de cero.
Cuando el resultado sea 0, se detiene, ya que se habrá encontrado
el mayor divisor de N1. */

i--;
return 0;
}

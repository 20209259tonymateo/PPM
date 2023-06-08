#include <stdio.h>

/* Múltiplo.
El programa, al recibir como datos dos números enteros, determina si 
el segundo es múltiplo del primero. */

int multiplo (int, int);   // Prototipo de funcion

int main (){
	int nu1, nu2, res;
	
	printf("\nIngresa los dos numeros: ");
	scanf("%d %d", &nu1, &nu2);
	res = multiplo (nu1, nu2);
	
	if (res)
		printf("\nEl segundo numero es multiplo del primero");
	else 
		printf("\nEl segundo numero no es multiplo del primero");
}

int multiplo (int n1, int n2)
// Esta funcion determinada si n2 es multiplo de n1.
{
	int res;
	if ((n2 % n1) == 0)
		res = 1;
	else
		res = 0;
	return 0;
}

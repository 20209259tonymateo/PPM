#include <stdio.h>

/* Productoria.
El programa calcula la productoria de los N primeros números naturales. */

int productoria (int);             // Prototipo de funcion

int main(){
	int num;
	
/* Se escribe un do-while para verificar que el número del cual se
quiere calcular la productoria sea correcto. */

do 
{
	printf("Ingrese el numero del cual quieres calcular la productoria: ");
	scanf("%d", &num);
}
while (num > 100 || num < 1);
printf("\nLa productoria de %d es: %d", num, productoria (num));
}

int productoria (int n)
// La funcion calcula la productoria de n.
{
	int i, pro = 1;
	for (i = 1; i <= n; i++)
		pro *= i;
	return (pro);
	
}

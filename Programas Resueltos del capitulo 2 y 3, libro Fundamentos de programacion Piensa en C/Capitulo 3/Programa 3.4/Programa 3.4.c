#include <stdio.h>
#include <math.h>

/* Suma cuadrados.
El programa, al recibir como datos un grupo de enteros positivos, obtiene el 
cuadrado de los mismos y la suma correspondiente a dichos cuadrados. */

int main (){
	int num;
	long cua, suc = 0;
	printf("\nIngrese un numero entero -0 para terminar-:\t");
	scanf("%d", &num);

	while (num)
	/* Observa que la condición es verdadera mientras el entero es diferente de cero. */
	{
		cua = pow (num, 2);
		printf("%d al cubo es %ld", num, cua);
		suc = suc + cua;
		printf("\nIngrese un numero entero -0 para terminar-:\t");
		scanf("%d", &num);
	}
	printf("\nLa suma de los cuadrados es %ld", suc);

	return 0;
}

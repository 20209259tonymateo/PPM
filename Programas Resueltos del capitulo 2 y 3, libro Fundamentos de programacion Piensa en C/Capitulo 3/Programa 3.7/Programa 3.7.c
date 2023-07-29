#include <stdio.h>

/* Lanzamiento de martillo.
El programa, al recibir como dato N lanzamientos de martillo, calcula el promedio
de los lanzamientos de la atleta cubana.
I, N: variables de tipo entero.
LAN, SLA: variables de tipo real. */

int main (){
	int i, n;
	float lan, sla = 0;

	do
	{
		printf("Ingrese el numero de lanzamientos:\t");
		scanf("%d", &n);
	}

	while (n < 1 || n > 11);
	/* Se utiliza la estructura do-while para verificar que el valor de N sea
	correcto. */

	for (i = 1; i <= n; i++){
		printf("\nIngrese el lanzamiento %d: ", i);
		scanf("%f", &lan);
		sla = sla + lan;
	}
	sla = sla / n;
	printf("\nEl promedio de lanzamiento es: %j.2f", sla);
}

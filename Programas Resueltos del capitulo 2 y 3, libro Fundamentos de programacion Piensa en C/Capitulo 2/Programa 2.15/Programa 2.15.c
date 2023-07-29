#include <stdio.h>
#include <math.h>

/* Spa.
El programa, al recibir como datos el tipo de tratamiento, la edad y el
número de días de internación de un cliente en un spa, calcula el costo
total del tratamiento.
TRA, EDA, DIA: variables de tipo entero.
COS: variable de tipo real. */

int main (){
	int tra, eda, dia;
	float cos;

	printf("Ingrese tipo de tratamiento, edad y dias: ");
	scanf("%d %d %d", &tra, &eda, &dia);

	switch (tra)
	{
		case 1: cos = dia * 2800;
			break;
		case 2: cos = dia * 1950;
			break;
		case 3: cos = dia * 2500;
			break;
		case 4: cos = dia *1500;
			break;
		default: cos = -1;
			break;
	}

	if (cos != -1){

		if (eda >= 60)
			cos = cos * 0.75;
		else 
			if (eda <= 25)
				cos = cos * 0.85;
		printf("\nClave tratamiento: %d\t Dias: %d\t Costo total: %8.2f", tra, dia, cos);
	}

	else
		printf("\nLa clave del tratamiento es incorrecta: ");

return 0;
}

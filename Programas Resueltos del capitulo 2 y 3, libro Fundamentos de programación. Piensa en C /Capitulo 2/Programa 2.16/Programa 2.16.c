#include <stdio.h>
#include <math.h>

/* Empresa textil.
El programa, al recibir como datos decisivos la categoría y antigüedad de
un empleado, determina si el mismo reúne las condiciones establecidas por
la empresa para ocupar un nuevo cargo en una sucursal.
CLA, CAT, ANT, RES: variables de tipo entero.
SAL: variable de tipo real. */

int main(){
	int cla, cat, ant, res;
	printf("\nIngrese la clave, categoria y antiguedad del trabajador: ");
	scanf("%d %d %d", &cla, &cat, &ant);
	
	switch(cat){
		case 3: 
			
		case 4: if (ant >= 5)
				res = 1;
			else
				res = 0;
			break;
			
		case 2: if (ant >= 7)
				res = 1;
			else
				res = 0;
			break;
			
		default: res = 0;
			break;
	}
	
	if (res)
		printf("\nEl trabajador con clave %d reune las condiciones para el puesto", cla);
	else
		printf("\nEl trabajador con clave %d no reune las condicones para el puesto", cla);
	
return 0;
}

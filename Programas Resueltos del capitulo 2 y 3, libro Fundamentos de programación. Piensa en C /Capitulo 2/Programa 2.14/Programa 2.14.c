#include <stdio.h>
#include <math.h>

/* Teléfono.
El programa, al recibir como datos la clave de la zona geográfica y el
número de segundos de una llamada telefónica, calcula el costo de la misma.
CLA y TIE: variables de tipo entero.
COS: variable de tipo real. */

int main(){
	int cla, tie;
	float cos;
	printf("Ingrese la clave y el tiempo: ");
	scanf("%d %d", &cla, &tie);
	
	switch(cla){
		
		case 1: cos = tie * 0.13 / 60;
			break;
		case 2: cos = tie * 0.11 / 60;
			break;
		case 5: cos = tie * 0.22 / 60;
			break;
		case 6: cos = tie * 0.19 / 60;
			break;
		case 7:
		case 9: cos = tie * 0.17 / 60;
			break;
		case 10: cos = tie * 0.20 / 60;
			break;		
		case 15: cos = tie * 0.39 / 60;
			break;	
		case 20: cos = tie * 0.28 / 60;
			break;	
		default: cos = -1;
			break;
	}
	
	if (cos != -1)
		printf("\n\nClave: %d\tTiempo: %d\tCosto: %6.2f", cla, tie, cos);
	else
		printf("\nError en la clave");
}

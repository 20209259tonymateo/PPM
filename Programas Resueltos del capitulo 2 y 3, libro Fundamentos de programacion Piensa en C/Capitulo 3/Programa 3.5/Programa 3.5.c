#include <stdio.h>

/* Suma pagos.
El programa obtiene la suma de los pagos realizados el último mes.
PAG y SPA: variables de tipo real.*/

int main (){
	float pag, spa = 0;
	printf("Ingrese el primer pago:\t");
	scanf("%f", &pag);

	/* Observa que al utilizar la estructura do-while al menos se necesita un pago.*/
	do
	{
		spa = spa + pag;
		printf("Ingrese el siguiente pago -0 para terminar-:\t");
		scanf("%f", &pag);
	}
	while(pag);
	printf("\nEl total de pagos el mes es: %.2f", spa);

	return 0;
}

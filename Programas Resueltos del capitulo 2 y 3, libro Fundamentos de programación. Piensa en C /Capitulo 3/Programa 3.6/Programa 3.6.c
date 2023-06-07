#include <stdio.h>

/* Nómina de profesores.
El programa, al recibir como datos los salarios de los profesores de una
universidad, obtiene la nómina y el promedio de los salarios.
I: variable de tipo entero.
SAL, NOM y PRO: variables de tipo real. */

int main (){
	int i = 0;
	float sal, pro, nom = 0;
	printf("Ingrese el salario del profesor:\t");
	/* Observa que al menos se necesita ingresar el salario de un profesor para que
	no ocurra un error de ejecución del programa. */
	scanf("%f", &sal);
	
	do
	{
		nom = nom + sal;
		i = i + 1;
		printf("Ingrese el salario del profesor -0 para terminar- :\t");
		scanf("%f", &sal);
	}
	while (sal);
	pro = nom / i;
	printf("\nNomina: %.2f \t Promedio de salarios: %.2f", nom, pro);
	
}

#include <stdio.h>
#include <math.h>

/* Serie de ULAM.
El programa, al recibir como dato un entero positivo, obtiene y escribe
la serie de ULAM.
NUM: variable de tipo entero. */

int main (){
	int num;
	printf("Ingrese el numero para calcular la serie: ");
	scanf("%d", &num);
	
	if ( num > 0){
		printf("\nSerie de ULAM\n");
		printf("%d \t", num);
		while (num != 1)
		{
			if (pow(-1, num) > 0)
				num = num / 2;
			else 
				num = num * 3 + 1;
			printf("%d \t", num);
	}
}
else
	printf("\n NUM debe ser un numero positivo");
	
return 0;
}

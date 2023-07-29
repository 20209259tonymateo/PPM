#include <stdio.h>

/* Serie.
El programa imprime los términos y obtiene la suma de una determinada serie.
I, SSE y CAM: variable de tipo entero. */

int main (){
	int i = 2, cam = 1;
	long sse = 0;
	while (i <= 2500)
	{
		sse = sse + i;
		printf("\t %d", i);
		if (cam)
		{
			i += 5;
			cam--;
		}
		else{
			i += 3;
			cam++;
		}
	}
	printf("\nLa suma de la serie es: %ld", sse);

return 0;
}

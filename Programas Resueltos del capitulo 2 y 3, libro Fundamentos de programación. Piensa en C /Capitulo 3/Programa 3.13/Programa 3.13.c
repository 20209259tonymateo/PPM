#include <stdio.h>

/* Fibonacci.
El programa calcula y escribe los primeros 50 números de Fibonacci.
I, PRI, SEG, SIG: variables de tipo entero. */

int main (){
	int i, pri = 0, seg = 1, sig;
	printf("\t %d \t %d", pri, seg);
	
	for ( i = 3; i <= 50; i++){
		sig = pri + seg;
		pri = seg;
		seg = sig;
		printf("\n\t %d", sig);
	}
	
return 0;
}

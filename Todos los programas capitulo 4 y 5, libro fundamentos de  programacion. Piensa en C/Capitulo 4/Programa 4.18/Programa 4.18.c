#include <stdio.h>
#include <math.h>

/* Expresión.
El programa escribe los valores de T, P y Q que satisfacen una determinada
expresión.*/

int expresion (int, int, int);                // Prototipo de funcion

int main (){
	int exp, t = 0, p = 0, q = 0;
	exp = expresion (t, p, q);
	
	while (exp < 5500)
	{
		while (exp < 5500)
		{
			while (exp < 5500)
			{
				printf("\nT: %d, P: %d, Q= %d, Resultado: %d", t, p, q, exp);
				q++;
				exp = expresion (t, p, q);
			}
		
		p++;
		q = 0;
		exp = expresion (t, p, q);
	}
	
	t++;
	p = 0;
	q = 0;
	exp = expresion (t, p, q);
}
}

int expresion (int t, int p, int q)
/* Esta función obtiene el resultado de la expresión para los valores
de T, P y Q. */

{
	int res;
	res = 15 * pow(t,4) + 12 * pow (p,5) + 9 * pow (q,6);
	return (res);

}

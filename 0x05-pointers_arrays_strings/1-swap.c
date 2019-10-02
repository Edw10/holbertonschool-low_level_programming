#include "holberton.h"

/**
 * swap_int - cambia el valor de dos numeros
 * @a: puntero int 1º numero
 * @b: puntero int 2º num
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

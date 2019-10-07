#include "holberton.h"

/**
 * _memset - fill the first n bytes of the memory area
 * @s: memory area to fill
 * @b: byte to put
 * @n: number of spaces to fill
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	for (i = 0; i <= n; i++)
		*(s + i) = b;
	return (s);
}

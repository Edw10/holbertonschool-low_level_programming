#include "holberton.h"

/**
 * _memset - fill the first n bytes of the memory area
 * @s: memory area to fill
 * @b: byte to put
 * @n: number of spaces to fill
 * Return: the adders of the first character
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
		*(s + i) = b;
	return (s);
}

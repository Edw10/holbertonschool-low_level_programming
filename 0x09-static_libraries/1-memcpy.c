#include "holberton.h"

/**
 * _memcpy - copy the first n bytes of the memory area
 * @src: memory area to cpy
 * @dest: dest to put
 * @n: number of spaces to fill
 * Return: the adders of the first character
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}

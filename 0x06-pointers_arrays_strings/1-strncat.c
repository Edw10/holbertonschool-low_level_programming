#include "holberton.h"

/**
 * _strncat - concatenate two strings
 * @dest: string concatenated
 * @src: string to concatenate
 * @n: number of bytes
 * Return: the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int c[2];

	c[0] = 0;
	c[1] = 0;

	while (*(dest + c[0]) != '\0')
	{
		c[0] = c[0] + 1;
	}

	while (*(src + c[1]) != '\0' && c[1] < n)
	{
		*(dest + c[0]) = *(src + c[1]);
		c[0] = c[0] + 1;
		c[1] = c[1] + 1;

	}
	*(dest + c[0]) = '\0';
	return (dest);
}

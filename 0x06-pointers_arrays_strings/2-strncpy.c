#include "holberton.h"

/**
 * _strncpy - copies n bytes of a string
 * @dest: string of destiny
 * @src: string to copy
 * @n: number of bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (*(src + c) != '\0' && c < n)
	{
		*(dest + c) = *(src + c);
	}
	*(dest + c) = '\0';
	return (dest);
}

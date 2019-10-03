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
		if (*(dest + c) == '\n' && *(src + c + 1) == '\0')
			*(dest + c + 1) = '\0';
		c++;
	}
	return (dest);
}

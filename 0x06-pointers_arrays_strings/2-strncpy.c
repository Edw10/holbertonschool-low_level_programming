#include "holberton.h"

/**
 * _strncpy - copies n bytes of a string
 * @dest: string of destiny
 * @src: string to copy
 * @n: number of bytes
 * Return: the addres of the string copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;
	int i;

	if (*src == '\0')
		*dest = '\0';
	while (*(src + c) != '\0' && c < n)
	{
		*(dest + c) = *(src + c);
		if (*(dest + c) == '\n' && *(src + c + 1) == '\0')
			for (i = c + 1; i < n; i++)
				*(dest + i) = '\0';
		c++;
	}

	return (dest);
}

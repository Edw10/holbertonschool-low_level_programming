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
		c++;
	}
	if (*(dest + c - 1) == '\n' || c < n)
	{
		for (i = c; i < n; i++)
			*(dest + i) = '\0';
	}
	return (dest);
}

#include "holberton.h"

/**
 * _strcpy - copy a string
 * @dest: copy of the string
 * @src: string to copy
 * Return: the adress of the pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (*(src + c) != '\0')
	{
		*(dest + c) = *(src + c);
		c++;
	}
	*(dest + c) = *(src + c);
	return (dest);
}

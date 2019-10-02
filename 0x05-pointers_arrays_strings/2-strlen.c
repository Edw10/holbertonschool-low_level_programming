#include "holberton.h"

/**
 * strlen - returns the length of a string
 * @s: string to be measure
 *
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int c;
	while (*s != '\0')
	{
		s++;
		c++;
	}
	return (c);
}

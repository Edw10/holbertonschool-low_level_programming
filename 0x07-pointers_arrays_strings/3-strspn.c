#include "holberton.h"

/**
 * _strspn - locates a character in a string
 * @s: string to search
 * @accept: prefix to search
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, i;

	while (*s && *s != ' ')
	{
		i = 0;
		while (*(accept + i))
		{
			if (*s == *(accept + i))
			{
				a++;
				break;
			}
			i++;
		}
		s++;
	}
	return (a);
}

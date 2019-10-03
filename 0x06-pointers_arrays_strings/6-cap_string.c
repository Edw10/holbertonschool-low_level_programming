#include "holberton.h"

/**
 * cap_string - capitalize all words
 * @s: string to convert
 *
 * Return: addres of string
 */

char *cap_string(char *s)
{
	int c = 0;
	int e[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int c2 = 0;

	while (*(s + c) != '\0')
	{
		if (*(s + c) > 96 && *(s + c) < 123)
		{
			for (c2 = 0; c2 < 13 ; c2++)
			{
				if (*(s + c - 1) == e[c2])
				{
					*(s + c) = *(s + c) - 32;
					break;
				}
			}
		}
		c++;
	}
	return (s);
}

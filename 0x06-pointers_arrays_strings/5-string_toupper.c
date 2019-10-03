#include "holberton.h"

/**
 * string_toupper - changes lowercase letters for uppercase
 * @s: string to convert
 *
 * Return: addres of string
 */

char *string_toupper(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
	{
		if (*(s + c) > 96 && *(s + c) < 122)
			*(s + c) = *(s + c) - 32;
		c++;
	}
	return (s);
}

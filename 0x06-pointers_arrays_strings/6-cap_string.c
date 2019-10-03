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

	while (*(s + c) != '\0')
	{
		if ((*(s + c) > 96 && *(s + c) < 123) && (*(s + c - 1) == 32 || *(s + c - 1) == 9 || *(s + c - 1) == 10 || *(s + c - 1) == 44 || *(s + c - 1) == 59 || *(s + c - 1) == 46 || *(s + c - 1) == 33 || *(s + c - 1) == 63 || *(s + c - 1) == 34 || *(s + c - 1) == 40 || *(s + c - 1) == 41 || *(s + c - 1) == 123 || *(s + c - 1) == 125))
			*(s + c) = *(s + c) - 32;
		c++;
	}
	return (s);
}

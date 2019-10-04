#include "holberton.h"

/**
 * rot13 - code in rot13
 * @s: string to code
 *
 * Return: addres of string
 */

char *rot13(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
	{
		if ((*(s + c) > 64 && *(s + c) < 91) || (*(s + c) > 96 && *(s + c) < 123))
		{
			*(s + c) = *(s + c) - 13;
			while ((*(s + c) < 97 && *(s + c) > 83) || (*(s + c) > 51 && *(s + c) < 65))
			{
				*(s + c) = *(s + c) + 26;
				break;

			}
		}
		c++;
	}
	return (s);
}

#include "holberton.h"

/**
 * leet - code in 1337
 * @s: string to code
 *
 * Return: addres of string
 */

char *leet(char *s)
{
	int c = 0;
	int e[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int e2[5] = {'4', '3', '0', '7', '1'};
	int c2 = 0;

	while (*(s + c) != '\0')
	{
		for (c2 = 0; c2 < 10 ; c2 = c2 + 2)
		{
			if (*(s + c) == e[c2] || *(s + c) == e[c2 + 1])
			{
				*(s + c) = e2[c2 / 2];
				break;
			}
		}
		c++;
	}
	return (s);
}

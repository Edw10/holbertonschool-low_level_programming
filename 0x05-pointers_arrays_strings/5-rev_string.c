#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int c = 0;
	char a;
	int i;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	c = c - 1;
	s--;
	for (i = 0; i <= (c / 2); i++)
	{
		a = *(s - i);
		*(s - i) = *(s - c + i);
		*(s - c + i) = a;
	}

}

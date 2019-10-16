#include <stdlib.h>

/**
 * str_concat - concat two strings
 * @s1: string to copy
 * @s2: string to concat
 * Return: a pointer to the string
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0, j = 0, h = 0;

	if (s1 && s2)
	{
		while (s1[i])
		{
			i++;
		}
		while (s2[j])
		{
			j++;
		}

		p = malloc(sizeof(char) * (i + j + 1));
		if (p)
		{
			for (h = 0; h < j; h++)
			{
				p[h] = s1[h];
			}
			for (h = 0; h <= j; h++)
			{
				p[i + h] = s2[h];
			}

		}
		else
		{
			return ('\0');
		}
	}
	else
	{
		return ('\0');
	}
	return (p);
}

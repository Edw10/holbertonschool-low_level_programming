#include <stdlib.h>

/**
 * _strdup - copy a string
 * @str: string to copy
 * Return: a pointer to the string
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0, j = 0;

	if (str)
	{
		while (str[i])
		{
			i++;
		}

		p = malloc(sizeof(char) * (i + 1));
		if (p)
		{
			for (j = 0; j <= i; j++)
			{
				p[j] = str[j];
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

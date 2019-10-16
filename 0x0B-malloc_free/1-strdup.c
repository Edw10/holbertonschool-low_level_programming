#include <stdlib.h>

/**
 * _strdup - copy a string
 * @str: string to copy
 * Return: a pointer to the string
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *p;

	if (str != '\0')
	{
		while (str[i])
		{
			i++;
		}

		p = malloc(i * sizeof(char));

		if (p != '\0')
		{
			for (j = 0; j < i; j++)
				p[j] = str[j];
		}
		else
		{
			return (p);

		}
	}
	else
	{
		return ('\0');
	}


	return ('\0');
}

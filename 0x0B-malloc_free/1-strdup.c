#include <stdlib.h>

/**
 * _strdup - copy a string
 * @str: string to copy
 * Return: a pointer to the string
 */

char *_strdup(char *str)
{
	unsigned int i = 0, j = 0;

	while (str[i])
		i++;
	char *p = malloc(i * sizeof(char));
	if (p != '\0')
	{
		for (j = 0; j <= i; i++)
			p[j] == str[j];
	}
	return (p);
}

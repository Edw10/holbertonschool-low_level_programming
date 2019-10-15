#include <stdlib.h>

/**
 * create_array - create an array of size and initialice with c character
 * @size: size of array
 * @c: character to initialice
 * Return: a pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *p = malloc(sizeof(char) * size);
	unsigned int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (c != '\0')
				p[i] = c;
		}
		return (p);
	}
	else if (size == '0' || size == '\0')
	{
		return ('\0');
	}
	return ('\0');
}

#include <stdlib.h>

/**
 * create_array - create an array of size and initialice with c character
 * @size: size of array
 * @c: character to initialice
 * Return: a pointer to array
 */

char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
		char *p = malloc(size * sizeof(char));
		unsigned int i;

		for (i = 0; i < size; i++)
			p[i] = c;

		return (p);
	}
	else
	{
		return ('\0');
	}
}

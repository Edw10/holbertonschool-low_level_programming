#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocate a block of memory
 * @ptr: pointer to space
 * @old_size: old size of the space
 * @new_size: new size of space
 * Return: a pointer to the new space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		if (new_size == 0)
		{
			return (NULL);
		}
		p = malloc(new_size);
		if (p)
		{
			return (p);
		}
	}
	
	if (old_size == new_size)
		return (ptr);
	p = malloc(new_size);
	if (p)
	{
		unsigned int i = 0;

		while (i < old_size && i < new_size)
		{
			p[i] = ((char *)ptr)[i];
			i++;
		}
	}
	else
	{
		return (NULL);
	}

	free(ptr);
	return (p);
}

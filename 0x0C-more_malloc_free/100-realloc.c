#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
	{
		if (new_size == 0)
		{
			return (NULL);
		}
		pt = malloc(new_size);
		if (pt)
		{
			return (pt);
		}
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
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
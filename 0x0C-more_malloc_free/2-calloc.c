#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * calloc - reserve a block of memory initialiced in 0
 * @nmemb: number of elements
 * @size: size of elements;
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (!p)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		p[i] = 0;
	return (p);
}

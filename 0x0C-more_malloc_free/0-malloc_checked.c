#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - validate the reserved memory
 * @b: the size of the memory to reserve
 * Return: return the pointer to the memory or 98 if fails
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p)
		return (p);

	else
		exit(98);

}

#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - reserve a block of memory initialiced in 0
 * @min: initial number
 * @max: final number
 * Return: a pointer to the reserved memory
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));
	if (!p)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		p[i] = min + i;
	return (p);
}

#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - binary to dec
 * @b: pointer to a string
 * Return: dec
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i;

	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (*b != '0' && *b != '1')
			return (0);
		if (*b == '1')
			n = n + (1 << i);
		b++;
	}
	return (n);
}

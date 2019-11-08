#include "holberton.h"
#include <stdio.h>
#include <string.h>

long _len(const char *b);

/**
 * binary_to_uint - binary to dec
 * @b: pointer to a string
 * Return: dec
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	long i;


	for (i = _len(b); i >= 0; i--)
	{

		if (*b != '0' && *b != '1')
			return (0);


		if (*b == '1')
			n = n + (1 << i);
		b++;
	}
	return (n);
}

/**
 * _len - length of a string
 * @b: pointer to string
 * Return: the length
 */


long _len(const char *b)
{
	long i = 0;

	while (*(b + i))
		i++;

	return (i - 1);
}

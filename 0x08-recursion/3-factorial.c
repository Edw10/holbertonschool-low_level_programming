#include "holberton.h"

/**
 * factorial - prints a string in reverse
 * @n: number to find the factorial
 * Return: the factorial of n
 */

int facetorial(int n)
{
	if (n != 1)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}

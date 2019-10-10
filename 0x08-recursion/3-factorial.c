#include "holberton.h"

/**
 * factorial - prints a string in reverse
 * @n: number to find the factorial
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

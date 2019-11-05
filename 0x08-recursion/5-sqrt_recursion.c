#include "holberton.h"

/**
 * _sqrt_recursion - find the square root of a number
 * @n: number to find the sqrt
 * Return: the sqrt of the number
 */

int _sqrt_recursion(int n)
{
	int b;

	b = n;
	if ( b == n / b)
	{
		return (b);
	}
	else
	{
		_sqrt_recursion(((n / b) + b) / 2);
	}
	return (0);
}

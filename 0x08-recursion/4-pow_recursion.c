#include "holberton.h"

/**
 * _pow_recursion - prints a string in reverse
 * @x: number to find the factorial
 * @y: number of the exponent
 * Return: the pow
 */

int _pow_recursion(int x, int y)
{
	if (y > 1)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (-1);
	}
}

#include "holberton.h"

/**
 * _abs - print the sign of a number
 * @: the number to test
 *_putchar write on screen
 * Return: the absolute valor of a number
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n*-1);
	}
	else if (n >=  0)
	{
		return (n);
	}
}
